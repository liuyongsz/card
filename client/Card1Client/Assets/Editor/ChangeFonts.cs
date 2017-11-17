using UnityEngine;
using UnityEditor;

/// <summary>
/// 根据鼠标点中的对象批量修改所有UI字体脚本，脚本位于Editor文件夹
/// </summary>
public class ChangeFontWindow : EditorWindow
{
    //是否改变当前字体
    private static bool isChangFont = false;

    //当前字体
    private static Font curFont;

    //是否改变字体类型
    private static bool isChangeStyle = false;

    //字体类型
    private static FontStyle curFontStyle;

    //是否增加字体大小
    private static bool isExpandSize = false;

    //字体大小增加的值
    private static int fontSizeDelta = 0;

    //window菜单下
    [MenuItem("Window/Change Font")]
    private static void ShowWindow()
    {
        ChangeFontWindow cw = GetWindow<ChangeFontWindow>(true, "修改字体");
        //（强迫症，看着舒服）
        cw.minSize = new Vector2(310, 200);
        cw.maxSize = new Vector2(310, 300);
    }

    private void OnGUI()
    {
        //向下空出5个像素
        GUILayout.Space(5);

        //创建是否改变当前字体开关
        isChangFont = EditorGUILayout.Toggle("是否改变当前字体", isChangFont);
        GUILayout.Space(5);

        //如果改变当前字体则创建字体文件选择框
        if (isChangFont)
        {
            curFont = (Font)EditorGUILayout.ObjectField("目标字体", curFont, typeof(Font), true);
            GUILayout.Space(5);
        }

        //创建是否改变字体类型开关
        isChangeStyle = EditorGUILayout.Toggle("是否改变字体类型", isChangeStyle);
        GUILayout.Space(5);

        //如果改变，则创建字体类型的枚举下拉框
        if (isChangeStyle)
        {
            curFontStyle = (FontStyle)EditorGUILayout.EnumPopup("字体类型", curFontStyle);
            GUILayout.Space(5);
        }

        //创建是否增加字体大小的开关
        isExpandSize = EditorGUILayout.Toggle("是否增加字体大小", isExpandSize);
        GUILayout.Space(5);

        //如果增加字体大小则创建增加字体大小值的滑条
        if (isExpandSize)
        {
            fontSizeDelta = (int)EditorGUILayout.Slider("增加字体大小的值", fontSizeDelta, -200, 200);
            GUILayout.Space(5);
        }

        //创建确认按钮
        if (GUILayout.Button("确认修改", GUILayout.Height(30), GUILayout.Width(300)))
        {
            Change();
        }
    }

    public static void Change()
    {
        //如果鼠标没有选中物体则返回
        if (Selection.objects == null || Selection.objects.Length == 0) { return; }

        //获取点中对象(包括子目录)所有UILabel组件
        Object[] labels = Selection.GetFiltered(typeof(UILabel), SelectionMode.Deep);

        //赋值
        foreach (Object item in labels)
        {
            UILabel label = (UILabel)item;

            if (isChangFont) { label.trueTypeFont = curFont; }

            if (isChangeStyle) { label.fontStyle = curFontStyle; }

            if (isExpandSize) { label.fontSize += fontSizeDelta; }

            EditorUtility.SetDirty(item); //重要(有点像应用设置的意思)
        }
    }
}