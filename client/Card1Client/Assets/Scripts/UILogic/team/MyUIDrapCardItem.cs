using UnityEngine;
using System.Collections;
using NetProtocal;
using DG.Tweening;

public class MyUIDrapCardItem : UIDragDropItem
{
    private TD_Card cardInfo;
    private float distance;
    private int index;
    private static int chooseItem;
    Vector3 pos = Vector3.one;
    RaycastHit hit;
    Transform left;
    Transform right;
    bool canMove = false;

    private void Update()
    {
        if (!canMove)
            return;
        pos = UICamera.currentCamera.ScreenToWorldPoint(Input.mousePosition);
        left.transform.DOMove(pos, 0.1f, false);
        right.transform.DOMove(pos, 0.1f, false);
    }
    protected override void OnDragStart()
    {
        UIDragDropRoot.root = SetHeroMediator.setHeroMediator.panel.cloneScrollView.GetComponent<UIDragDropRoot>().transform;
        cardInfo = this.GetComponent<UIGridItem>().oData as TD_Card;

        if (cardInfo.isFight == 1 || cardInfo.isHave == 0)
            return;
        SetHeroMediator.setHeroMediator.changeCardId = cardInfo.id;
        SetHeroMediator.setHeroMediator.drapCard = this.GetComponent<UIGridItem>().oData as TD_Card;
        chooseItem = this.GetComponent<UIGridItem>().miCurIndex;
        base.OnDragStart();
        SetHeroMediator.setHeroMediator.SetHideCardTeam(chooseItem, false);
    }
    protected override void OnDragDropStart()
    {
        base.OnDragDropStart();
        left = (this.GetComponent<UIGridItem>().mScripts[6] as UILabel).transform;
        right = (this.GetComponent<UIGridItem>().mScripts[7] as UILabel).transform;
        canMove = true;
    }

    protected override void OnDragDropMove(Vector3 delta)
    {
        base.OnDragDropMove(delta);
        Ray ray = UICamera.currentCamera.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out hit, Mathf.Infinity))
        {
            if (hit.collider.transform.name.Contains("fight") && hit.collider.GetComponent<UIGridItem>() != null)
            {
                index = UtilTools.IntParse(hit.collider.transform.name.Replace("fight", ""));
                return;
            }
            else
            {
                index = -1;
            }

        }
    }
    protected override void OnDragDropRelease(GameObject surface)
    {
        canMove = false;
        SetHeroMediator.setHeroMediator.SetHideCardTeam(chooseItem, true);
        if (index > -1)
        {
            SetHeroMediator.setHeroMediator.ChangeFightCard(index);
        }
        base.OnDragDropRelease(surface);
    }
    private void OnDestroy()
    {
        left = null;
        right = null;
        cardInfo = null;
    }
}
