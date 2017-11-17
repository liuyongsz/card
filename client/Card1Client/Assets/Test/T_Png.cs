using UnityEngine;
using System.Collections;
using System.IO;

public class T_Png : MonoBehaviour {

    public RenderTexture RenderTex;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
        
	}

    public void OnGUI()
    {
        if(GUI.Button(new Rect(0,40,100,40),"Save Png"))
        {

            SaveRenderTextureToPNG("png","2");


        }
    }

    //将RenderTexture保存成一张png图片  
    public bool SaveRenderTextureToPNG(string contents, string pngName)
    {
        Texture2D img = gameObject.GetComponent<UITexture>().mainTexture as Texture2D;

        Texture2D mTexture = new Texture2D(100,100, TextureFormat.RGB24, false);
        Rect mRect = new Rect(0,0,64,64);

        mTexture.ReadPixels(mRect, 0, 0);
        //应用  
        mTexture.Apply();

        //Texture2D png = new Texture2D(rt.width, rt.height, TextureFormat.ARGB32, false);
        Texture2D png = new Texture2D(64,64, TextureFormat.ARGB32, false);

        byte[] bytes = img.EncodeToPNG();
       // byte[] bytes = mTexture.EncodeToPNG();

        if (!Directory.Exists(contents))
            Directory.CreateDirectory(contents);
        FileStream file = File.Open(contents + "/" + pngName + ".png", FileMode.Create);
        BinaryWriter writer = new BinaryWriter(file);
        writer.Write(bytes);
        file.Close();
        
        return true;

    }
}
