struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 97 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. AssetBundleManifest
	void RegisterClass_AssetBundleManifest();
	RegisterClass_AssetBundleManifest();

	//4. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//5. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//6. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//7. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//8. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//9. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//10. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//11. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//12. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//13. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//14. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//15. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//16. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//17. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//18. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//19. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//20. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//21. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//22. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//23. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//24. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//25. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//26. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//27. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//28. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//29. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//30. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//31. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//32. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//33. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//34. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//35. Joint
	void RegisterClass_Joint();
	RegisterClass_Joint();

	//36. HingeJoint
	void RegisterClass_HingeJoint();
	RegisterClass_HingeJoint();

	//37. SpringJoint
	void RegisterClass_SpringJoint();
	RegisterClass_SpringJoint();

	//38. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//39. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//40. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//41. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//42. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//43. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//44. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//45. PolygonCollider2D
	void RegisterClass_PolygonCollider2D();
	RegisterClass_PolygonCollider2D();

	//46. Joint2D
	void RegisterClass_Joint2D();
	RegisterClass_Joint2D();

	//47. AnchoredJoint2D
	void RegisterClass_AnchoredJoint2D();
	RegisterClass_AnchoredJoint2D();

	//48. HingeJoint2D
	void RegisterClass_HingeJoint2D();
	RegisterClass_HingeJoint2D();

	//49. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//50. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//51. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//52. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//53. AudioMixer
	void RegisterClass_AudioMixer();
	RegisterClass_AudioMixer();

	//54. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//55. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//56. Animation
	void RegisterClass_Animation();
	RegisterClass_Animation();

	//57. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//58. GUIText
	void RegisterClass_GUIText();
	RegisterClass_GUIText();

	//59. GUIElement
	void RegisterClass_GUIElement();
	RegisterClass_GUIElement();

	//60. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//61. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//62. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//63. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//64. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//65. AudioMixerGroup
	void RegisterClass_AudioMixerGroup();
	RegisterClass_AudioMixerGroup();

	//66. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//67. SkinnedMeshRenderer
	void RegisterClass_SkinnedMeshRenderer();
	RegisterClass_SkinnedMeshRenderer();

	//68. TrailRenderer
	void RegisterClass_TrailRenderer();
	RegisterClass_TrailRenderer();

	//69. ParticleRenderer
	void RegisterClass_ParticleRenderer();
	RegisterClass_ParticleRenderer();

	//70. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//71. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//72. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//73. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//74. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//75. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//76. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//77. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//78. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//79. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//80. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//81. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//82. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//83. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//84. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//85. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//86. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//87. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//88. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//89. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//90. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//91. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//92. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//93. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//94. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//95. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//96. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
