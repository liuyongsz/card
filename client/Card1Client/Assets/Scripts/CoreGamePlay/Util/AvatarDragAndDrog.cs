using UnityEngine;
using System.Collections;
using DG.Tweening;

public class AvatarDragAndDrog : MonoBehaviour
{
    public Camera EventCamera;
    private GameObject target;
    private Vector3 mMouseDownTargetPos;

    public bool AllowXMove = false;
    public bool AllowYMove = false;
    public bool AllowZMove = false;

    private bool canDrag = true;
    private bool isMouseDrag;
    private Vector3 screenPosition;
    private Vector3 offset;
    // Use this for initialization
    /// <summary>角色在做移动</summary>
    private float mDoMoveTimer = 0;
    private int mLayer = -1;
    void Start()
    {
        if (EventCamera == null)
            EventCamera = Camera.main;
    }

    // Update is called once per frame
    void Update()
    {
        if(PVPManager.Instance != null)
        {
            EventCamera = PVPManager.Instance.AvatarCamera;
        }

        if (EventCamera != null)
            GameObjectDragAndDrog();
    }

    //任意拖拽

    private GameObject ReturnGameObjectDrag(out RaycastHit hit)
    {
        if (mLayer == -1)
            mLayer = LayerMask.GetMask("MapLayer");

        target = null;
        Ray ray =EventCamera.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray.origin, ray.direction * 10, out hit,1000f, mLayer))
        {
            target = hit.collider.gameObject;
        }
        return target;
    }

    //拖拽Updata
    private void GameObjectDragAndDrog()
    {
        if (mDoMoveTimer > 0)
        {
            mDoMoveTimer -= Time.deltaTime;
            if (mDoMoveTimer <  0)
                mDoMoveTimer = 0;
        }

        if (Input.GetMouseButtonDown(0) && target == null)
        {
            RaycastHit hitInfo;
            target = ReturnGameObjectDrag(out hitInfo);
            if (target != null)
            {
                mMouseDownTargetPos = target.transform.position;
                isMouseDrag = true;
                
                screenPosition =EventCamera.WorldToScreenPoint(target.transform.position);
                offset = target.transform.position -EventCamera.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, screenPosition.z));

                //Vector3 pt = target.transform.position.Clone();
                //pt.y += 1.4f;
                //Vector3 screenPt = PVPManager.Instance.AvatarCamera.WorldToScreenPoint(pt);
                //Vector3 worldPt = PVPManager.Instance.FightCamera.ScreenToWorldPoint(screenPt);
                Vector3 worldPt = PVPManager.Instance.FightCamera.ScreenToWorldPoint(Input.mousePosition);
                worldPt.z = target.transform.position.z;
                PVPManager.SetArrowOrgPoint(worldPt);
            }
        }

        if (Input.GetMouseButtonUp(0))
        {
            PVPManager.HideArrow();

            RaycastHit hitInfo;
           
            if(UICardDrag.DragObject != null)
            {
                PureMVC.Patterns.Facade.Instance.SendNotification(NotificationID.Fight_ShowExpPan, false);

                GameObject totarget = ReturnGameObjectDrag(out hitInfo);
                FightPanel_CardItem cdItm = UICardDrag.DragObject.GetComponent<FightPanel_CardItem>();
               
                TD_Card cdCfg = null;
                bool haveTarget = false;

                if (cdItm.SerData != null)
                {
                    cdCfg = CardConfig.GetItem(cdItm.SerData.cardId);
                    FightCommonUtil.CheckCardSkillHaveTarget(cdCfg, cdItm.SerData.exp);
                }
                    
                Vector3 pos = Main.CameraUI.ScreenToWorldPoint(Input.mousePosition);
                if (
                     (PVPManager.IsMyTurn || Define.TestMsg)
                    && pos.y > -0.25f
                    && !haveTarget)
                {
                    UICardDrag.DragObject = null;
                    FightProxy.Instance.SendUseCard(cdItm.SerData.index, NetProtocal.UseType.CardType, 0);
                }
                else if (null != totarget)
                {
                    CardRole cdRole = PVPManager.Instance.GetCardRoleByTransform(totarget.transform);
                    CardRole mdRole = PVPManager.Instance.GetCardRoleByTransform(target.transform);

                    if (PVPManager.IsMyTurn || Define.TestMsg)
                    {
                        if (null != cdItm.SerData && cdItm.SerData.pid != 0)
                        {  if (haveTarget)
                            {
                                FightProxy.Instance.SendUseCard(cdItm.SerData.index, NetProtocal.UseType.MoveType, cdRole.SerData.pos);
                            }
                        }
                        else
                            Debug.Log("Card_To_Hero No Server Data!!!");
                    }
                    else
                    {

                    }


                    UICardDrag.DragObject = null;
                }
            }
            else if(Input.GetMouseButtonUp(0) && null != target && mDoMoveTimer == 0)
            {
                GameObject oldtarget = target;
                isMouseDrag = false;
                mDoMoveTimer = 0.5f;

                GameObject totarget = ReturnGameObjectDrag(out hitInfo);
                CardRole oldCd = PVPManager.Instance.GetCardRoleByTransform(oldtarget.transform);

                canDrag = false;
                if (null != totarget && oldtarget != totarget)
                {
                    CardRole toCd = PVPManager.Instance.GetCardRoleByTransform(totarget.transform);

                    if (Define.VSTest)
                    {
                        PVPManager.Instance.ChangeSlotPostion(oldCd, toCd);

                        oldtarget.transform.DOMove(toCd.transform.position, 1f);

                        totarget.transform.DOMove(oldCd.transform.position, 1f).OnComplete(delegate ()
                        {

                            canDrag = true;
                        });
                    }
                    else
                    {
                        int moveAdd = toCd.SerData.pos - oldCd.SerData.pos;
                        if(Mathf.Abs(moveAdd) == 1)
                            FightProxy.Instance.SendMove(oldCd.SerData.index, moveAdd);
                    }
                }
                else
                {
                    oldtarget.transform.DOMove(oldCd.transform.position, 1f).OnComplete(delegate ()
                    {
                        canDrag = true;
                    });
                }
            }

            target = null;
        }

        if (isMouseDrag && target != null)
        {

            Vector3 currentScreenSpace = new Vector3(Input.mousePosition.x, Input.mousePosition.y, screenPosition.z);
            Vector3 currentScreenPt = EventCamera.ScreenToWorldPoint(currentScreenSpace);
            Vector3 currentPosition = currentScreenPt + offset;

            Vector3 oldPosition = target.transform.localPosition;
            if (!AllowXMove)
                currentPosition.x = oldPosition.x;

            if (!AllowYMove)
                currentPosition.y = oldPosition.y;

            if (!AllowZMove)
                currentPosition.z = oldPosition.z;

            //target.transform.localPosition = currentPosition;
        }
    }

    /// <summary>人物交换位置</summary>
    public void Avatar_ChangePostion()
    {

    }
}