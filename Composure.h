
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: MediaAssets
/// dependency: MediaIOCore
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: OpenColorIO

/// Class /Script/Composure.CompEditorImagePreviewInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCompEditorImagePreviewInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Composure.CompImageColorPickerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCompImageColorPickerInterface : public UCompEditorImagePreviewInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Composure.ComposurePipelineBaseActor
/// Size: 0x0018 (0x000248 - 0x000260)
class AComposurePipelineBaseActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	DMember(bool)                                      bAutoRun                                                    OFFSET(get<bool>, {0x248, 1, 0, 0})
	DMember(bool)                                      bAutoRunChildElementsAndSelf                                OFFSET(get<bool>, {0x249, 1, 0, 0})


	/// Functions
	// Function /Script/Composure.ComposurePipelineBaseActor.SetAutoRunChildrenAndSelf
	// void SetAutoRunChildrenAndSelf(bool bAutoRunChildAndSelf);                                                               // [0x13c22a0] Native|Public|BlueprintCallable 
	// Function /Script/Composure.ComposurePipelineBaseActor.SetAutoRun
	// void SetAutoRun(bool bNewAutoRunVal);                                                                                    // [0x13c24d0] Native|Public|BlueprintCallable 
	// Function /Script/Composure.ComposurePipelineBaseActor.IsActivelyRunning
	// bool IsActivelyRunning();                                                                                                // [0x13c2480] Native|Event|Public|BlueprintEvent|Const 
	// Function /Script/Composure.ComposurePipelineBaseActor.EnqueueRendering
	// void EnqueueRendering(bool bCameraCutThisFrame);                                                                         // [0x13c2390] Native|Event|Public|BlueprintEvent 
	// Function /Script/Composure.ComposurePipelineBaseActor.AreChildrenAndSelfAutoRun
	// bool AreChildrenAndSelfAutoRun();                                                                                        // [0x13c24b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Composure.CompositingElement
/// Size: 0x02D8 (0x000260 - 0x000538)
class ACompositingElement : public AComposurePipelineBaseActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1336;

public:
	CMember(class UComposureCompositingTargetComponent*) CompositingTarget                                         OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class UComposurePostProcessingPassProxy*)  PostProcessProxy                                            OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(TArray<class UCompositingElementInput*>)   Inputs                                                      OFFSET(get<T>, {0x278, 16, 0, 0})
	CMember(TArray<class UCompositingElementTransform*>) TransformPasses                                           OFFSET(get<T>, {0x288, 16, 0, 0})
	CMember(TArray<class UCompositingElementOutput*>)  Outputs                                                     OFFSET(get<T>, {0x298, 16, 0, 0})
	CMember(ESceneCameraLinkType)                      CameraSource                                                OFFSET(get<T>, {0x2A8, 4, 0, 0})
	CMember(TLazyObjectPtr<class ACameraActor*>)       TargetCameraActor                                           OFFSET(get<T>, {0x2AC, 28, 0, 0})
	CMember(EInheritedSourceType)                      ResolutionSource                                            OFFSET(get<T>, {0x2C8, 4, 0, 0})
	SMember(FIntPoint)                                 RenderResolution                                            OFFSET(getStruct<T>, {0x2CC, 8, 0, 0})
	CMember(TEnumAsByte<ETextureRenderTargetFormat>)   RenderFormat                                                OFFSET(get<T>, {0x2D4, 1, 0, 0})
	DMember(bool)                                      bUseSharedTargetPool                                        OFFSET(get<bool>, {0x2D5, 1, 0, 0})
	DMember(int32_t)                                   FreezeFrameMask                                             OFFSET(get<int32_t>, {0x308, 4, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTransformPassRendered_BP                                  OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnFinalPassRendered_BP                                      OFFSET(getStruct<T>, {0x320, 16, 0, 0})
	SMember(FName)                                     CompShotIdName                                              OFFSET(getStruct<T>, {0x330, 8, 0, 0})
	CMember(class ACompositingElement*)                Parent                                                      OFFSET(get<T>, {0x338, 8, 0, 0})
	CMember(TArray<class ACompositingElement*>)        ChildLayers                                                 OFFSET(get<T>, {0x340, 16, 0, 0})
	DMember(float)                                     OutputOpacity                                               OFFSET(get<float>, {0x354, 4, 0, 0})
	CMember(TMap<class UCompositingElementInput*, ECompPassConstructionType>) UserConstructedInputs                OFFSET(get<T>, {0x358, 80, 0, 0})
	CMember(TMap<class UCompositingElementTransform*, ECompPassConstructionType>) UserConstructedTransforms        OFFSET(get<T>, {0x3A8, 80, 0, 0})
	CMember(TMap<class UCompositingElementOutput*, ECompPassConstructionType>) UserConstructedOutputs              OFFSET(get<T>, {0x3F8, 80, 0, 0})
	CMember(TArray<class UCompositingElementInput*>)   InternalInputs                                              OFFSET(get<T>, {0x448, 16, 0, 0})
	CMember(TArray<class UCompositingElementTransform*>) InternalTransformPasses                                   OFFSET(get<T>, {0x458, 16, 0, 0})
	CMember(TArray<class UCompositingElementOutput*>)  InternalOutputs                                             OFFSET(get<T>, {0x468, 16, 0, 0})
	CMember(class UAlphaTransformPass*)                InternalAlphaPass                                           OFFSET(get<T>, {0x478, 8, 0, 0})


	/// Functions
	// Function /Script/Composure.CompositingElement.SetTargetCamera
	// void SetTargetCamera(class ACameraActor* NewCameraActor);                                                                // [0x13b9550] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.SetRenderResolution
	// void SetRenderResolution(FIntPoint NewResolution);                                                                       // [0x13b8dc0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.SetOpacity
	// void SetOpacity(float NewOpacity);                                                                                       // [0x13ba410] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.SetElementName
	// void SetElementName(FName NewName);                                                                                      // [0x13ba6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.SetEditorColorPickingTarget
	// void SetEditorColorPickingTarget(class UTextureRenderTarget2D* PickingTarget);                                           // [0x13ba340] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.SetEditorColorPickerDisplayImage
	// void SetEditorColorPickerDisplayImage(class UTexture* PickerDisplayImage);                                               // [0x13ba340] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.RequestNamedRenderTarget
	// class UTextureRenderTarget2D* RequestNamedRenderTarget(FName ReferenceName, float RenderPercentage, ETargetUsageFlags UsageTag); // [0x13ba000] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.RenderCompositingMaterialToTarget
	// class UTextureRenderTarget2D* RenderCompositingMaterialToTarget(FCompositingMaterial& CompMaterial, class UTextureRenderTarget2D* RenderTarget, FName ResultLookupName); // [0x13b96f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.RenderCompositingMaterial
	// class UTexture* RenderCompositingMaterial(FCompositingMaterial& CompMaterial, float RenderScale, FName ResultLookupName, ETargetUsageFlags UsageTag); // [0x13b9ae0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.RenderCompElement
	// class UTexture* RenderCompElement(bool bCameraCutThisFrame);                                                             // [0x13ba240] Native|Event|Public|BlueprintEvent 
	// Function /Script/Composure.CompositingElement.ReleaseOwnedTarget
	// bool ReleaseOwnedTarget(class UTextureRenderTarget2D* OwnedTarget);                                                      // [0x13b9ec0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.RegisterPassResult
	// void RegisterPassResult(FName ReferenceName, class UTexture* PassResult, bool bSetAsLatestRenderResult);                 // [0x13b9100] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.IsSubElement
	// bool IsSubElement();                                                                                                     // [0x13ba670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Composure.CompositingElement.GetTransformsList
	// TArray<UCompositingElementTransform*> GetTransformsList();                                                               // [0x13b83b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Composure.CompositingElement.GetRenderResolution
	// FIntPoint GetRenderResolution();                                                                                         // [0x13b8eb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Composure.CompositingElement.GetRenderPriority
	// int32_t GetRenderPriority();                                                                                             // [0x13b7450] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Composure.CompositingElement.GetOutputsList
	// TArray<UCompositingElementOutput*> GetOutputsList();                                                                     // [0x13b82d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Composure.CompositingElement.GetOpacity
	// float GetOpacity();                                                                                                      // [0x13ba580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Composure.CompositingElement.GetLatestRenderResult
	// class UTexture* GetLatestRenderResult();                                                                                 // [0x13b8f20] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Composure.CompositingElement.GetInputsList
	// TArray<UCompositingElementInput*> GetInputsList();                                                                       // [0x13b8490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Composure.CompositingElement.GetElementParent
	// class ACompositingElement* GetElementParent();                                                                           // [0x13ba640] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Composure.CompositingElement.GetCompElementName
	// FName GetCompElementName();                                                                                              // [0x13ba220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Composure.CompositingElement.GetChildElements
	// TArray<ACompositingElement*> GetChildElements();                                                                         // [0x13ba5a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Composure.CompositingElement.FindTransformPass
	// class UCompositingElementTransform* FindTransformPass(class UClass* TransformType, class UTexture*& PassResult, FName OptionalPassName); // [0x13b87a0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.FindTargetCamera
	// class ACameraActor* FindTargetCamera();                                                                                  // [0x13b96c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Composure.CompositingElement.FindOutputPass
	// class UCompositingElementOutput* FindOutputPass(class UClass* OutputType, FName OptionalPassName);                       // [0x13b8570] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.FindNamedRenderResult
	// class UTexture* FindNamedRenderResult(FName PassName, bool bSearchSubElements);                                          // [0x13b8f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.FindInputPass
	// class UCompositingElementInput* FindInputPass(class UClass* InputType, class UTexture*& PassResult, FName OptionalPassName); // [0x13b8ab0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.DeletePass
	// bool DeletePass(class UCompositingElementPass* PassToDelete);                                                            // [0x13b7f40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.CreateNewTransformPass
	// class UCompositingElementTransform* CreateNewTransformPass(FName PassName, class UClass* TransformType);                 // [0x13b7b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.CreateNewOutputPass
	// class UCompositingElementOutput* CreateNewOutputPass(FName PassName, class UClass* OutputType);                          // [0x13b79f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.CreateNewInputPass
	// class UCompositingElementInput* CreateNewInputPass(FName PassName, class UClass* InputType);                             // [0x13b7dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.AddNewTransformPass
	// class UCompositingElementTransform* AddNewTransformPass(FName PassName, class UClass* TransformType);                    // [0x13b7650] Final|Native|Protected|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.AddNewOutputPass
	// class UCompositingElementOutput* AddNewOutputPass(FName PassName, class UClass* OutputType);                             // [0x13b7480] Final|Native|Protected|BlueprintCallable 
	// Function /Script/Composure.CompositingElement.AddNewInputPass
	// class UCompositingElementInput* AddNewInputPass(FName PassName, class UClass* InputType);                                // [0x13b7820] Final|Native|Protected|BlueprintCallable 
};

/// Class /Script/Composure.CompositingCaptureBase
/// Size: 0x0048 (0x000538 - 0x000580)
class ACompositingCaptureBase : public ACompositingElement
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(class USceneCaptureComponent2D*)           SceneCaptureComponent2D                                     OFFSET(get<T>, {0x538, 8, 0, 0})
	DMember(bool)                                      bApplyDistortion                                            OFFSET(get<bool>, {0x540, 1, 0, 0})
	SMember(FComponentReference)                       LensComponentPicker                                         OFFSET(getStruct<T>, {0x548, 40, 0, 0})
	DMember(float)                                     OverscanFactor                                              OFFSET(get<float>, {0x570, 4, 0, 0})
	DMember(float)                                     OriginalFocalLength                                         OFFSET(get<float>, {0x574, 4, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           LastDistortionMID                                           OFFSET(get<T>, {0x578, 8, 0, 0})


	/// Functions
	// Function /Script/Composure.CompositingCaptureBase.UpdateDistortion
	// void UpdateDistortion();                                                                                                 // [0x13b6620] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Composure.CompositingPickerAsyncTask
/// Size: 0x0050 (0x000030 - 0x000080)
class UCompositingPickerAsyncTask : public UBlueprintAsyncActionBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FMulticastInlineDelegate)                  OnPick                                                      OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCancel                                                    OFFSET(getStruct<T>, {0x48, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnAccept                                                    OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	CMember(class UTextureRenderTarget2D*)             PickerTarget                                                OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UTexture*)                           PickerDisplayImage                                          OFFSET(get<T>, {0x70, 8, 0, 0})


	/// Functions
	// Function /Script/Composure.CompositingPickerAsyncTask.OpenCompositingPicker
	// class UCompositingPickerAsyncTask* OpenCompositingPicker(class UTextureRenderTarget2D* PickerTarget, class UTexture* DisplayImage, FText WindowTitle, bool bAverageColorOnDrag, bool bUseImplicitGamma); // [0x13b68b0] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Composure.CompositingElementPass
/// Size: 0x0038 (0x000028 - 0x000060)
class UCompositingElementPass : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FName)                                     PassName                                                    OFFSET(getStruct<T>, {0x2C, 8, 0, 0})


	/// Functions
	// Function /Script/Composure.CompositingElementPass.SetPassEnabled
	// void SetPassEnabled(bool bSetEnabledTo);                                                                                 // [0x13bcd10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElementPass.Reset
	// void Reset();                                                                                                            // [0x13bce50] Native|Event|Public|BlueprintEvent 
	// Function /Script/Composure.CompositingElementPass.RequestRenderTarget
	// class UTextureRenderTarget2D* RequestRenderTarget(FIntPoint Dimensions, TEnumAsByte<ETextureRenderTargetFormat> Format); // [0x13bcb20] Final|Native|Protected|HasDefaults|BlueprintCallable 
	// Function /Script/Composure.CompositingElementPass.RequestNativelyFormattedTarget
	// class UTextureRenderTarget2D* RequestNativelyFormattedTarget(float RenderScale);                                         // [0x13bca20] Final|Native|Protected|BlueprintCallable 
	// Function /Script/Composure.CompositingElementPass.ReleaseRenderTarget
	// bool ReleaseRenderTarget(class UTextureRenderTarget2D* AssignedTarget);                                                  // [0x13bc930] Final|Native|Protected|BlueprintCallable 
	// Function /Script/Composure.CompositingElementPass.OnFrameEnd
	// void OnFrameEnd();                                                                                                       // [0x12877b0] Native|Event|Public|BlueprintEvent 
	// Function /Script/Composure.CompositingElementPass.OnFrameBegin
	// void OnFrameBegin(bool bCameraCutThisFrame);                                                                             // [0x13bce70] Native|Event|Public|BlueprintEvent 
	// Function /Script/Composure.CompositingElementPass.OnEnabled
	// void OnEnabled();                                                                                                        // [0x13bccd0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/Composure.CompositingElementPass.OnDisabled
	// void OnDisabled();                                                                                                       // [0x13bccf0] Native|Event|Protected|BlueprintEvent 
	// Function /Script/Composure.CompositingElementPass.IsPassEnabled
	// bool IsPassEnabled();                                                                                                    // [0x13bce30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Composure.CompositingElementInput
/// Size: 0x0008 (0x000060 - 0x000068)
class UCompositingElementInput : public UCompositingElementPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	DMember(bool)                                      bIntermediate                                               OFFSET(get<bool>, {0x60, 1, 0, 0})


	/// Functions
	// Function /Script/Composure.CompositingElementInput.GenerateInput
	// class UTexture* GenerateInput();                                                                                         // [0x13bd290] Native|Event|Protected|BlueprintEvent 
};

/// Struct /Script/Composure.CompositingParamPayload
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FCompositingParamPayload : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	CMember(TMap<FName, float>)                        ScalarParamOverrides                                        OFFSET(get<T>, {0x0, 80, 0, 0})
	CMember(TMap<FName, FLinearColor>)                 VectorParamOverrides                                        OFFSET(get<T>, {0x50, 80, 0, 0})
	CMember(TMap<FName, class UTexture*>)              TextureParamOverrides                                       OFFSET(get<T>, {0xA0, 80, 0, 0})
};

/// Struct /Script/Composure.NamedCompMaterialParam
/// Size: 0x0008 (0x000000 - 0x000008)
class FNamedCompMaterialParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     ParamName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Composure.CompositingMaterial
/// Size: 0x00B8 (0x0000F0 - 0x0001A8)
class FCompositingMaterial : public FCompositingParamPayload
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 424;

public:
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0xF0, 8, 0, 0})
	CMember(TMap<FName, FName>)                        ParamPassMappings                                           OFFSET(get<T>, {0xF8, 80, 0, 0})
	CMember(TMap<FName, FNamedCompMaterialParam>)      RequiredMaterialParams                                      OFFSET(get<T>, {0x148, 80, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           CachedMID                                                   OFFSET(get<T>, {0x1A0, 8, 0, 0})
};

/// Class /Script/Composure.CompositingMediaInput
/// Size: 0x01C0 (0x000068 - 0x000228)
class UCompositingMediaInput : public UCompositingElementInput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 552;

public:
	SMember(FCompositingMaterial)                      MediaTransformMaterial                                      OFFSET(getStruct<T>, {0x68, 424, 0, 0})
	CMember(class UMaterialInterface*)                 DefaultMaterial                                             OFFSET(get<T>, {0x210, 8, 0, 0})
	CMember(class UMaterialInterface*)                 DefaultTestPlateMaterial                                    OFFSET(get<T>, {0x218, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           FallbackMID                                                 OFFSET(get<T>, {0x220, 8, 0, 0})
};

/// Class /Script/Composure.MediaTextureCompositingInput
/// Size: 0x0008 (0x000228 - 0x000230)
class UMediaTextureCompositingInput : public UCompositingMediaInput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(class UMediaTexture*)                      MediaSource                                                 OFFSET(get<T>, {0x228, 8, 0, 0})
};

/// Class /Script/Composure.CompositingInputInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UCompositingInputInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Composure.CompositingInputInterface.OnFrameEnd
	// void OnFrameEnd(class UCompositingInputInterfaceProxy* Proxy);                                                           // [0x13bba90] Native|Event|Public|BlueprintEvent 
	// Function /Script/Composure.CompositingInputInterface.OnFrameBegin
	// void OnFrameBegin(class UCompositingInputInterfaceProxy* Proxy, bool bCameraCutThisFrame);                               // [0x13bbc80] Native|Event|Public|BlueprintEvent 
	// Function /Script/Composure.CompositingInputInterface.GenerateInput
	// class UTexture* GenerateInput(class UCompositingInputInterfaceProxy* Proxy);                                             // [0x13bbb80] Native|Event|Public|BlueprintEvent 
};

/// Class /Script/Composure.CompositingInputInterfaceProxy
/// Size: 0x0010 (0x000068 - 0x000078)
class UCompositingInputInterfaceProxy : public UCompositingElementInput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TScriptInterface<Class>)                   CompositingInput                                            OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Class /Script/Composure.CompositingElementOutput
/// Size: 0x0000 (0x000060 - 0x000060)
class UCompositingElementOutput : public UCompositingElementPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:


	/// Functions
	// Function /Script/Composure.CompositingElementOutput.RelayOutput
	// void RelayOutput(class UTexture* FinalResult, class UComposurePostProcessingPassProxy* PostProcessProxy);                // [0x13bd900] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/Composure.ColorConverterOutputPass
/// Size: 0x0018 (0x000060 - 0x000078)
class UColorConverterOutputPass : public UCompositingElementOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class UCompositingElementTransform*)       ColorConverter                                              OFFSET(get<T>, {0x68, 8, 0, 0})
	CMember(class UClass*)                             DefaultConverterClass                                       OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/Composure.CompositingMediaCaptureOutput
/// Size: 0x0010 (0x000078 - 0x000088)
class UCompositingMediaCaptureOutput : public UColorConverterOutputPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(class UMediaOutput*)                       CaptureOutput                                               OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UMediaCapture*)                      ActiveCapture                                               OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/Composure.RenderTargetCompositingOutput
/// Size: 0x0008 (0x000060 - 0x000068)
class URenderTargetCompositingOutput : public UCompositingElementOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(class UTextureRenderTarget2D*)             RenderTarget                                                OFFSET(get<T>, {0x60, 8, 0, 0})
};

/// Class /Script/Composure.EXRFileCompositingOutput
/// Size: 0x0038 (0x000060 - 0x000098)
class UEXRFileCompositingOutput : public UCompositingElementOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FDirectoryPath)                            OutputDirectiory                                            OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FString)                                   FilenameFormat                                              OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	SMember(FFrameRate)                                OutputFrameRate                                             OFFSET(getStruct<T>, {0x80, 8, 0, 0})
	CMember(EExrCompressionOptions)                    Compression                                                 OFFSET(get<T>, {0x88, 1, 0, 0})
};

/// Class /Script/Composure.CompositingElementTransform
/// Size: 0x0010 (0x000060 - 0x000070)
class UCompositingElementTransform : public UCompositingElementPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	DMember(bool)                                      bIntermediate                                               OFFSET(get<bool>, {0x60, 1, 0, 0})


	/// Functions
	// Function /Script/Composure.CompositingElementTransform.FindNamedPrePassResult
	// class UTexture* FindNamedPrePassResult(FName PassLookupName);                                                            // [0x13bd3c0] Final|Native|Protected|BlueprintCallable 
	// Function /Script/Composure.CompositingElementTransform.ApplyTransform
	// class UTexture* ApplyTransform(class UTexture* Input, class UComposurePostProcessingPassProxy* PostProcessProxy, class ACameraActor* TargetCamera); // [0x13bd4d0] Native|Event|Protected|BlueprintEvent 
};

/// Class /Script/Composure.CompositingPostProcessPass
/// Size: 0x0018 (0x000070 - 0x000088)
class UCompositingPostProcessPass : public UCompositingElementTransform
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(float)                                     RenderScale                                                 OFFSET(get<float>, {0x70, 4, 0, 0})
	CMember(TArray<class UComposurePostProcessPassPolicy*>) PostProcessPasses                                      OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Class /Script/Composure.CompositingElementMaterialPass
/// Size: 0x01A8 (0x000088 - 0x000230)
class UCompositingElementMaterialPass : public UCompositingPostProcessPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FCompositingMaterial)                      Material                                                    OFFSET(getStruct<T>, {0x88, 424, 0, 0})


	/// Functions
	// Function /Script/Composure.CompositingElementMaterialPass.SetParameterMapping
	// bool SetParameterMapping(FName TextureParamName, FName ComposureLayerName);                                              // [0x13be6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElementMaterialPass.SetMaterialInterface
	// void SetMaterialInterface(class UMaterialInterface* NewMaterial);                                                        // [0x13be960] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.CompositingElementMaterialPass.ApplyMaterialParams
	// void ApplyMaterialParams(class UMaterialInstanceDynamic* Mid);                                                           // [0x3a334c0] Event|Protected|BlueprintEvent 
};

/// Class /Script/Composure.CompositingTonemapPass
/// Size: 0x0170 (0x000070 - 0x0001E0)
class UCompositingTonemapPass : public UCompositingElementTransform
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 480;

public:
	SMember(FColorGradingSettings)                     ColorGradingSettings                                        OFFSET(getStruct<T>, {0x70, 336, 0, 0})
	SMember(FFilmStockSettings)                        FilmStockSettings                                           OFFSET(getStruct<T>, {0x1C0, 20, 0, 0})
	DMember(float)                                     ChromaticAberration                                         OFFSET(get<float>, {0x1D4, 4, 0, 0})
	CMember(class UComposureTonemapperPassPolicy*)     TonemapPolicy                                               OFFSET(get<T>, {0x1D8, 8, 0, 0})
};

/// Class /Script/Composure.MultiPassChromaKeyer
/// Size: 0x01C0 (0x000070 - 0x000230)
class UMultiPassChromaKeyer : public UCompositingElementTransform
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(TArray<FLinearColor>)                      KeyColors                                                   OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FCompositingMaterial)                      KeyerMaterial                                               OFFSET(getStruct<T>, {0x80, 424, 0, 0})
	CMember(class UTexture*)                           DefaultWhiteTexture                                         OFFSET(get<T>, {0x228, 8, 0, 0})
};

/// Class /Script/Composure.MultiPassDespill
/// Size: 0x01C0 (0x000070 - 0x000230)
class UMultiPassDespill : public UCompositingElementTransform
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	CMember(TArray<FLinearColor>)                      KeyColors                                                   OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FCompositingMaterial)                      KeyerMaterial                                               OFFSET(getStruct<T>, {0x80, 424, 0, 0})
	CMember(class UTexture*)                           DefaultWhiteTexture                                         OFFSET(get<T>, {0x228, 8, 0, 0})
};

/// Class /Script/Composure.AlphaTransformPass
/// Size: 0x0018 (0x000070 - 0x000088)
class UAlphaTransformPass : public UCompositingElementTransform
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	DMember(float)                                     AlphaScale                                                  OFFSET(get<float>, {0x70, 4, 0, 0})
	CMember(class UMaterialInterface*)                 DefaultMaterial                                             OFFSET(get<T>, {0x78, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           AlphaTransformMID                                           OFFSET(get<T>, {0x80, 8, 0, 0})
};

/// Class /Script/Composure.CompositingOpenColorIOPass
/// Size: 0x0098 (0x000070 - 0x000108)
class UCompositingOpenColorIOPass : public UCompositingElementTransform
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FOpenColorIOColorConversionSettings)       ColorConversionSettings                                     OFFSET(getStruct<T>, {0x70, 152, 0, 0})
};

/// Class /Script/Composure.ComposureBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UComposureBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Composure.ComposureBlueprintLibrary.SetUVMapSettingsToMaterialParameters
	// void SetUVMapSettingsToMaterialParameters(FComposureUVMapSettings& UVMapSettings, class UMaterialInstanceDynamic* Material); // [0x13c0ae0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Composure.ComposureBlueprintLibrary.RequestRedrawComposureViewport
	// void RequestRedrawComposureViewport();                                                                                   // [0x13bf960] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Composure.ComposureBlueprintLibrary.RenameComposureElement
	// bool RenameComposureElement(FName OriginalElementName, FName NewElementName);                                            // [0x13bfda0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Composure.ComposureBlueprintLibrary.RefreshComposureElementList
	// void RefreshComposureElementList();                                                                                      // [0x13bf940] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Composure.ComposureBlueprintLibrary.IsComposureElementDrawing
	// bool IsComposureElementDrawing(class ACompositingElement* CompElement);                                                  // [0x13bf980] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Composure.ComposureBlueprintLibrary.InvertUVDisplacementMapEncodingParameters
	// void InvertUVDisplacementMapEncodingParameters(FVector2D& In, FVector2D& Out);                                           // [0x13c0930] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Composure.ComposureBlueprintLibrary.GetRedGreenUVFactorsFromChromaticAberration
	// void GetRedGreenUVFactorsFromChromaticAberration(float ChromaticAberrationAmount, FVector2D& RedGreenUVFactors);         // [0x13c0750] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Composure.ComposureBlueprintLibrary.GetProjectionMatrixFromPostMoveSettings
	// void GetProjectionMatrixFromPostMoveSettings(FComposurePostMoveSettings& PostMoveSettings, float HorizontalFOVAngle, float AspectRatio, FMatrix& ProjectionMatrix); // [0x13c0fd0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Composure.ComposureBlueprintLibrary.GetPlayerDisplayGamma
	// void GetPlayerDisplayGamma(class APlayerCameraManager* PlayerCameraManager, float& DisplayGamma);                        // [0x13c0580] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
	// Function /Script/Composure.ComposureBlueprintLibrary.GetCroppingUVTransformationMatrixFromPostMoveSettings
	// void GetCroppingUVTransformationMatrixFromPostMoveSettings(FComposurePostMoveSettings& PostMoveSettings, float AspectRatio, FMatrix& CropingUVTransformationMatrix, FMatrix& UncropingUVTransformationMatrix); // [0x13c0cf0] Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/Composure.ComposureBlueprintLibrary.GetComposureElement
	// class ACompositingElement* GetComposureElement(FName ElementName);                                                       // [0x13bfff0] Final|Native|Static|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/Composure.ComposureBlueprintLibrary.DeleteComposureElementAndChildren
	// void DeleteComposureElementAndChildren(FName ElementToDelete);                                                           // [0x13bff20] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Composure.ComposureBlueprintLibrary.CreatePlayerCompositingTarget
	// class UComposurePlayerCompositingTarget* CreatePlayerCompositingTarget(class UObject* WorldContextObject);               // [0x13c12c0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Composure.ComposureBlueprintLibrary.CreateComposureElement
	// class ACompositingElement* CreateComposureElement(FName ElementName, class UClass* ClassType, class AActor* LevelContext); // [0x13c00d0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Composure.ComposureBlueprintLibrary.CopyCameraSettingsToSceneCapture
	// void CopyCameraSettingsToSceneCapture(class UCameraComponent* SrcCamera, class USceneCaptureComponent2D* DstCaptureComponent, float OriginalFocalLength, float OverscanFactor); // [0x13c02e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/Composure.ComposureBlueprintLibrary.AttachComposureElement
	// bool AttachComposureElement(FName ParentName, FName ChildName);                                                          // [0x13bfc20] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/Composure.ComposureGameSettings
/// Size: 0x0050 (0x000028 - 0x000078)
class UComposureGameSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FSoftObjectPath)                           StaticVideoPlateDebugImage                                  OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	DMember(bool)                                      bSceneCapWarnOfMissingCam                                   OFFSET(get<bool>, {0x48, 1, 0, 0})
	SMember(FSoftObjectPath)                           FallbackCompositingTexture                                  OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	CMember(class UTexture*)                           FallbackCompositingTextureObj                               OFFSET(get<T>, {0x70, 8, 0, 0})
};

/// Class /Script/Composure.ComposurePostProcessPass
/// Size: 0x0020 (0x0001F0 - 0x000210)
class UComposurePostProcessPass : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	CMember(class USceneCaptureComponent2D*)           SceneCapture                                                OFFSET(get<T>, {0x1F0, 8, 0, 0})
	CMember(class UComposurePostProcessBlendable*)     BlendableInterface                                          OFFSET(get<T>, {0x1F8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 SetupMaterial                                               OFFSET(get<T>, {0x200, 8, 0, 0})
	CMember(class UMaterialInterface*)                 TonemapperReplacement                                       OFFSET(get<T>, {0x208, 8, 0, 0})


	/// Functions
	// Function /Script/Composure.ComposurePostProcessPass.SetSetupMaterial
	// void SetSetupMaterial(class UMaterialInterface* Material);                                                               // [0x13c3fd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.ComposurePostProcessPass.SetOutputRenderTarget
	// void SetOutputRenderTarget(class UTextureRenderTarget2D* RenderTarget);                                                  // [0x13c3e80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.ComposurePostProcessPass.GetSetupMaterial
	// class UMaterialInterface* GetSetupMaterial();                                                                            // [0x13c3fb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Composure.ComposurePostProcessPass.GetOutputRenderTarget
	// class UTextureRenderTarget2D* GetOutputRenderTarget();                                                                   // [0x13c3f80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Composure.ComposureLensBloomPass
/// Size: 0x00C0 (0x000210 - 0x0002D0)
class UComposureLensBloomPass : public UComposurePostProcessPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 720;

public:
	SMember(FLensBloomSettings)                        Settings                                                    OFFSET(getStruct<T>, {0x210, 184, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           TonemapperReplacingMID                                      OFFSET(get<T>, {0x2C8, 8, 0, 0})


	/// Functions
	// Function /Script/Composure.ComposureLensBloomPass.SetTonemapperReplacingMaterial
	// void SetTonemapperReplacingMaterial(class UMaterialInstanceDynamic* Material);                                           // [0x13c1f10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.ComposureLensBloomPass.BloomToRenderTarget
	// void BloomToRenderTarget();                                                                                              // [0x13c1ef0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Composure.ComposurePostProcessPassPolicy
/// Size: 0x0000 (0x000028 - 0x000028)
class UComposurePostProcessPassPolicy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Composure.ComposurePostProcessPassPolicy.SetupPostProcess
	// void SetupPostProcess(class USceneCaptureComponent2D* SceneCapture, class UMaterialInterface*& TonemapperOverride);      // [0x13c3960] Native|Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Composure.ComposureLensBloomPassPolicy
/// Size: 0x00D0 (0x000028 - 0x0000F8)
class UComposureLensBloomPassPolicy : public UComposurePostProcessPassPolicy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
	SMember(FLensBloomSettings)                        Settings                                                    OFFSET(getStruct<T>, {0x28, 184, 0, 0})
	CMember(class UMaterialInterface*)                 ReplacementMaterial                                         OFFSET(get<T>, {0xE0, 8, 0, 0})
	SMember(FName)                                     BloomIntensityParamName                                     OFFSET(getStruct<T>, {0xE8, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           TonemapperReplacmentMID                                     OFFSET(get<T>, {0xF0, 8, 0, 0})
};

/// Class /Script/Composure.ComposurePlayerCompositingCameraModifier
/// Size: 0x0018 (0x000048 - 0x000060)
class UComposurePlayerCompositingCameraModifier : public UCameraModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TScriptInterface<Class>)                   Target                                                      OFFSET(get<T>, {0x50, 16, 0, 0})
};

/// Class /Script/Composure.ComposurePlayerCompositingInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UComposurePlayerCompositingInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Composure.ComposurePlayerCompositingTarget
/// Size: 0x0050 (0x000028 - 0x000078)
class UComposurePlayerCompositingTarget : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(class APlayerCameraManager*)               PlayerCameraManager                                         OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(class UComposurePlayerCompositingCameraModifier*) PlayerCameraModifier                                 OFFSET(get<T>, {0x38, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ReplaceTonemapperMID                                        OFFSET(get<T>, {0x40, 8, 0, 0})


	/// Functions
	// Function /Script/Composure.ComposurePlayerCompositingTarget.SetRenderTarget
	// void SetRenderTarget(class UTextureRenderTarget2D* RenderTarget);                                                        // [0x13c2e10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.ComposurePlayerCompositingTarget.SetPlayerCameraManager
	// class APlayerCameraManager* SetPlayerCameraManager(class APlayerCameraManager* PlayerCameraManager);                     // [0x13c3050] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.ComposurePlayerCompositingTarget.GetPlayerCameraManager
	// class APlayerCameraManager* GetPlayerCameraManager();                                                                    // [0x13c3140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Composure.ComposureCompositingTargetComponent
/// Size: 0x0010 (0x0000A8 - 0x0000B8)
class UComposureCompositingTargetComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UTexture*)                           DisplayTexture                                              OFFSET(get<T>, {0xB0, 8, 0, 0})


	/// Functions
	// Function /Script/Composure.ComposureCompositingTargetComponent.SetDisplayTexture
	// void SetDisplayTexture(class UTexture* DisplayTexture);                                                                  // [0x13c3370] Final|Native|Public|BlueprintCallable 
	// Function /Script/Composure.ComposureCompositingTargetComponent.GetDisplayTexture
	// class UTexture* GetDisplayTexture();                                                                                     // [0x13c3350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Composure.ComposurePostProcessBlendable
/// Size: 0x0010 (0x000028 - 0x000038)
class UComposurePostProcessBlendable : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UComposurePostProcessPass*)          Target                                                      OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Class /Script/Composure.ComposurePostProcessingPassProxy
/// Size: 0x0010 (0x000210 - 0x000220)
class UComposurePostProcessingPassProxy : public UComposurePostProcessPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(class UMaterialInstanceDynamic*)           SetupMID                                                    OFFSET(get<T>, {0x210, 8, 0, 0})


	/// Functions
	// Function /Script/Composure.ComposurePostProcessingPassProxy.Execute
	// void Execute(class UTexture* PrePassInput, class UComposurePostProcessPassPolicy* PostProcessPass);                      // [0x13c3b90] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Composure.ComposureTonemapperPass
/// Size: 0x0170 (0x000210 - 0x000380)
class UComposureTonemapperPass : public UComposurePostProcessPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 896;

public:
	SMember(FColorGradingSettings)                     ColorGradingSettings                                        OFFSET(getStruct<T>, {0x210, 336, 0, 0})
	SMember(FFilmStockSettings)                        FilmStockSettings                                           OFFSET(getStruct<T>, {0x360, 20, 0, 0})
	DMember(float)                                     ChromaticAberration                                         OFFSET(get<float>, {0x374, 4, 0, 0})


	/// Functions
	// Function /Script/Composure.ComposureTonemapperPass.TonemapToRenderTarget
	// void TonemapToRenderTarget();                                                                                            // [0x13c4500] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Composure.ComposureTonemapperPassPolicy
/// Size: 0x0178 (0x000028 - 0x0001A0)
class UComposureTonemapperPassPolicy : public UComposurePostProcessPassPolicy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FColorGradingSettings)                     ColorGradingSettings                                        OFFSET(getStruct<T>, {0x30, 336, 0, 0})
	SMember(FFilmStockSettings)                        FilmStockSettings                                           OFFSET(getStruct<T>, {0x180, 20, 0, 0})
	DMember(float)                                     ChromaticAberration                                         OFFSET(get<float>, {0x194, 4, 0, 0})
};

/// Class /Script/Composure.CompositingTextureLookupTable
/// Size: 0x0000 (0x000028 - 0x000028)
class UCompositingTextureLookupTable : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Composure.CompositingTextureLookupTable.FindNamedPassResult
	// bool FindNamedPassResult(FName LookupName, class UTexture*& OutTexture);                                                 // [0x13c5ff0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Composure.MovieSceneComposureExportClient
/// Size: 0x0000 (0x000028 - 0x000028)
class UMovieSceneComposureExportClient : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Composure.MovieSceneComposureExportClient.InitializeForExport
	// void InitializeForExport(class UMovieSceneComposureExportInitializer* ExportInitializer);                                // [0x3a334c0] Event|Public|BlueprintEvent 
};

/// Class /Script/Composure.MovieSceneComposureExportInitializer
/// Size: 0x0010 (0x000028 - 0x000038)
class UMovieSceneComposureExportInitializer : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:


	/// Functions
	// Function /Script/Composure.MovieSceneComposureExportInitializer.ExportSceneCaptureBuffers
	// void ExportSceneCaptureBuffers(class ACompositingElement* CompShotElement, class USceneCaptureComponent2D* SceneCapture, TArray<FString>& BuffersToExport); // [0x13c7270] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Composure.MovieSceneComposureExportPass
/// Size: 0x0014 (0x000000 - 0x000014)
class FMovieSceneComposureExportPass : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     TransformPassName                                           OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bRenamePass                                                 OFFSET(get<bool>, {0x8, 1, 0, 0})
	SMember(FName)                                     ExportedAs                                                  OFFSET(getStruct<T>, {0xC, 8, 0, 0})
};

/// Class /Script/Composure.MovieSceneComposureExportTrack
/// Size: 0x0030 (0x000098 - 0x0000C8)
class UMovieSceneComposureExportTrack : public UMovieSceneTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FMovieSceneComposureExportPass)            Pass                                                        OFFSET(getStruct<T>, {0xA0, 20, 0, 0})
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0xB8, 16, 0, 0})
};

/// Class /Script/Composure.MovieSceneComposureExportSection
/// Size: 0x0000 (0x0000F0 - 0x0000F0)
class UMovieSceneComposureExportSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/Composure.MovieSceneComposurePostMoveSettingsSection
/// Size: 0x0660 (0x0000F0 - 0x000750)
class UMovieSceneComposurePostMoveSettingsSection : public UMovieSceneSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1872;

public:
	SMember(FMovieSceneFloatChannel)                   Pivot                                                       OFFSET(getStruct<T>, {0xF0, 544, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Translation                                                 OFFSET(getStruct<T>, {0x310, 544, 0, 0})
	SMember(FMovieSceneFloatChannel)                   RotationAngle                                               OFFSET(getStruct<T>, {0x530, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Scale                                                       OFFSET(getStruct<T>, {0x640, 272, 0, 0})
};

/// Class /Script/Composure.MovieSceneComposurePostMoveSettingsTrack
/// Size: 0x0008 (0x0000C8 - 0x0000D0)
class UMovieSceneComposurePostMoveSettingsTrack : public UMovieScenePropertyTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/Composure.PlayerViewportCompositingOutput
/// Size: 0x0040 (0x000078 - 0x0000B8)
class UPlayerViewportCompositingOutput : public UColorConverterOutputPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	DMember(int32_t)                                   PlayerIndex                                                 OFFSET(get<int32_t>, {0x80, 4, 0, 0})
	DMember(bool)                                      ApplyToneCurve                                              OFFSET(get<bool>, {0x84, 1, 0, 0})
	CMember(class UPlayerCompOutputCameraModifier*)    ActiveCamModifier                                           OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UMaterialInterface*)                 TonemapperBaseMat                                           OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(class UMaterialInterface*)                 PreTonemapBaseMat                                           OFFSET(get<T>, {0xA0, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           ViewportOverrideMID                                         OFFSET(get<T>, {0xA8, 8, 0, 0})
};

/// Class /Script/Composure.PlayerCompOutputCameraModifier
/// Size: 0x0008 (0x000048 - 0x000050)
class UPlayerCompOutputCameraModifier : public UCameraModifier
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(class UPlayerViewportCompositingOutput*)   Owner                                                       OFFSET(get<T>, {0x48, 8, 0, 0})
};

/// Struct /Script/Composure.ComposurePostMoveSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FComposurePostMoveSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FVector2D)                                 Pivot                                                       OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector2D)                                 Translation                                                 OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(float)                                     RotationAngle                                               OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/Composure.ComposureUVMapSettings
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FComposureUVMapSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FMatrix)                                   PreUVDisplacementMatrix                                     OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	SMember(FMatrix)                                   PostUVDisplacementMatrix                                    OFFSET(getStruct<T>, {0x40, 64, 0, 0})
	SMember(FVector2D)                                 DisplacementDecodeParameters                                OFFSET(getStruct<T>, {0x80, 8, 0, 0})
	CMember(class UTexture*)                           DisplacementTexture                                         OFFSET(get<T>, {0x88, 8, 0, 0})
	DMember(bool)                                      bUseDisplacementBlueAndAlphaChannels                        OFFSET(get<bool>, {0x90, 1, 1, 0})
};

/// Struct /Script/Composure.MovieSceneComposureExportSectionTemplate
/// Size: 0x0018 (0x000020 - 0x000038)
class FMovieSceneComposureExportSectionTemplate : public FMovieSceneEvalTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FMovieSceneComposureExportPass)            Pass                                                        OFFSET(getStruct<T>, {0x20, 20, 0, 0})
};

/// Struct /Script/Composure.MovieSceneComposurePostMoveSettingsSectionTemplate
/// Size: 0x0668 (0x000038 - 0x0006A0)
class FMovieSceneComposurePostMoveSettingsSectionTemplate : public FMovieScenePropertySectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1696;

public:
	SMember(FMovieSceneFloatChannel)                   Pivot                                                       OFFSET(getStruct<T>, {0x38, 544, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Translation                                                 OFFSET(getStruct<T>, {0x258, 544, 0, 0})
	SMember(FMovieSceneFloatChannel)                   RotationAngle                                               OFFSET(getStruct<T>, {0x478, 272, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Scale                                                       OFFSET(getStruct<T>, {0x588, 272, 0, 0})
	CMember(EMovieSceneBlendType)                      BlendType                                                   OFFSET(get<T>, {0x698, 1, 0, 0})
};

/// Enum /Script/Composure.ESceneCameraLinkType
/// Size: 0x03
enum class ESceneCameraLinkType : uint32_t
{
	ESceneCameraLinkType__Inherited                                                  = 0,
	ESceneCameraLinkType__Override                                                   = 1,
	ESceneCameraLinkType__Unused                                                     = 2
};

/// Enum /Script/Composure.EInheritedSourceType
/// Size: 0x02
enum class EInheritedSourceType : uint32_t
{
	EInheritedSourceType__Inherited                                                  = 0,
	EInheritedSourceType__Override                                                   = 1
};

/// Enum /Script/Composure.ETargetUsageFlags
/// Size: 0x07
enum class ETargetUsageFlags : uint8_t
{
	ETargetUsageFlags__USAGE_None                                                    = 0,
	ETargetUsageFlags__USAGE_Input                                                   = 1,
	ETargetUsageFlags__USAGE_Transform                                               = 2,
	ETargetUsageFlags__USAGE_Output                                                  = 4,
	ETargetUsageFlags__USAGE_Persistent                                              = 32,
	ETargetUsageFlags__USAGE_Intermediate0                                           = 8,
	ETargetUsageFlags__USAGE_Intermediate1                                           = 16
};

/// Enum /Script/Composure.ECompPassConstructionType
/// Size: 0x04
enum class ECompPassConstructionType : uint8_t
{
	ECompPassConstructionType__Unknown                                               = 0,
	ECompPassConstructionType__EditorConstructed                                     = 1,
	ECompPassConstructionType__BlueprintConstructed                                  = 2,
	ECompPassConstructionType__CodeConstructed                                       = 3
};

/// Enum /Script/Composure.EExrCompressionOptions
/// Size: 0x02
enum class EExrCompressionOptions : uint8_t
{
	EExrCompressionOptions__Compressed                                               = 0,
	EExrCompressionOptions__Uncompressed                                             = 1
};

/// Enum /Script/Composure.EParamType
/// Size: 0x05
enum class EParamType : uint8_t
{
	EParamType__UnknownParamType                                                     = 0,
	EParamType__ScalarParam                                                          = 1,
	EParamType__VectorParam                                                          = 2,
	EParamType__TextureParam                                                         = 3,
	EParamType__MediaTextureParam                                                    = 4
};

