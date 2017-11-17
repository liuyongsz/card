using UnityEngine;
using System.Collections;
using DG.Tweening;
using NetProtocal;

public class UICardDrag : UIDragDropItem {

    public static UICardDrag DragObject;
    public static UICardDrag ClickedObject;

    [HideInInspector]
    public bool HitTest;
    [HideInInspector]
    public bool IsDrag;

    /// <summary>是否是穿透拖拽</summary>
    public bool IsCustomDrag = true;

    private CardRole mCardRole;
    private CardRole mUpdateHitTestCardRole;
    private Vector3 mOldPostion;

    /// <summary>槽位</summary>
    public Vector3 SlotPostion;

    private Transform mDragObject;

    private bool IsClicked;

    [HideInInspector]
    public FightPanel_CardItem Owner;

    public bool CanClickTween = true;

    protected override void Start()
    {
        base.Start();

        SlotPostion = transform.position;

        UIEventListener listener = UIEventListener.Get(gameObject);

        listener.onDrop = OnDrog_Card;
        listener.onDrag = OnDrag_Card;
        listener.onClick = OnClick_Card;
        listener.onPress = OnPress_Card;
    }

    private void OnPress_Card(GameObject go, bool state)
    {
        if (state)
            DragObject = this;
    }

    public void Update()
    {
        if (HitTest)
        {
            HitCard();
            mUpdateHitTestCardRole = HitCardRole();
        }  
    }

    public void LateUpdate()
    {
        if (Input.GetMouseButtonUp(0))
        {
            if (null != mDragObject || IsDrag)
            {
                GameObject.Destroy(mDragObject);
                mDragObject = null;
                IsDrag = false;
                DragObject = null;
            }
        }
    }

    protected override void OnDragDropStart()
    {
        //Debug.Log(2);
    }

    protected override void OnDragDropMove(Vector3 delta)
    {
        base.OnDragDropMove(delta);

        if(mUpdateHitTestCardRole != mCardRole && mUpdateHitTestCardRole != null)
        {
            mCardRole.HideHighlighter();
            mCardRole = null;
            PureMVC.Patterns.Facade.Instance.SendNotification(NotificationID.Fihgt_ShowOpPan, false);
        }
    }

    protected override void OnDragDropRelease(GameObject surface)
    {
        base.OnDragDropRelease(surface);
      
        HitTest = false;

        transform.DOMove(SlotPostion, 0.2f);
        NGUITools.AdjustDepth(gameObject, -100);

        if (mCardRole != null)
            mCardRole.HideHighlighter();
        PureMVC.Patterns.Facade.Instance.SendNotification(NotificationID.Fihgt_ShowOpPan, false);

        mCardRole = null;
        mUpdateHitTestCardRole = null;
    }

    private CardRole HitCardRole()
    {

        if (PVPManager.Instance == null || PVPManager.Instance.AvatarCamera == null)
            return null;
        Ray ray = PVPManager.Instance.AvatarCamera.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, Mathf.Infinity))
        {
            //Debug.Log("碰撞对象: " + hit.collider.name);
            //Debug.DrawLine(ray.origin, hit.point, Color.red);

            CardRole role;
            if(PVPManager.Instance.CardRoleDic.TryGetValue(hit.collider.transform,out role))
            {
               // if (null != mCardRole && mCardRole != role)
                  //  mCardRole.HideHighlighter();
                if(mCardRole != role)
                {
                    if (mCardRole != null)
                        mCardRole.HideHighlighter();

                    mCardRole = role;
                    PVPManager.Instance.CardRoleDic[hit.collider.transform].ShowHighlighter();
                }
            }
            
            return role;
        }

        return null;
    }

    private Transform HitCard()
    {

        if (PVPManager.Instance == null)
            return null;
        Ray ray = Main.CameraUI.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, Mathf.Infinity))
        {
            if(hit.collider.name.IndexOf("Card") >= 0)
            {

            }

            return hit.collider.transform;
        }

        return null;
    }

    private void OnDrog_Card(GameObject obj, GameObject go)
    {
        if(!PVPManager.IsMyTurn || Define.TestMsg)
        {
            Debug.Log("Not My Turn");
            return;
        }

        FightPanel_CardItem mouseItm = DragObject.GetComponent<FightPanel_CardItem>();
        FightPanel_CardItem toItm = obj.GetComponent<FightPanel_CardItem>();

        if(null != mouseItm)
        {
            if(toItm != null && mouseItm.SerData != null && toItm.SerData != null)
                FightProxy.Instance.SendUseCard(mouseItm.SerData.index, UseType.CardType, toItm.SerData.index);
        }
        else
        {
            Debug.Log("No Card SerData!!!");
        }
    }

    private void OnDrag_Card(GameObject obj, Vector2 del)
    {
        if (IsDrag)
            return;

        if(!IsDrag)
        {
            PureMVC.Patterns.Facade.Instance.SendNotification(NotificationID.Fight_ShowExpPan, true);
        }
            

        IsDrag = true;

        if (IsCustomDrag)
        {
            base.OnDragDropStart();

            HitTest = true;
            mOldPostion = transform.position;
            NGUITools.AdjustDepth(gameObject, 100);
        }
    }

    private void OnClick_Card(GameObject obj)
    {
        if (!CanClickTween)
            return;

        if (ClickedObject && ClickedObject != this)
            ClickedObject.OnTween_BackSolt();

        ClickedObject = this;

        if (!IsClicked)
        {
            IsClicked = true;
            mOldPostion = transform.position;
            Vector3 endPos = SlotPostion.Clone();
            endPos.y += 0.045f;
            transform.DOMove(endPos, 0.1f);
        }
        else
        {
            OnTween_BackSolt();
        }
    }

    public void OnTween_BackSolt()
    {
        IsClicked = false;
        transform.DOMove(SlotPostion, 0.1f);
    }
}
