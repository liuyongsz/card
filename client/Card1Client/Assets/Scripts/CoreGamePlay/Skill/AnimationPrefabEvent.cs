using UnityEngine;
using System.Collections;
using DG.Tweening;
using PureMVC.Patterns;
using System.ComponentModel;

public enum E_HPType
{
    [Description("单个")]
    Sng,
    [Description("多个")]
    Multi,
}

public class AnimationPrefabEventData
{
    public Vector3 HPPosition;
}

public class AnimationPrefabEvent : MonoBehaviour {

    public Transform TransHP;
    public Transform Enemy;
    public Transform Self;
    public Transform Me;

	// Use this for initialization
	void Start ()
    {
        TransHP = transform.FindChild("HP");
        Enemy = transform.FindChild("Enemy");
        Self = transform.FindChild("Self");
        Me = Self.FindChild("Me");
    }
	
	// Update is called once per frame
	void Update () {
	
	}

    /// <summary>震屏效果</summary>
    public void OnEvent_ShakeCamera()
    {
        transform.DOShakePosition(1, 4);
	}

    /// <summary>手机物理震动</summary>
    public void OnEvent_MobilePhyShake()
    {
        //Handheld.Vibrate();
    }

    /// <summary>同时震动</summary>
    public void OnEvent_ShakeWithMobile()
    {
        OnEvent_ShakeCamera();
        OnEvent_MobilePhyShake();
    }
        /// <summary>扣血</summary>
    public void OnEvent_ShowHP(E_HPType flag = 0)
    {
        AnimationPrefabEventData vo = new AnimationPrefabEventData();
        vo.HPPosition = TransHP.transform.position;

        Facade.Instance.SendNotification(NotificationID.Fight_AddHp, vo);
	}

    /// <summary>动画播放完成</summary>
    public void OnEvent_Complete()
    {
        PVPManager.Instance.OnPrefabEvent_Complete(transform,Me.position,Enemy.position);

        DestroyObject(gameObject);
    }

    /// <summary>动画播放开始</summary>
    public void OnEvent_Start()
    {
      
    }

    /// <summary>Animator停止播放</summary>
    public void OnEvent_AnimatorStop()
    {
        Animator ani = transform.GetComponent<Animator>();
        ani.Stop();
    }

    /// <summary>做下一个效果</summary>
    public void OnEvent_DoNextEffect()
    {

    }
}
