using UnityEngine;
using System.Collections;

public class UIAdapter : MonoBehaviour {

	public int ManualWidth = 1920;
	public int ManualHeight = 1080;

	void Awake () 
	{
		AdaptiveUI();
	}

	private void AdaptiveUI()
	{

		UIRoot uiRoot = GetComponent<UIRoot>();
		if (uiRoot != null)
		{
			if (System.Convert.ToSingle(Screen.height) / Screen.width > System.Convert.ToSingle(ManualHeight) / ManualWidth)
				uiRoot.manualHeight = Mathf.RoundToInt(System.Convert.ToSingle(ManualWidth) / Screen.width * Screen.height);
			else
				uiRoot.manualHeight = ManualHeight;
		}
	}
}
