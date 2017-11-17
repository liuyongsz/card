using PureMVC.Patterns;
using PureMVC.Interfaces;
using UnityEngine;
using AssetBundles;
using UnityEngine.SceneManagement;

class SceneCommand : SimpleCommand
{
    private bool isLoadingScene;
    public override void Execute(INotification notification)
    {
        SceneVO msg = notification.Body as SceneVO;

        if (NotificationID.CHANGE_SCENE==notification.Name)
        {
            if (isLoadingScene)
            {
                Debug.LogError("已经在切换场景中。。。。");
                return;
            }

           //GUIManager.CloseAllUI(true, true);

            if(msg.scenetype == EScene.PVP)
            {

            }
            else
            {
                GUIManager.CloseAllUI(true);
                AssetManager.UnloadAllCacheRes(true);
            }
 
            //GUIManager.ShowLoadingUI();

            isLoadingScene = true;

            Facade.SendNotification(NotificationID.UPDATE_SCENE_MEDIATOR, msg);

            ResourceManager.Instance.LoadScene(msg.sceneName, false, OnSceneLoadComplete, msg);

            if (msg.scenetype == EScene.MAINCITY)
                GameProxy.Instance.RealEnterScene(msg.sceneName, msg.scenetype);
        }
    }
    
    private void OnSceneLoadComplete(object o)
    {
        isLoadingScene = false;
        SceneVO vo = o as SceneVO;
        vo.loading = false;

        OnInit(vo);
    }

    private void OnInit(SceneVO vo)
    {
        if (vo.scenetype != EScene.MAINCITY)
            GameProxy.Instance.RealEnterScene(vo.sceneName, vo.scenetype);

        AssetManager.UnloadAssetBundle(vo.abname);

        GameManager.Instance.ResetLoadData();
        if (vo.scenetype == EScene.PVE)
        {
            GameManager.Instance.LoadPrefab("zuqiuchang");
            GameManager.Instance.LoadPrefab("player001");
            GameManager.Instance.LoadPrefab("goalmesh_left");
            GameManager.Instance.LoadPrefab("goalmesh_right");
            GameManager.Instance.LoadPrefab("goalkeeper_left");
            GameManager.Instance.LoadPrefab("goalkeeper_right");
        }
        //else
            //GUIManager.HideLoadingUI();
    }
}

