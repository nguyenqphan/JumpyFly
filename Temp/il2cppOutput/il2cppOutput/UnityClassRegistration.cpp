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

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 75 classes
	//0. MeshFilter
	void RegisterClass_MeshFilter();
	RegisterClass_MeshFilter();

	//1. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//5. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//6. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//7. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//8. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//9. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//10. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//11. NetworkView
	void RegisterClass_NetworkView();
	RegisterClass_NetworkView();

	//12. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//13. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//14. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//15. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//16. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//17. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//18. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//19. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//20. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//21. Rigidbody
	void RegisterClass_Rigidbody();
	RegisterClass_Rigidbody();

	//22. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//23. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//24. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//25. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//26. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//27. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//28. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//29. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//30. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//31. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//32. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//33. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//34. UnityAnalyticsManager
	void RegisterClass_UnityAnalyticsManager();
	RegisterClass_UnityAnalyticsManager();

	//35. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//36. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//37. MeshRenderer
	void RegisterClass_MeshRenderer();
	RegisterClass_MeshRenderer();

	//38. BoxCollider
	void RegisterClass_BoxCollider();
	RegisterClass_BoxCollider();

	//39. SphereCollider
	void RegisterClass_SphereCollider();
	RegisterClass_SphereCollider();

	//40. MeshCollider
	void RegisterClass_MeshCollider();
	RegisterClass_MeshCollider();

	//41. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//42. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//43. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//44. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//45. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//46. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//47. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//48. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//49. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//50. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//51. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//52. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//53. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//54. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//55. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//56. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//57. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//58. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//59. Light
	void RegisterClass_Light();
	RegisterClass_Light();

	//60. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//61. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//62. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//63. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//64. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//65. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//66. NetworkManager
	void RegisterClass_NetworkManager();
	RegisterClass_NetworkManager();

	//67. MasterServerInterface
	void RegisterClass_MasterServerInterface();
	RegisterClass_MasterServerInterface();

	//68. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//69. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//70. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//71. LightProbes
	void RegisterClass_LightProbes();
	RegisterClass_LightProbes();

	//72. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//73. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//74. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
