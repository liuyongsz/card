using UnityEngine;

public class BasePanel : MonoBehaviour
{

    /// <summary>
    /// 面板显示操作
    /// </summary>
    public void Show()
    {
        if (this.gameObject != null)
            this.gameObject.SetActive(true);
    }
    /// <summary>
    /// 关闭界面操作
    /// </summary>
    /// <param Name="bDistory">是否销毁</param>
    public void Destroy(bool bDistory)
    {
        if (this.gameObject != null)
        {
            if (bDistory)
                GameObject.Destroy(this.gameObject);
            else
                this.gameObject.SetActive(false);
        }
    }
}