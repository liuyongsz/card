using UnityEngine;

/// <summary>
/// 控制分辨率的脚本
/// </summary>
public class ResolutionConstrain 
{
    public static int ScreenWidth;
    public static int ScreenHeight;

    public const float SmallRatio = 4f / 3f;
    public const double dsmallRatioPixles = 1536 * 1152;
    private static Vector2 SmallResolution = Allocator.CreateVector2(1536, 1152);
    public const float BigRatio = 16f / 9f;
    private static Vector2 BigResolution = Allocator.CreateVector2(1920, 1080);
    public double dbigRatioPixles = 1920 * 1080;

    private Vector2 currentResolution = Allocator.CreateVector2(Screen.currentResolution.width, Screen.currentResolution.height);

    private ResolutionConstrain()
    {
        _instance = this;
    }
   
    // Use this for initialization
    public void init()
    {
        Resolution resolution = Screen.currentResolution;
        int resolutionWidth = resolution.width;
        int resolutionHeight = resolution.height;
        // make sure width is longer than height
        // or it will make GUI look smaller in iPhone 5 or iPhone 5S with IOS 7 or earlier version
        // xumc at 2016/11/23
        if(resolutionWidth < resolutionHeight)
        {
            resolutionWidth = resolutionHeight;
            resolutionHeight = resolution.width;
        }

        double dpixles = resolutionWidth * resolutionHeight;
        float ratio = (float)resolutionWidth / (float)resolutionHeight;
        if (!string.IsNullOrEmpty(Config.mScreenMaxResolution))
        {
            string[] maxResolution = Config.mScreenMaxResolution.Split('*');
            if (maxResolution != null && maxResolution.Length == 2)
            {
                dbigRatioPixles = StaticUtilTools.FloatParse(maxResolution[0]) * StaticUtilTools.FloatParse(maxResolution[1]);
            }
        }

        float ratios = Mathf.Abs(ratio - SmallRatio);
        float ratiob = Mathf.Abs(ratio - BigRatio);
        if (ratios > ratiob)
        {
            ///big than dbigRatioPixles ,need change reslution
            if (dpixles > dbigRatioPixles)
            {
                /// big resolution best!
                currentResolution = BigResolution;
#if UNITY_IPHONE || UNITY_ANDROID || UNITY_WP8 || UNITY_BLACKBERRY
                Screen.SetResolution((int)currentResolution.x, (int)currentResolution.y, true);
#else
                Screen.SetResolution((int)currentResolution.x, (int)currentResolution.y, Screen.fullScreen);
#endif
            }
            else
            {
                Vector2 vTemp = Vector2.zero;
                vTemp.x = resolutionWidth;
                vTemp.y = resolutionHeight;
                currentResolution = vTemp;
            }
        }
        else
        {
            ///big than dbigRatioPixles ,need change reslution
            if (dpixles > dsmallRatioPixles)
            {
                /// small resolution best!
                currentResolution = SmallResolution;
#if UNITY_IPHONE || UNITY_ANDROID || UNITY_WP8 || UNITY_BLACKBERRY
                Screen.SetResolution((int)currentResolution.x, (int)currentResolution.y, true);
#else
                Screen.SetResolution((int)currentResolution.x, (int)currentResolution.y, Screen.fullScreen);
#endif
            }
            else
            {
                Vector2 vTemp = Vector2.zero;
                vTemp.x = resolutionWidth;
                vTemp.y = resolutionHeight;
                currentResolution = vTemp;
            }
        }

		#if UNITY_ANDROID
		#if __AUTO_TEST__

		GameObject go = GameObject.Find ("GUI/UICamera");
		UICollectorConstructor ucc = go.GetComponent<UICollectorConstructor>();
		if( ucc != null )
		{
			ucc.StartInit();
		}

			#endif
			#endif
    }
    private static ResolutionConstrain _instance;

    public static ResolutionConstrain Instance
    {
        get
        {
            if (_instance == null)
                _instance = new ResolutionConstrain();
            return _instance;
        }
    }

    public void SetScreenResolution(Vector2 vec2)
    {
        currentResolution = vec2;
        Screen.SetResolution((int)vec2.x, (int)vec2.y, true);
    }

    public void SetMovieResolution(Vector2 vec2)
    {
        Screen.SetResolution((int)vec2.x, (int)vec2.y, true);
    }

    public void RevertScreenResolution()
    {
        Screen.SetResolution((int)currentResolution.x, (int)currentResolution.y, true);
    }

    public Vector2 CurrentResolution { get { return currentResolution; } }

    public int width { get { return (int)currentResolution.x; } }
    public int height { get { return (int)currentResolution.y; } }
}

