public class SceneVO
{
    public string sceneName;
    public EScene scenetype;
    public string abname;

    /// <summary>是否在加载中</summary>
    public bool loading;

    public SceneVO(string c_abname,string c_name,bool b,EScene type)
    {
        abname = c_name;
        sceneName = c_name;
        scenetype = type;

        
    }
}