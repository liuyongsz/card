/*
 * UnityScript Lightweight XML Parser
 * by Fraser McCormick (unityscripts@roguishness.com)
 * http://twitter.com/flimgoblin
 * http://www.roguishness.com/unity/
 *
 * You may use this script under the terms of either the MIT License 
 * or the Gnu Lesser General Public License (LGPL) Version 3. 
 * See:
 * http://www.roguishness.com/unity/lgpl-3.0-standalone.html
 * http://www.roguishness.com/unity/gpl-3.0-standalone.html
 * or
 * http://www.roguishness.com/unity/MIT-license.txt
 */

/* Usage:
 * parser=new XMLParser();
 * var node=parser.Parse("<example><value type=\"String\">Foobar</value><value type=\"Int\">3</value></example>");
 * 
 * Nodes are Boo.Lang.Hash values with text content in "_text" field, other attributes
 * in "@attribute" and any child nodes listed in an array of their nodename.
 * 
 * any XML meta tags <? .. ?> are ignored as are comments <!-- ... -->
 * any CDATA is bundled into the "_text" attribute of its containing node.
 *
 * e.g. the above XML is parsed to:
 * node={ "example": 
 *			[ 
 *			   { "_text":string.Empty, 
 *				  "value": [ { "_text":"Foobar", "@type":"String"}, {"_text":"3", "@type":"Int"}]
 *			   } 
 *			],
 *		  "_text":string.Empty
 *     }
 *		  
 */

using System.Text;

public class XMLParser
{
    private char LT = '<';
    private char GT = '>';
    private char SPACE = ' ';
    private char QUOTE = '"';
    private char QUOTE2 = '\'';
    private char SLASH = '/';
    private char QMARK = '?';
    private char EQUALS = '=';
    private char EXCLAMATION = '!';
    private char DASH = '-';
    //private char SQL  = '[';
    private char SQR = ']';

    public XMLNode Parse(string content,int iOffset=0)
    {
        XMLNode rootNode = new XMLNode();
        //rootNode["_text"] = System.String.Empty;
        rootNode["_text"] = new StringBuilder();

        bool inElement = false;
        bool collectNodeName = false;
        bool collectAttributeName = false;
        bool collectAttributeValue = false;
        bool quoted = false;

        StringBuilder nodeNameStrBuilder = new StringBuilder();
        StringBuilder attNameStrBuilder = new StringBuilder();
        StringBuilder attValueStrBuilder = new StringBuilder();
        StringBuilder textValueStrBuilder = new StringBuilder();

        bool inMetaTag = false;
        bool inComment = false;
        bool inCDATA = false;

        XMLNodeList parents = new XMLNodeList();

        XMLNode currentNode = rootNode;

        for (int i = iOffset; i < content.Length; i++)
        {
            char c = content[i];
            char cn = '~';  // unused char
            char cnn = '~'; // unused char
            char cp = '~';  // unused char

            if ((i + 1) < content.Length) cn = content[i + 1];
            if ((i + 2) < content.Length) cnn = content[i + 2];
            if (i > 0) cp = content[i - 1];

            if (inMetaTag)
            {
                if (c == QMARK && cn == GT)
                {
                    inMetaTag = false;
                    i++;
                }

                continue;
            }
            else
            {
                if (!quoted && c == LT && cn == QMARK)
                {
                    inMetaTag = true;
                    continue;
                }
            }

            if (inComment)
            {
                if (cp == DASH && c == DASH && cn == GT)
                {
                    inComment = false;
                    i++;
                }

                continue;
            }
            else
            {
                if (!quoted && c == LT && cn == EXCLAMATION)
                {

                    if ((content.Length > i + 9) && string.Compare("< ![CDATA[",0,content,i, 9)==0)
                    {
                        inCDATA = true;
                        i += 8;
                    }
                    else
                    {
                        inComment = true;
                    }

                    continue;
                }
            }

            if (inCDATA)
            {
                if (c == SQR && cn == SQR && cnn == GT)
                {
                    inCDATA = false;
                    i += 2;
                    continue;
                }

                textValueStrBuilder.Append(c);
                continue;
            }

            if (inElement)
            {
                if (collectNodeName)
                {
                    if (c == SPACE)
                    {
                        collectNodeName = false;
                    }
                    else if (c == GT)
                    {
                        collectNodeName = false;
                        inElement = false;
                    }

                    if (!collectNodeName && nodeNameStrBuilder.Length > 0)
                    {
                        if (nodeNameStrBuilder[0] == SLASH)
                        {
                            // close tag
                            if (textValueStrBuilder.Length > 0)
                            {
                                //currentNode["_text"] = textValueStrBuilder.ToString();
                                //currentNode["_text"] += textValueStrBuilder.ToString();
                                //(currentNode["_text"] as StringBuilder).Append( textValueStrBuilder.ToString() );
                            }

                            textValueStrBuilder.Remove(0, textValueStrBuilder.Length);
                            nodeNameStrBuilder.Remove(0, nodeNameStrBuilder.Length);
                            currentNode = parents.Pop();
                        }
                        else
                        {
                            if (textValueStrBuilder.Length > 0)
                            {
                                //currentNode["_text"] = textValueStrBuilder.ToString();
                                //currentNode["_text"] += textValueStrBuilder.ToString();
                                //(currentNode["_text"] as StringBuilder).Append( textValueStrBuilder.ToString() );
                            }

                            textValueStrBuilder.Remove(0, textValueStrBuilder.Length);
                            string nodeNameString = nodeNameStrBuilder.ToString();
                            XMLNode newNode = new XMLNode();
                            //newNode["_text"] = System.String.Empty;
                            newNode["_text"] = new StringBuilder();
                            newNode["_name"] = nodeNameString;

                            if (currentNode[nodeNameString] == null)
                            {
                                currentNode[nodeNameString] = new XMLNodeList();
                            }

                            XMLNodeList a = (XMLNodeList)currentNode[nodeNameString];
                            a.Push(newNode);
                            parents.Push(currentNode);
                            currentNode = newNode;
                            nodeNameStrBuilder.Remove(0, nodeNameStrBuilder.Length);
                        }
                    }
                    else
                    {
                        nodeNameStrBuilder.Append(c);
                    }
                }
                else
                {
                    if (!quoted && c == SLASH && cn == GT)
                    {
                        inElement = false;
                        collectAttributeName = false;
                        collectAttributeValue = false;

                        if (attNameStrBuilder.Length > 0)
                        {
                            if (attValueStrBuilder.Length > 0)
                            {
                                currentNode[attNameStrBuilder.Insert(0, '@').ToString()] = attValueStrBuilder.ToString();
                            }
                            else
                            {
                                currentNode[attNameStrBuilder.Insert(0, '@').ToString()] = true;
                            }
                        }

                        i++;
                        currentNode = parents.Pop();
                        attNameStrBuilder.Remove(0, attNameStrBuilder.Length);
                        attValueStrBuilder.Remove(0, attValueStrBuilder.Length);
                    }
                    else if (!quoted && c == GT)
                    {
                        inElement = false;
                        collectAttributeName = false;
                        collectAttributeValue = false;

                        if (attNameStrBuilder.Length > 0)
                        {
                            currentNode[attNameStrBuilder.Insert(0, '@').ToString()] = attValueStrBuilder.ToString();
                        }

                        attNameStrBuilder.Remove(0, attNameStrBuilder.Length);
                        attValueStrBuilder.Remove(0, attValueStrBuilder.Length);
                    }
                    else
                    {
                        if (collectAttributeName)
                        {
                            if (c == SPACE || c == EQUALS)
                            {
                                collectAttributeName = false;
                                collectAttributeValue = true;
                            }
                            else
                            {
                                attNameStrBuilder.Append(c);
                            }
                        }
                        else if (collectAttributeValue)
                        {
                            if (c == QUOTE || c == QUOTE2)
                            {
                                if (quoted)
                                {
                                    collectAttributeValue = false;
                                    currentNode[attNameStrBuilder.Insert(0, '@').ToString()] = attValueStrBuilder.ToString();

                                    attNameStrBuilder.Remove(0, attNameStrBuilder.Length);
                                    attValueStrBuilder.Remove(0, attValueStrBuilder.Length);
                                    quoted = false;
                                }
                                else
                                {
                                    quoted = true;
                                }
                            }
                            else
                            {
                                if (quoted)
                                {
                                    attValueStrBuilder.Append(c);
                                }
                                else
                                {
                                    if (c == SPACE)
                                    {
                                        collectAttributeValue = false;
                                        currentNode[attNameStrBuilder.Insert(0, '@').ToString()] = attValueStrBuilder.ToString();
                                        attNameStrBuilder.Remove(0, attNameStrBuilder.Length);
                                        attValueStrBuilder.Remove(0, attValueStrBuilder.Length);
                                    }
                                }
                            }
                        }
                        else if (c == SPACE)
                        {

                        }
                        else
                        {
                            collectAttributeName = true;

                            attNameStrBuilder.Remove(0, attNameStrBuilder.Length).Append(c);
                            attValueStrBuilder.Remove(0, attValueStrBuilder.Length);
                            quoted = false;
                        }
                    }
                }
            }
            else
            {
                if (c == LT)
                {
                    inElement = true;
                    collectNodeName = true;
                }
                else
                {
                    textValueStrBuilder.Append(c);
                }
            }
        }

        return rootNode;
    }
}