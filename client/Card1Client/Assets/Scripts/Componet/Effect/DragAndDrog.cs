using UnityEngine;
using System.Collections;

public class DragAndDrog : MonoBehaviour
{
    public Camera EventCamera;
    private GameObject target;

    public bool AllowXMove = true;
    public bool AllowYMove = true;
    public bool AllowZMove = true;

    private bool isMouseDrag;
    private Vector3 screenPosition;
    private Vector3 offset;
    // Use this for initialization
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

        GameObjectDragAndDrog();

    }

    //任意拖拽

    private GameObject ReturnGameObjectDrag(out RaycastHit hit)
    {
        target = null;
        Ray ray =EventCamera.ScreenPointToRay(Input.mousePosition);
        if (Physics.Raycast(ray.origin, ray.direction * 10, out hit))
        {
            target = hit.collider.gameObject;
        }
        return target;
    }

    //拖拽Updata
    private void GameObjectDragAndDrog()
    {
        if (Input.GetMouseButtonDown(0))
        {
            RaycastHit hitInfo;
            target = ReturnGameObjectDrag(out hitInfo);
            if (target != null)
            {
                isMouseDrag = true;
                screenPosition =EventCamera.WorldToScreenPoint(target.transform.position);
                offset = target.transform.position -EventCamera.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, screenPosition.z));
            }
        }

        if (Input.GetMouseButtonUp(0))
        {
            isMouseDrag = false;
        }

        if (isMouseDrag)
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

            target.transform.localPosition = currentPosition;
        }
    }

}