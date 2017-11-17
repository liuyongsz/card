using UnityEngine;
using System.Collections;
using System;


public class CameraManager : MonoBehaviour {

	public static CameraManager share;
    
    public static Action EventReset = delegate { };
    public static Action EventBeginIntroMovement = delegate { };
    public static Action EventEndIntroMovement = delegate { };
    
	public GameObject _cameraMain;
	public GameObject _cameraBack;
	public Camera[] _camerasMain;

    //[SerializeField]
    int _FOVportrait = 40;
    //[SerializeField]
    int _FOVlandscape = 30;

	private bool isPortrait = true;
	public Camera _cameraMainComponent;
	public Collider _colliderFullScreen;

    [SerializeField]
    private float yBackCamera = 1f;
    [SerializeField]
    private float cameraMainDistanceToBall = -5f;
    [SerializeField]
    private float cameraMainY = 1.7f;

	void Awake() {
		share = this;
        _cameraMainComponent = _cameraMain.GetComponent<Camera>();
	}

	// Use this for initialization
	void Start () {
        updateCameraFOV();
	
	}

	void OnDestroy() {
		
	}

	public void turnOn() {
		_cameraMain.SetActive(true);
		_cameraBack.SetActive(false);
	}

	public void turnOff() {
		_cameraMain.SetActive(false);
		_cameraBack.SetActive(false);
	}

	private bool _isCameraMoving = false;

    [SerializeField] private float testXZ = 0.8f;
    [SerializeField] private float testY = 5f;

	private void eventShoot()
	{
	    MoveCameraWhenShoot();
	}

    public void MoveCameraWhenShoot()
    {
       
    }


	public float _currentFOV;
	private void cameraFinishMoving() {
//		_cameraMain.GetComponent<SmoothLookAt>().target = null;
	}

	public void introMovement(Action callback, Transform target)
	{
	    EventBeginIntroMovement();

		Vector3[] path = new Vector3[3];
		path[2] = target.position;
		path[0] = new Vector3( 0, 1.5f, -60f);
		path[1] = (path[2] + path[0]) / 2;
		path[1].y = 6f;

		Quaternion rotation = target.rotation;
		_cameraMain.transform.localEulerAngles = Vector3.zero;
		_cameraMain.transform.position = path[0];

		
	}

	public void reset() {
		
		_isCameraMoving = false;

	    updateCameraFOV();

		StartCoroutine(resetPosition());

	    EventReset();
	}
    

	private IEnumerator resetPosition()
    {

		
		yield break;
	}

	public void updateCameraFOV() {
		
		if( Screen.height > Screen.width ) {		// portrait
			isPortrait = true;
			foreach(Camera camera in _camerasMain) {
				if(camera.orthographic == false) {
					camera.fieldOfView = _FOVportrait;
				    _currentFOV = _FOVportrait;
				}
			}
		}	
		else {			// landscape
			isPortrait = false;
			foreach(Camera camera in _camerasMain) {
				if(camera.orthographic == false) {
					camera.fieldOfView = _FOVlandscape;
                    _currentFOV = _FOVlandscape;
				}
			}
		}
		
        //reset();
	}
}
