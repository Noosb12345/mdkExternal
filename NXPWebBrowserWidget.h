
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: UMG

/// Class /Script/NXPWebBrowserWidget.NXPWebBrowser
/// Size: 0x0068 (0x000130 - 0x000198)
class UNXPWebBrowser : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 408;

public:
	SMember(FMulticastInlineDelegate)                  OnUrlChanged                                                OFFSET(getStruct<T>, {0x130, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBeforePopup                                               OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnConsoleMessage                                            OFFSET(getStruct<T>, {0x150, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnLoadCompleted                                             OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FString)                                   InitialURL                                                  OFFSET(getStruct<T>, {0x170, 16, 0, 0})
	DMember(bool)                                      bSupportsTransparency                                       OFFSET(get<bool>, {0x180, 1, 0, 0})


	/// Functions
	// Function /Script/NXPWebBrowserWidget.NXPWebBrowser.UnbindUObject
	// void UnbindUObject(FString Name, class UObject* Object, bool bIsPermanent);                                              // [0x64db4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NXPWebBrowserWidget.NXPWebBrowser.OnUrlChanged__DelegateSignature
	// void OnUrlChanged__DelegateSignature(FText& Text);                                                                       // [0x3a334c0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/NXPWebBrowserWidget.NXPWebBrowser.OnLoadCompleted__DelegateSignature
	// void OnLoadCompleted__DelegateSignature();                                                                               // [0x3a334c0] MulticastDelegate|Public|Delegate 
	// Function /Script/NXPWebBrowserWidget.NXPWebBrowser.OnConsoleMessage__DelegateSignature
	// void OnConsoleMessage__DelegateSignature(FString Message, FString Source, int32_t Line);                                 // [0x3a334c0] MulticastDelegate|Public|Delegate 
	// Function /Script/NXPWebBrowserWidget.NXPWebBrowser.OnBeforePopup__DelegateSignature
	// void OnBeforePopup__DelegateSignature(FString URL, FString Frame);                                                       // [0x3a334c0] MulticastDelegate|Public|Delegate 
	// Function /Script/NXPWebBrowserWidget.NXPWebBrowser.LoadURL
	// void LoadURL(FString NewUrl);                                                                                            // [0x64dbe20] Final|Native|Public|BlueprintCallable 
	// Function /Script/NXPWebBrowserWidget.NXPWebBrowser.LoadString
	// void LoadString(FString Contents, FString DummyURL);                                                                     // [0x64dbad0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NXPWebBrowserWidget.NXPWebBrowser.GetUrl
	// FString GetUrl();                                                                                                        // [0x64db280] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NXPWebBrowserWidget.NXPWebBrowser.GetTitleText
	// FText GetTitleText();                                                                                                    // [0x64db340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/NXPWebBrowserWidget.NXPWebBrowser.ExecuteJavascript
	// void ExecuteJavascript(FString ScriptText);                                                                              // [0x64db9b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/NXPWebBrowserWidget.NXPWebBrowser.BindUObject
	// void BindUObject(FString Name, class UObject* Object, bool bIsPermanent);                                                // [0x64db740] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/NXPWebBrowserWidget.NXPWebBrowserAssetManager
/// Size: 0x0060 (0x000028 - 0x000088)
class UNXPWebBrowserAssetManager : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TWeakObjectPtr<class UMaterial*>)          DefaultMaterial                                             OFFSET(get<T>, {0x28, 8, 0, 0})
};

