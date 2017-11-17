using System.Collections;

public class XMLNode : Hashtable
{
    public XMLNodeList GetNodeList(string path)
    {
        return GetObject(path) as XMLNodeList;
    }

    public XMLNode GetNode(string path)
    {
        return GetObject(path) as XMLNode;
    }

    public string GetValue(string path)
    {
        return GetObject(path) as string;
    }

    private object GetObject(string path)
    {
        string[] bits = path.Split('>');
        XMLNode currentNode = this;
        XMLNodeList currentNodeList = null;
        bool listMode = false;
        object ob;

        for (int i = 0; i < bits.Length; i++)
        {
            if (listMode)
            {
                currentNode = (XMLNode)currentNodeList[int.Parse(bits[i])];
                ob = currentNode;
                listMode = false;
            }
            else
            {
                ob = currentNode[bits[i]];

                if (ob is ArrayList)
                {
                    currentNodeList = (XMLNodeList)(ob as ArrayList);
                    listMode = true;
                }
                else
                {
                    // reached a leaf node/attributed
                    if (i != (bits.Length - 1))
                    {
                        // unexpected leaf node
                        string actualPath = string.Empty;
                        for (int j = 0; j <= i; j++)
                        {
                            actualPath = actualPath + ">" + bits[j];
                        }

                        //LogSystem.Log("xml path search truncated. Wanted: " , path , " got: " , actualPath);
                    }

                    if (ob == null)
                    {
                        return string.Empty;
                    }
                    return ob;
                }
            }
        }

        if (listMode)
            return currentNodeList;
        else
            return currentNode;
    }
}