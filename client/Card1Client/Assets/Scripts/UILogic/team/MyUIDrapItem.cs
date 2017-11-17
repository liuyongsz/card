using UnityEngine;
using System.Collections;
using NetProtocal;
using PureMVC.Patterns;

public class MyUIDrapItem : UIDragDropItem
{
    private HeroInfo heroInfo;
    private UIGridItem heroItem;
    private float distance;
    private int index = -1;
    private int lastIndex = -1;
    private static int fightIndex;
    RaycastHit hit;

    protected override void OnDragStart()
    {
        heroItem = this.GetComponent<UIGridItem>();
        heroInfo = heroItem.oData as HeroInfo;
        if (heroInfo.heroUUId == 0)
            return;
        UIDragDropRoot.root = HeroTeamMediator.heroTeamMediator.panel.cloneScrollView.GetComponent<UIDragDropRoot>().transform;
        base.OnDragStart();
        fightIndex = heroItem.miCurIndex;
        UISprite dropItemSpri = heroItem.mScripts[4] as UISprite;
        UILabel isMove = heroItem.mScripts[5] as UILabel;
        dropItemSpri.gameObject.SetActive(true);
        isMove.gameObject.SetActive(false);
       
    }
    protected override void OnDragDropStart()
    {
        base.OnDragDropStart();
        UISprite additvie = this.GetComponent<UIGridItem>().mScripts[6] as UISprite;
        additvie.Additive = true;
    }
    protected override void OnDragDropMove(Vector3 delta)
    {
        base.OnDragDropMove(delta);
        HeroTeamMediator.heroTeamMediator.panel.deleteCardBtn.gameObject.SetActive(true);
        Ray ray = UICamera.currentCamera.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out hit, Mathf.Infinity))
        {
            if (hit.collider.transform.name.Contains("hero") && hit.collider.GetComponent<UIGridItem>() != null)
            {
                index = UtilTools.IntParse(hit.collider.transform.name.Replace("hero", ""));
                if (lastIndex != index)
                {
                    if (lastIndex > -1 && lastIndex < 4)
                        HeroTeamMediator.heroTeamMediator.HideHighlighter(lastIndex);
                    lastIndex = index;
                    HeroTeamMediator.heroTeamMediator.SetShowHighlighter(index);
                }
                return;
            }
            if (hit.collider.transform.name.Contains("deleteCardBtn"))
            {
                if (lastIndex > -1 && lastIndex < 4)
                    HeroTeamMediator.heroTeamMediator.HideHighlighter(index);
                index = 4;
                if (lastIndex != index)
                {
                    HeroTeamMediator.heroTeamMediator.PlayAnimation();
                    lastIndex = index;
                }
                return;
            }
            else
            {
                if (index != 4 && index >= 0)
                    HeroTeamMediator.heroTeamMediator.HideHighlighter(index);
                lastIndex = -1;
                index = -1;
            }
        }
    }
    protected override void OnDragDropRelease(GameObject surface)
    {
        HeroTeamMediator.heroTeamMediator.panel.deleteCardBtn.gameObject.SetActive(false);
        if (HeroTeamMediator.heroTeamMediator == null)
            return;
        if (index != 4 && index >= 0)
            HeroTeamMediator.heroTeamMediator.HideHighlighter(index);
        if (index == 4)
        {
            HeroTeamMediator.heroTeamMediator.DeleteCardTeam(fightIndex);
        }
        else if (index >= 0 && index < 4)
        {
            HeroTeamMediator.heroTeamMediator.SetHeroFight(fightIndex, index);
        }
        else
        {
            HeroTeamMediator.heroTeamMediator.UpdateItem(fightIndex);
        }
        base.OnDragDropRelease(surface);
    }
    private void OnDestroy()
    {
        heroInfo = null;
    }
}
