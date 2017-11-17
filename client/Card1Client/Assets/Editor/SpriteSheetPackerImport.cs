using UnityEngine;
using UnityEditor;
using System.Collections.Generic;
using System.IO;


public static class SpriteSheetPackerImport
{
    [MenuItem("Assets/Sprite Sheet Packer/Process to Sprites")]
    static void ProcessToSprite()
    {
        Texture2D image = Selection.activeObject as Texture2D;//��ȡ��ת�Ķ���
        string rootPath = Path.GetDirectoryName(AssetDatabase.GetAssetPath(image));//��ȡ·������
        string path = rootPath + "/" + image.name + ".PNG";//ͼƬ·������


        TextureImporter texImp = AssetImporter.GetAtPath(path) as TextureImporter;


        AssetDatabase.CreateFolder(rootPath, image.name);//�����ļ���


        foreach (SpriteMetaData metaData in texImp.spritesheet)//����Сͼ��
        {
            Texture2D myimage = new Texture2D((int)metaData.rect.width, (int)metaData.rect.height);


            //abc_0:(x:2.00, y:400.00, width:103.00, height:112.00)
            for (int y = (int)metaData.rect.y; y < metaData.rect.y + metaData.rect.height; y++)//Y������
            {
                for (int x = (int)metaData.rect.x; x < metaData.rect.x + metaData.rect.width; x++)
                    myimage.SetPixel(x - (int)metaData.rect.x, y - (int)metaData.rect.y, image.GetPixel(x, y));
            }


            //ת������EncodeToPNG���ݸ�ʽ
            if (myimage.format != TextureFormat.ARGB32 && myimage.format != TextureFormat.RGB24)
            {
                Texture2D newTexture = new Texture2D(myimage.width, myimage.height);
                newTexture.SetPixels(myimage.GetPixels(0), 0);
                myimage = newTexture;
            }
            var pngData = myimage.EncodeToPNG();


            //AssetDatabase.CreateAsset(myimage, rootPath + "/" + image.name + "/" + metaData.name + ".PNG");
            File.WriteAllBytes(rootPath + "/" + image.name + "/" + metaData.name + ".PNG", pngData);
        }
    }
}