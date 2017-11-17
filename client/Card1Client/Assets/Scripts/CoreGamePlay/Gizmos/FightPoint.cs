using UnityEngine;
using System.Collections;

public class FightPoint : MonoBehaviour {

    public string Icon = "PosIcon_2.png";

   public void OnDrawGizmos()
    {
        Gizmos.DrawIcon(transform.position, Icon, true);
    }


    public void OnDrawGizmosSelected()
    {

    }
}
