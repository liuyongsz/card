using UnityEngine;
using System.Collections;
using NetProtocal;
using PureMVC.Patterns;

public class MyDropHerolItem : UIDragDropItem
{

    UIGridItem lastItem;
    UIGridItem hitItem;
    float distance = 0.0f;
    protected override void OnDragStart()
    {
        base.OnDragStart();
    }

    protected override void OnDragDropMove(Vector3 delta)
    {
        if (Main.Ins.lineRender != null)
            distance = Vector3.Distance(UICamera.currentCamera.ScreenToWorldPoint(Input.mousePosition), Main.Ins.lineRender.tragetV3);
        if (distance > 0.3f && !Main.Ins.Camera3D.gameObject.activeSelf)
        {
            Main.Ins.Camera3D.gameObject.SetActive(true);
        }
        if (ArcaneInfoMediator.arcaneInfoMediator != null)
            Facade.Instance.SendNotification(NotificationID.ArcaneInfoClose);
        
        RaycastHit hit;
        Ray ray;
        ray = UICamera.currentCamera.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray, out hit, Mathf.Infinity))
        {
            if (hit.collider.transform.name.Contains("hero") && hit.collider.GetComponent<UIGridItem>() != null)
            {
                hitItem = hit.collider.GetComponent<UIGridItem>();
                if (lastItem != null && (lastItem.oData as HeroInfo).heroUUId > 0)
                    lastItem.GetComponent<UIGridItem>().mScripts[2].GetComponent<CardRole>().HideHighlighter();
                if (hitItem.mScripts[2] != null)
                    hitItem.mScripts[2].GetComponent<CardRole>().ShowHighlighter();
                lastItem = hitItem;
            }
            else
            {
                if (lastItem != null && (lastItem.oData as HeroInfo).heroUUId > 0)
                    lastItem.GetComponent<UIGridItem>().mScripts[2].GetComponent<CardRole>().HideHighlighter();
            }
        }
    }

    protected override void OnDragDropRelease(GameObject surface)
    {
        if (lastItem != null && (lastItem.oData as HeroInfo).heroUUId > 0)
            lastItem.GetComponent<UIGridItem>().mScripts[2].GetComponent<CardRole>().HideHighlighter();
        base.OnDragDropRelease(surface);
    }
   
}
