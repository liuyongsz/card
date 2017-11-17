using System.Collections.Generic;

namespace TinyBinaryXml
{
	public class TbXmlNode
	{
        public ushort id = 0;

        public List<ushort> childrenIds = null;

        public ushort templateId = 0;

        public List<int> attributeValues = null;

        public TbXml tbXml = null;

        public int text = -1;

        public string GetText()
        {
            if (text == -1)
            {
                return string.Empty;
            }
            else
            {
                return tbXml.stringPool[text];
            }
        }

		public string GetStringValue(string name)
		{
			object value = GetValue(ref name);
            if (value == null)
            {
                return string.Empty;
            }
			if(value is double)
			{
				return value.ToString();
			}
			else
			{
				return value as string;
			}
		}

        public double GetDoubleValue(string name)
        {
            object value = GetValue(ref name);
            if (value is double)
            {
                return (double)value;
            }
            else
            {
                return 0;
            }
        }

		public float GetFloatValue(string name)
		{
            object value = GetValue(ref name);
            if (value is double)
            {
                return (float)(double)value;
            }
            else
            {
                return 0.0f;
            }
		}

		public int GetIntValue(string name)
		{
            object value = GetValue(ref name);
            if (value is double)
            {
                return (int)(double)value;
            }
            else
            {
                return 0;
            }
		}

		public uint GetUIntValue(string name)
		{
            object value = GetValue(ref name);
            if (value is double)
            {
                return (uint)(double)value;
            }
            else
            {
                return 0;
            }
		}

		public byte GetByteValue(string name)
		{
            object value = GetValue(ref name);
            if (value is double)
            {
                return (byte)(double)value;
            }
            else
            {
                return 0;
            }
		}

		public ushort GetUShortValue(string name)
		{
            object value = GetValue(ref name);
            if (value is double)
            {
                return (ushort)(double)value;
            }
            else
            {
                return 0;
            }
		}

		public short GetShortValue(string name)
		{
            object value = GetValue(ref name);
            if (value is double)
            {
                return (short)(double)value;
            }
            else
            {
                return 0;
            }
		}

        public bool GetBooleanValue(string name)
        {
            object value = GetValue(ref name);
            if (value == null)
            {
                return false;
            }
            if (value is double)
            {
                return !UnityEngine.Mathf.Approximately(0.0f, (float)(double)value);
            }
            else
            {
                return value.ToString() == "true";
            }
        }

        public object GetValue(ref string name)
		{
			TbXmlNodeTemplate nodeTemplate = tbXml.nodeTemplates[templateId];
			int attributeIndex;
			if(nodeTemplate.attributeNameIndexMapping.TryGetValue(name, out attributeIndex))
			{
                if (nodeTemplate.attributeTypes[attributeIndex] == TB_XML_ATTRIBUTE_TYPE.DOUBLE)
                {
                    return tbXml.valuePool[attributeValues[attributeIndex]];
                }
                else
                {
                    return tbXml.stringPool[attributeValues[attributeIndex]];
                }
			}
			else
			{
				return null;
			}
		}

		public List<TbXmlNode> GetNodes(string path)
		{
			if(string.IsNullOrEmpty(path))
			{
				return null;
			}

			List<TbXmlNode> resultNodes = null;
			int numChildren = childrenIds == null ? 0 : childrenIds.Count;
			string[] pathBlocks = path.Split('/');
			for(int childIndex = 0; childIndex < numChildren; ++childIndex)
			{
				TbXmlNode childNode = tbXml.nodes[childrenIds[childIndex]];
				GetNodesRecursive(pathBlocks, 0, ref pathBlocks[0], childNode, ref resultNodes);
			}
			
			return resultNodes;
		}

		private void GetNodesRecursive(string[] pathBlocks, int pathBlockIndex, ref string pathBlock, TbXmlNode currentNode, ref List<TbXmlNode> resultNodes)
		{
			if(tbXml.nodeTemplates[currentNode.templateId].name.Equals(pathBlock))
			{
				if(pathBlockIndex == pathBlocks.Length - 1)
				{
					if(resultNodes == null)
					{
						resultNodes = new List<TbXmlNode>();
					}
					resultNodes.Add(currentNode);
				}
				else
				{
					List<ushort> childrenIds = currentNode.childrenIds;
					int numChildren = childrenIds == null ? 0 : childrenIds.Count;
					for(int childIndex = 0; childIndex < numChildren; ++childIndex)
					{
						GetNodesRecursive(pathBlocks, pathBlockIndex + 1, ref pathBlocks[pathBlockIndex + 1], tbXml.nodes[childrenIds[childIndex]], ref resultNodes);
					}
				}
			}
		}
	}
}

