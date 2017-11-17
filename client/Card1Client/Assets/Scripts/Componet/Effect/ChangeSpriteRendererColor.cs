using UnityEngine;
using System.Collections;

public class ChangeSpriteRendererColor : MonoBehaviour
{
	public Color color = Color.white;
	private GameObject mSpriteObject;

    private SpriteRenderer mRender;
  
    void Start () {

		if (transform.GetChild (0)) {

            mSpriteObject = transform.GetChild (0).gameObject;
		}

        mRender = mSpriteObject.GetComponent<SpriteRenderer>();
    }
	
	// Update is called once per frame
	void Update ()
    {
		if(mSpriteObject != null){
			if (null != mRender)
            {
                mRender.color = this.color;
			}
		}
	}
}
