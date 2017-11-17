using UnityEngine;
using System.Collections;
using System.Reflection;
using System.Collections.Generic;
using System.Xml;

public abstract class ConfigLoaderBase
{
    public bool IsLoaded
    {
        get { return m_isLoaded; }
    }
    private bool m_isLoaded = false;

    public void Load()
    {
        if (IsLoaded)
            return;

        OnLoad();
    }

    public void Unload()
    {
        if (!IsLoaded)
            return;

        OnUnload();
    }

    protected abstract void OnLoad();

    protected abstract void OnUnload();

    public bool ReadConfig<T>(string path, System.Action<T> rowHandler)
    {
        return ReadPlainXml<T>(path, rowHandler);
    }
   
    // 编辑器模式下采用明文 XML 读取
    // 发包时需要把XML转成二进制读取
    private bool ReadPlainXml<T>(string path, System.Action<T> rowHandler)
    {
        const string XmlConfigBundle = "configxml.bundle";
        //const string XmlConfigAssetPrefix = "Assets/Config/";

        //path = string.Format("{0}{1}", XmlConfigAssetPrefix, path);
        //TextAsset data = ResourceManager.LoadAsset<TextAsset>(path);

        TextAsset data = AssetBundleManager.LoadAsset<TextAsset>(XmlConfigBundle, System.IO.Path.GetFileNameWithoutExtension(path));

        if (data == null)
        {
            Debug.LogErrorFormat("Failed to load config from {0}", path);
            return false;
        }

        Dictionary<string, FieldInfo> fields = GetFields(typeof(T));

        if (fields == null || fields.Count == 0)
            return false;

        XmlDocument doc = new XmlDocument();
        try
        {
            doc.LoadXml(data.text);
        }
        catch (System.Exception ex)
        {
            Debug.LogErrorFormat("Failed to read xml from {0}. ({1})", path, ex.Message);
            return false;
        }

        var table = doc.SelectSingleNode("Object");
        if (table == null)
            return false;

        var rows = table.SelectNodes("Property");

        for (int i = 0; i < rows.Count; i++)
        {
            var row = rows[i] as XmlElement;
            if (row == null)
                continue;

            T rowInstance = (T)System.Activator.CreateInstance(typeof(T));
            if (rowInstance == null)
                return false;

            var attribs = row.Attributes;

            for (int j = 0; j < attribs.Count; j++)
            {
                var attribName = attribs[j].Name.ToLower();
                var attribVal = attribs[j].Value;


                FieldInfo field = null;
                if (!fields.TryGetValue(attribName, out field))
                    continue;

                SetField(field, rowInstance, attribVal);
            }

            rowHandler(rowInstance);
        }

        return false;
    }

    private void SetField(FieldInfo field, object obj, string strVal)
    {
        var fieldType = field.FieldType;

        if (fieldType == typeof(System.String))
        {
            field.SetValue(obj, strVal);
        }
        else if (fieldType == typeof(System.Int32))
        {
            int intVal = 0;
            System.Int32.TryParse(strVal, out intVal);
            field.SetValue(obj, intVal);
        }
        else if (fieldType == typeof(System.Int64))
        {
            long longVal = 0;
            System.Int64.TryParse(strVal, out longVal);
            field.SetValue(obj, longVal);
        }
        else if (fieldType == typeof(System.Single))
        {
            float floatVal = 0;
            System.Single.TryParse(strVal, out floatVal);
            field.SetValue(obj, floatVal);
        }
        else if (fieldType == typeof(System.Double))
        {
            double doubleVal = 0;
            System.Double.TryParse(strVal, out doubleVal);
            field.SetValue(obj, doubleVal);
        }
        else if (fieldType == typeof(System.UInt32))
        {
            uint uintVal = 0;
            System.UInt32.TryParse(strVal, out uintVal);
            field.SetValue(obj, uintVal);
        }
        else if (fieldType == typeof(System.UInt64))
        {
            ulong ulongVal = 0;
            System.UInt64.TryParse(strVal, out ulongVal);
            field.SetValue(obj, ulongVal);
        }
        else if (fieldType == typeof(System.Boolean))
        {
            bool boolVal = false;
            System.Boolean.TryParse(strVal, out boolVal);
            field.SetValue(obj, boolVal);
        }
        else
        {
            Debug.LogErrorFormat("Unsupported config type {0}", fieldType.ToString());
        }
    }

    private Dictionary<string, FieldInfo> GetFields(System.Type type)
    {
        Dictionary<string, FieldInfo> result = new Dictionary<string, FieldInfo>();

        var fields = type.GetFields();
        for (int i = 0; i < fields.Length; i++)
        {
            var field = fields[i];

            string fieldName = field.Name.ToLower();
            result[fieldName] = field;

        }

        return result;
    }

    private bool ReadBinary<T>(string path, System.Action<T> rowHandler)
    {
        throw new System.NotImplementedException();
    }
}
