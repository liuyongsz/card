using UnityEngine;

public class UVAnimation : MonoBehaviour
{
    private UITexture muiTexture = null;
    public float mfStartU = 0.0f;
    public float mfStartV = 0.0f;
    public float mfWidth = 1.0f;
    public float mfHeight = 1.0f;
    public float mfDeltaU = 0.0f;
    public float mfDeltaV = 0.0f;
    Rect mRect = new Rect();
    void Awake()
    {
        muiTexture = this.GetComponent<UITexture>();
        if (muiTexture != null)
        {
            mRect.Set(mfStartU, mfStartV, mfWidth, mfHeight);
            muiTexture.uvRect = mRect;
        }
    }

    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {
        if (muiTexture == null)
            return;

        float fDeltaU = mfDeltaU * Time.deltaTime;
        float fDeltaV = mfDeltaV * Time.deltaTime;
        mRect.Set(mRect.xMin + fDeltaU, mRect.yMin + fDeltaV, mfWidth, mfHeight);
        muiTexture.uvRect = mRect;
    }
}
