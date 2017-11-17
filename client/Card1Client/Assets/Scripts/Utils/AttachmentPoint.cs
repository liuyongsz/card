
using UnityEngine;
/// <summary>
/// 得到绑定点
/// </summary>
public class AttachmentPoint : MonoBehaviour
{
    /// <summary>
    /// 注意，这个枚举数据是以int形式存在prefab里面的
    /// 增加新值必须赋值，不能用默认值
    /// 否则prefab里面的数据就是错误的了
    /// </summary>
    public enum Slot
    {
        None = 0,			// First element MUST be 'None'
        SelfBody = 1, //自身节点
        Head = 2,
        LeftHand = 3, //左手
        RightHand = 4, //右手
        Shoulders = 5, //背部（坐骑）
        LeftFoot = 6,//左脚
        RightFoot = 7,////右脚
        FBX = 8,
        /// <summary>
        /// 翅膀
        /// </summary>
        Wing = 9,
		RightHand_1 = 10,//武学对应武器类型,1类型的挂载点,挂在1类型武器时,找这个点,找不到再找RightHand
		RightHand_2 = 11,
		RightHand_3 = 12,
        RightHand_4 = 13,
        RightHand_5 = 14,
        RightHand_6 = 15,
        RightHand_7 = 16,
        RightHand_8 = 17,

        LeftHand_Fly = 18, //左手飞行特效
		RightHand_Fly = 19,//右手飞行特效
		Head_Fly = 20,//头部飞行特效
        Role_Cur_Position = 21, //显示在人物当前位置的特效
		Login_DaDao = 22, //皇甫瑶选角大刀特效

        SubWuxueWeapon = 23, //副武学武器
        Login_LuoLi01 = 24, //萝莉挂载特效
        Login_LuoLi02 = 25,
        // 升星
        UpStar_Spine = 122,
        UpStar_Spine2 = 123,
        UpStar_External = 124,
        UpStar_LeftCalf = 125,
        UpStar_RightCalf = 126,
        UpStar_LeftFoot = 127,
        UpStar_RightFoot = 128,
        UpStar_LeftForearm = 129,
        UpStar_RightForearm = 130,
        UpStar_LeftUpperarm = 131,
        UpStar_RightUpperarm = 132,
        UpStar_Bone1 = 133,
        UpStar_Bone4 = 134,
        UpStar_Bone14 = 135,
        UpStar_Bone16 = 136,
    }
    //当前点类型　
    public Slot slot;

    //武器或马
    [HideInInspector]
	public GameObject mChild;
	//武器子形态
	[HideInInspector]
	public GameObject mChildSub;

	/// <summary>
	/// 加入绑点
	/// </summary>
	/// <param name="root">模型根节点</param>
	/// <param name="go">挂载的武器或者特效等</param>
	/// <param name="isWeaponSub">是否为子武器</param>
	/// <param name="weaponType">出战武学对应的武器类型</param>
	public bool Attach(GameObject root, GameObject go, bool isWeaponSub, int weaponType)
    {
        if (go == null)
        {
            LogSystem.LogWarning("[Attach]::go is null");
            return false;
        }
		if (slot == Slot.RightHand && weaponType != 0 && root != null)
		{
			//挂载武器时，根据出战武学获取对应武器
			//判断是否存在对应武器的挂载点,没有对应点才使用RightHand
			AttachmentPoint[] attachments = root.GetComponentsInChildren<AttachmentPoint>(true);
			for (int i = 0; i < attachments.Length; i++)
			{
				if (attachments[i].slot == (Slot)((int)Slot.Wing + weaponType))
				{
					return attachments[i].Attach(root, go, isWeaponSub, weaponType);
				}
			}
		}

        //if (mChild != go)
        //{
        //    if (mChild != null && mChild.activeInHierarchy)
        //    {
        //        DelegateProxy.GamePoolDestory(mChild);
        //    }
        //}
		if (isWeaponSub)
			mChildSub = go;
		else
			mChild = go;
        go.transform.parent = transform;
        NGUITools.SetLayer(go, gameObject.layer);
        go.transform.localPosition = Vector3.zero;
        go.transform.localRotation = Quaternion.identity;
        go.transform.localScale = Vector3.one;
        return true;
    }

    /// <summary>
    /// 添加特效
    /// </summary>
    /// <param name="go"></param>
    /// <returns></returns>
    public bool AttachEffect(GameObject go)
    {
        if (go == null)
        {
            LogSystem.LogWarning("[AttachEffect]::go is null");
            return false;
        }
        go.transform.parent = transform;
        return true;
    }
}
