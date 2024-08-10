
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CinematicCamera
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: ProceduralMeshComponent

/// Struct /Script/CameraCalibrationCore.DistortionInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FDistortionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<float>)                             Parameters                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.FocalLengthInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FFocalLengthInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FVector2D)                                 FxFy                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.ImageCenterInfo
/// Size: 0x0008 (0x000000 - 0x000008)
class FImageCenterInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FVector2D)                                 PrincipalPoint                                              OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.LensDistortionState
/// Size: 0x0020 (0x000000 - 0x000020)
class FLensDistortionState : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FDistortionInfo)                           DistortionInfo                                              OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FFocalLengthInfo)                          FocalLengthInfo                                             OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FImageCenterInfo)                          ImageCenter                                                 OFFSET(getStruct<T>, {0x18, 8, 0, 0})
};

/// Class /Script/CameraCalibrationCore.LensDistortionModelHandlerBase
/// Size: 0x0090 (0x000028 - 0x0000B8)
class ULensDistortionModelHandlerBase : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(class UClass*)                             LensModelClass                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           DistortionPostProcessMID                                    OFFSET(get<T>, {0x30, 8, 0, 0})
	SMember(FLensDistortionState)                      CurrentState                                                OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	SMember(FCameraFilmbackSettings)                   CameraFilmback                                              OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	SMember(FString)                                   DisplayName                                                 OFFSET(getStruct<T>, {0x68, 16, 0, 0})
	DMember(float)                                     OverscanFactor                                              OFFSET(get<float>, {0x78, 4, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           UndistortionDisplacementMapMID                              OFFSET(get<T>, {0x80, 8, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           DistortionDisplacementMapMID                                OFFSET(get<T>, {0x88, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             UndistortionDisplacementMapRT                               OFFSET(get<T>, {0x90, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             DistortionDisplacementMapRT                                 OFFSET(get<T>, {0x98, 8, 0, 0})
	SMember(FGuid)                                     DistortionProducerID                                        OFFSET(getStruct<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/CameraCalibrationCore.LensDistortionModelHandlerBase.SetDistortionState
	// void SetDistortionState(FLensDistortionState& InNewState);                                                               // [0x13f86e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensDistortionModelHandlerBase.IsModelSupported
	// bool IsModelSupported(class UClass*& ModelToSupport);                                                                    // [0x13f87f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensDistortionModelHandlerBase.GetUndistortionDisplacementMap
	// class UTextureRenderTarget2D* GetUndistortionDisplacementMap();                                                          // [0x13f86c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensDistortionModelHandlerBase.GetDistortionDisplacementMap
	// class UTextureRenderTarget2D* GetDistortionDisplacementMap();                                                            // [0x13f86a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CameraCalibrationCore.AnamorphicLensDistortionModelHandler
/// Size: 0x0038 (0x0000B8 - 0x0000F0)
class UAnamorphicLensDistortionModelHandler : public ULensDistortionModelHandlerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Class /Script/CameraCalibrationCore.LensModel
/// Size: 0x0000 (0x000028 - 0x000028)
class ULensModel : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CameraCalibrationCore.AnamorphicLensModel
/// Size: 0x0000 (0x000028 - 0x000028)
class UAnamorphicLensModel : public ULensModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CameraCalibrationCore.CalibrationPointComponent
/// Size: 0x0068 (0x000518 - 0x000580)
class UCalibrationPointComponent : public UProceduralMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1408;

public:
	CMember(TMap<FString, FVector>)                    SubPoints                                                   OFFSET(get<T>, {0x518, 80, 0, 0})
	DMember(bool)                                      bVisualizePointsInEditor                                    OFFSET(get<bool>, {0x568, 1, 0, 0})
	DMember(float)                                     PointVisualizationScale                                     OFFSET(get<float>, {0x56C, 4, 0, 0})
	CMember(TEnumAsByte<ECalibrationPointVisualization>) VisualizationShape                                        OFFSET(get<T>, {0x570, 1, 0, 0})


	/// Functions
	// Function /Script/CameraCalibrationCore.CalibrationPointComponent.RebuildVertices
	// void RebuildVertices();                                                                                                  // [0x13eb4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.CalibrationPointComponent.NamespacedSubpointName
	// bool NamespacedSubpointName(FString InSubpointName, FString& OutNamespacedName);                                         // [0x13eb640] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.CalibrationPointComponent.GetWorldLocation
	// bool GetWorldLocation(FString InPointName, FVector& OutLocation);                                                        // [0x13eb810] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.CalibrationPointComponent.GetNamespacedPointNames
	// void GetNamespacedPointNames(TArray<FString>& OutNamespacedNames);                                                       // [0x13eb510] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CameraCalibrationCore.CameraCalibrationCheckerboard
/// Size: 0x0058 (0x000248 - 0x0002A0)
class ACameraCalibrationCheckerboard : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(class USceneComponent*)                    Root                                                        OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class UCalibrationPointComponent*)         TopLeft                                                     OFFSET(get<T>, {0x250, 8, 0, 0})
	CMember(class UCalibrationPointComponent*)         TopRight                                                    OFFSET(get<T>, {0x258, 8, 0, 0})
	CMember(class UCalibrationPointComponent*)         BottomLeft                                                  OFFSET(get<T>, {0x260, 8, 0, 0})
	CMember(class UCalibrationPointComponent*)         BottomRight                                                 OFFSET(get<T>, {0x268, 8, 0, 0})
	CMember(class UCalibrationPointComponent*)         Center                                                      OFFSET(get<T>, {0x270, 8, 0, 0})
	DMember(int32_t)                                   NumCornerRows                                               OFFSET(get<int32_t>, {0x278, 4, 0, 0})
	DMember(int32_t)                                   NumCornerCols                                               OFFSET(get<int32_t>, {0x27C, 4, 0, 0})
	DMember(float)                                     SquareSideLength                                            OFFSET(get<float>, {0x280, 4, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x284, 4, 0, 0})
	CMember(class UStaticMesh*)                        CubeMesh                                                    OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(class UMaterialInterface*)                 OddCubeMaterial                                             OFFSET(get<T>, {0x290, 8, 0, 0})
	CMember(class UMaterialInterface*)                 EvenCubeMaterial                                            OFFSET(get<T>, {0x298, 8, 0, 0})


	/// Functions
	// Function /Script/CameraCalibrationCore.CameraCalibrationCheckerboard.Rebuild
	// void Rebuild();                                                                                                          // [0x13ebd20] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/CameraCalibrationCore.CameraCalibrationSettings
/// Size: 0x0140 (0x000038 - 0x000178)
class UCameraCalibrationSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 376;

public:
	CMember(TWeakObjectPtr<class ULensFile*>)          StartupLensFile                                             OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FIntPoint)                                 DisplacementMapResolution                                   OFFSET(getStruct<T>, {0x68, 8, 0, 0})
	DMember(float)                                     CalibrationInputTolerance                                   OFFSET(get<float>, {0x70, 4, 0, 0})
	CMember(TMap<class UClass*, TWeakObjectPtr<UMaterialInterface*>>) DefaultUndistortionDisplacementMaterials     OFFSET(get<T>, {0x78, 80, 0, 0})
	CMember(TMap<class UClass*, TWeakObjectPtr<UMaterialInterface*>>) DefaultDistortionDisplacementMaterials       OFFSET(get<T>, {0xC8, 80, 0, 0})
	CMember(TMap<class UClass*, TWeakObjectPtr<UMaterialInterface*>>) DefaultDistortionMaterials                   OFFSET(get<T>, {0x118, 80, 0, 0})
	DMember(bool)                                      bEnableCalibrationDatasetImportExport                       OFFSET(get<bool>, {0x168, 1, 0, 0})
};

/// Class /Script/CameraCalibrationCore.CameraCalibrationEditorSettings
/// Size: 0x0000 (0x000038 - 0x000038)
class UCameraCalibrationEditorSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/CameraCalibrationCore.CameraCalibrationStep
/// Size: 0x0000 (0x000028 - 0x000028)
class UCameraCalibrationStep : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CameraCalibrationCore.CameraCalibrationSubsystem
/// Size: 0x01F0 (0x000030 - 0x000220)
class UCameraCalibrationSubsystem : public UEngineSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	CMember(class ULensFile*)                          DefaultLensFile                                             OFFSET(get<T>, {0x30, 8, 0, 0})
	CMember(TMap<FName, class UClass*>)                LensModelMap                                                OFFSET(get<T>, {0x38, 80, 0, 0})
	CMember(TMap<FName, class UClass*>)                CameraNodalOffsetAlgosMap                                   OFFSET(get<T>, {0x88, 80, 0, 0})
	CMember(TMap<FName, class UClass*>)                CameraImageCenterAlgosMap                                   OFFSET(get<T>, {0xD8, 80, 0, 0})
	CMember(TMap<FName, class UClass*>)                CameraCalibrationStepsMap                                   OFFSET(get<T>, {0x128, 80, 0, 0})


	/// Functions
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.UnregisterDistortionModelHandler
	// void UnregisterDistortionModelHandler(class UCineCameraComponent* Component, class ULensDistortionModelHandlerBase* Handler); // [0x13edb10] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.SetDefaultLensFile
	// void SetDefaultLensFile(class ULensFile* NewDefaultLensFile);                                                            // [0x13ee510] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.GetRegisteredLensModel
	// class UClass* GetRegisteredLensModel(FName ModelName);                                                                   // [0x13ed960] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.GetOverlayMaterialNames
	// TArray<FName> GetOverlayMaterialNames();                                                                                 // [0x13ed340] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.GetOverlayMaterial
	// class UMaterialInterface* GetOverlayMaterial(FName& OverlayName);                                                        // [0x13ed3c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.GetLensFile
	// class ULensFile* GetLensFile(FLensFilePicker& Picker);                                                                   // [0x13ee400] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.GetDistortionModelHandlers
	// TArray<ULensDistortionModelHandlerBase*> GetDistortionModelHandlers(class UCineCameraComponent* Component);              // [0x13ee170] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.GetDefaultLensFile
	// class ULensFile* GetDefaultLensFile();                                                                                   // [0x13c3140] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgos
	// TArray<FName> GetCameraNodalOffsetAlgos();                                                                               // [0x13ed710] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraNodalOffsetAlgo
	// class UClass* GetCameraNodalOffsetAlgo(FName Name);                                                                      // [0x13ed7a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraImageCenterAlgos
	// TArray<FName> GetCameraImageCenterAlgos();                                                                               // [0x13ed4c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraImageCenterAlgo
	// class UClass* GetCameraImageCenterAlgo(FName Name);                                                                      // [0x13ed550] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationSteps
	// TArray<FName> GetCameraCalibrationSteps();                                                                               // [0x13ed2b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.GetCameraCalibrationStep
	// class UClass* GetCameraCalibrationStep(FName Name);                                                                      // [0x13ed0f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.FindOrCreateDistortionModelHandler
	// class ULensDistortionModelHandlerBase* FindOrCreateDistortionModelHandler(FDistortionHandlerPicker& DistortionHandlerPicker, class UClass* LensModelClass); // [0x13edc70] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.CameraCalibrationSubsystem.FindDistortionModelHandler
	// class ULensDistortionModelHandlerBase* FindDistortionModelHandler(FDistortionHandlerPicker& DistortionHandlerPicker, bool bUpdatePicker); // [0x13edef0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/CameraCalibrationCore.CameraImageCenterAlgo
/// Size: 0x0008 (0x000028 - 0x000030)
class UCameraImageCenterAlgo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Class /Script/CameraCalibrationCore.CameraLensDistortionAlgo
/// Size: 0x0000 (0x000028 - 0x000028)
class UCameraLensDistortionAlgo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/CameraCalibrationCore.CameraNodalOffsetAlgo
/// Size: 0x0000 (0x000028 - 0x000028)
class UCameraNodalOffsetAlgo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/CameraCalibrationCore.LensFilePicker
/// Size: 0x0010 (0x000000 - 0x000010)
class FLensFilePicker : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bUseDefaultLensFile                                         OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(class ULensFile*)                          LensFile                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.LensFileEvaluationInputs
/// Size: 0x001C (0x000000 - 0x00001C)
class FLensFileEvaluationInputs : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     Focus                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Iris                                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Zoom                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FCameraFilmbackSettings)                   Filmback                                                    OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(bool)                                      bIsValid                                                    OFFSET(get<bool>, {0x18, 1, 0, 0})
};

/// Class /Script/CameraCalibrationCore.LensComponent
/// Size: 0x0198 (0x0000A8 - 0x000240)
class ULensComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FLensFilePicker)                           LensFilePicker                                              OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
	CMember(EFIZEvaluationMode)                        EvaluationMode                                              OFFSET(get<T>, {0xB8, 1, 0, 0})
	SMember(FComponentReference)                       TargetCameraComponent                                       OFFSET(getStruct<T>, {0xC0, 40, 0, 0})
	SMember(FLensFileEvaluationInputs)                 EvalInputs                                                  OFFSET(getStruct<T>, {0xE8, 28, 0, 0})
	CMember(EDistortionSource)                         DistortionStateSource                                       OFFSET(get<T>, {0x104, 1, 0, 0})
	DMember(bool)                                      bApplyDistortion                                            OFFSET(get<bool>, {0x105, 1, 0, 0})
	CMember(class UClass*)                             LensModel                                                   OFFSET(get<T>, {0x108, 8, 0, 0})
	SMember(FLensDistortionState)                      DistortionState                                             OFFSET(getStruct<T>, {0x110, 32, 0, 0})
	DMember(bool)                                      bScaleOverscan                                              OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(float)                                     OverscanMultiplier                                          OFFSET(get<float>, {0x134, 4, 0, 0})
	CMember(EFilmbackOverrideSource)                   FilmbackOverride                                            OFFSET(get<T>, {0x138, 1, 0, 0})
	SMember(FCameraFilmbackSettings)                   CroppedFilmback                                             OFFSET(getStruct<T>, {0x13C, 12, 0, 0})
	DMember(bool)                                      bApplyNodalOffsetOnTick                                     OFFSET(get<bool>, {0x148, 1, 0, 0})
	SMember(FTransform)                                OriginalTrackedComponentTransform                           OFFSET(getStruct<T>, {0x150, 48, 0, 0})
	DMember(bool)                                      bIsDistortionSetup                                          OFFSET(get<bool>, {0x180, 1, 0, 0})
	DMember(float)                                     OriginalFocalLength                                         OFFSET(get<float>, {0x184, 4, 0, 0})
	CMember(class UMaterialInstanceDynamic*)           LastDistortionMID                                           OFFSET(get<T>, {0x188, 8, 0, 0})
	CMember(class UCineCameraComponent*)               LastCameraComponent                                         OFFSET(get<T>, {0x190, 8, 0, 0})
	CMember(TMap<class UClass*, class ULensDistortionModelHandlerBase*>) LensDistortionHandlerMap                  OFFSET(get<T>, {0x198, 80, 0, 0})
	CMember(TWeakObjectPtr<class USceneComponent*>)    TrackedComponent                                            OFFSET(get<T>, {0x1E8, 8, 0, 0})
	SMember(FString)                                   TrackedComponentName                                        OFFSET(getStruct<T>, {0x1F0, 16, 0, 0})


	/// Functions
	// Function /Script/CameraCalibrationCore.LensComponent.WasNodalOffsetAppliedThisTick
	// bool WasNodalOffsetAppliedThisTick();                                                                                    // [0x13f07b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensComponent.WasDistortionEvaluated
	// bool WasDistortionEvaluated();                                                                                           // [0x13f0790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensComponent.ShouldApplyNodalOffsetOnTick
	// bool ShouldApplyNodalOffsetOnTick();                                                                                     // [0x13f0eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensComponent.ShouldApplyDistortion
	// bool ShouldApplyDistortion();                                                                                            // [0x13f0c70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensComponent.SetOverscanMultiplier
	// void SetOverscanMultiplier(float Multiplier);                                                                            // [0x13f1130] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensComponent.SetLensModel
	// void SetLensModel(class UClass* Model);                                                                                  // [0x13f0a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensComponent.SetLensFilePicker
	// void SetLensFilePicker(FLensFilePicker LensFile);                                                                        // [0x13f1480] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensComponent.SetLensFile
	// void SetLensFile(class ULensFile* LensFile);                                                                             // [0x13f1370] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensComponent.SetFIZEvaluationMode
	// void SetFIZEvaluationMode(EFIZEvaluationMode Mode);                                                                      // [0x13f1260] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensComponent.SetFilmbackOverrideSetting
	// void SetFilmbackOverrideSetting(EFilmbackOverrideSource Setting);                                                        // [0x13f1020] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensComponent.SetDistortionState
	// void SetDistortionState(FLensDistortionState State);                                                                     // [0x13f0850] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensComponent.SetDistortionSource
	// void SetDistortionSource(EDistortionSource Source);                                                                      // [0x13f0c90] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensComponent.SetCroppedFilmback
	// void SetCroppedFilmback(FCameraFilmbackSettings Filmback);                                                               // [0x13f0ed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensComponent.SetApplyNodalOffsetOnTick
	// void SetApplyNodalOffsetOnTick(bool bApplyNodalOffset);                                                                  // [0x13f0dc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensComponent.SetApplyDistortion
	// void SetApplyDistortion(bool bApply);                                                                                    // [0x13f0b80] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensComponent.GetOverscanMultiplier
	// float GetOverscanMultiplier();                                                                                           // [0x13f1220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensComponent.GetOriginalFocalLength
	// float GetOriginalFocalLength();                                                                                          // [0x13f0810] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensComponent.GetLensModel
	// class UClass* GetLensModel();                                                                                            // [0x13f0b60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensComponent.GetLensFilePicker
	// FLensFilePicker GetLensFilePicker();                                                                                     // [0x13f15c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensComponent.GetLensFileEvaluationInputs
	// FLensFileEvaluationInputs GetLensFileEvaluationInputs();                                                                 // [0x13f07d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensComponent.GetLensFile
	// class ULensFile* GetLensFile();                                                                                          // [0x13f1580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensComponent.GetFIZEvaluationMode
	// EFIZEvaluationMode GetFIZEvaluationMode();                                                                               // [0x13f1350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensComponent.GetFilmbackOverrideSetting
	// EFilmbackOverrideSource GetFilmbackOverrideSetting();                                                                    // [0x13f1110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensComponent.GetDistortionState
	// FLensDistortionState GetDistortionState();                                                                               // [0x13f09b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensComponent.GetDistortionSource
	// EDistortionSource GetDistortionSource();                                                                                 // [0x13f0da0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensComponent.GetCroppedFilmback
	// FCameraFilmbackSettings GetCroppedFilmback();                                                                            // [0x13f0ff0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensComponent.ClearDistortionState
	// void ClearDistortionState();                                                                                             // [0x13f0830] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensComponent.ApplyNodalOffset
	// void ApplyNodalOffset(class USceneComponent* ComponentToOffset, bool bUseManualInputs, float ManualFocusInput, float ManualZoomInput); // [0x13f03e0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/CameraCalibrationCore.LensInfo
/// Size: 0x0038 (0x000000 - 0x000038)
class FLensInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FString)                                   LensModelName                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FString)                                   LensSerialNumber                                            OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(class UClass*)                             LensModel                                                   OFFSET(get<T>, {0x20, 8, 0, 0})
	SMember(FVector2D)                                 SensorDimensions                                            OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	SMember(FIntPoint)                                 ImageDimensions                                             OFFSET(getStruct<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.EncodersTable
/// Size: 0x0100 (0x000000 - 0x000100)
class FEncodersTable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FRichCurve)                                Focus                                                       OFFSET(getStruct<T>, {0x0, 128, 0, 0})
	SMember(FRichCurve)                                Iris                                                        OFFSET(getStruct<T>, {0x80, 128, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.BaseLensTable
/// Size: 0x0010 (0x000000 - 0x000010)
class FBaseLensTable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TWeakObjectPtr<class ULensFile*>)          LensFile                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.BaseFocusPoint
/// Size: 0x0008 (0x000000 - 0x000008)
class FBaseFocusPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/CameraCalibrationCore.DistortionZoomPoint
/// Size: 0x0018 (0x000000 - 0x000018)
class FDistortionZoomPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Zoom                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FDistortionInfo)                           DistortionInfo                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.DistortionFocusPoint
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FDistortionFocusPoint : public FBaseFocusPoint
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     Focus                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FRichCurve)                                MapBlendingCurve                                            OFFSET(getStruct<T>, {0x10, 128, 0, 0})
	CMember(TArray<FDistortionZoomPoint>)              ZoomPoints                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.DistortionTable
/// Size: 0x0010 (0x000010 - 0x000020)
class FDistortionTable : public FBaseLensTable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FDistortionFocusPoint>)             FocusPoints                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.FocalLengthZoomPoint
/// Size: 0x0010 (0x000000 - 0x000010)
class FFocalLengthZoomPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Zoom                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FFocalLengthInfo)                          FocalLengthInfo                                             OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	DMember(bool)                                      bIsCalibrationPoint                                         OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.FocalLengthFocusPoint
/// Size: 0x0118 (0x000008 - 0x000120)
class FFocalLengthFocusPoint : public FBaseFocusPoint
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	DMember(float)                                     Focus                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FRichCurve)                                FX                                                          OFFSET(getStruct<T>, {0x10, 128, 0, 0})
	SMember(FRichCurve)                                Fy                                                          OFFSET(getStruct<T>, {0x90, 128, 0, 0})
	CMember(TArray<FFocalLengthZoomPoint>)             ZoomPoints                                                  OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.FocalLengthTable
/// Size: 0x0010 (0x000010 - 0x000020)
class FFocalLengthTable : public FBaseLensTable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FFocalLengthFocusPoint>)            FocusPoints                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.ImageCenterFocusPoint
/// Size: 0x0108 (0x000008 - 0x000110)
class FImageCenterFocusPoint : public FBaseFocusPoint
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	DMember(float)                                     Focus                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FRichCurve)                                Cx                                                          OFFSET(getStruct<T>, {0x10, 128, 0, 0})
	SMember(FRichCurve)                                Cy                                                          OFFSET(getStruct<T>, {0x90, 128, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.ImageCenterTable
/// Size: 0x0010 (0x000010 - 0x000020)
class FImageCenterTable : public FBaseLensTable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FImageCenterFocusPoint>)            FocusPoints                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.NodalOffsetFocusPoint
/// Size: 0x0308 (0x000008 - 0x000310)
class FNodalOffsetFocusPoint : public FBaseFocusPoint
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	DMember(float)                                     Focus                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FRichCurve)                                LocationOffset                                              OFFSET(getStruct<T>, {0x10, 384, 0, 0})
	SMember(FRichCurve)                                RotationOffset                                              OFFSET(getStruct<T>, {0x190, 384, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.NodalOffsetTable
/// Size: 0x0010 (0x000010 - 0x000020)
class FNodalOffsetTable : public FBaseLensTable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FNodalOffsetFocusPoint>)            FocusPoints                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.CalibratedMapFormat
/// Size: 0x0003 (0x000000 - 0x000003)
class FCalibratedMapFormat : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	CMember(ECalibratedMapPixelOrigin)                 PixelOrigin                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ECalibratedMapChannels)                    UndistortionChannels                                        OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ECalibratedMapChannels)                    DistortionChannels                                          OFFSET(get<T>, {0x2, 1, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.STMapInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FSTMapInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class UTexture*)                           DistortionMap                                               OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FCalibratedMapFormat)                      MapFormat                                                   OFFSET(getStruct<T>, {0x8, 3, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.DistortionData
/// Size: 0x0018 (0x000000 - 0x000018)
class FDistortionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FVector2D>)                         DistortedUVs                                                OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(float)                                     OverscanFactor                                              OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.DerivedDistortionData
/// Size: 0x0030 (0x000000 - 0x000030)
class FDerivedDistortionData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FDistortionData)                           DistortionData                                              OFFSET(getStruct<T>, {0x0, 24, 0, 0})
	CMember(class UTextureRenderTarget2D*)             UndistortionDisplacementMap                                 OFFSET(get<T>, {0x18, 8, 0, 0})
	CMember(class UTextureRenderTarget2D*)             DistortionDisplacementMap                                   OFFSET(get<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.STMapZoomPoint
/// Size: 0x0050 (0x000000 - 0x000050)
class FSTMapZoomPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     Zoom                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FSTMapInfo)                                STMapInfo                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FDerivedDistortionData)                    DerivedDistortionData                                       OFFSET(getStruct<T>, {0x18, 48, 0, 0})
	DMember(bool)                                      bIsCalibrationPoint                                         OFFSET(get<bool>, {0x48, 1, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.STMapFocusPoint
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FSTMapFocusPoint : public FBaseFocusPoint
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(float)                                     Focus                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FRichCurve)                                MapBlendingCurve                                            OFFSET(getStruct<T>, {0x10, 128, 0, 0})
	CMember(TArray<FSTMapZoomPoint>)                   ZoomPoints                                                  OFFSET(get<T>, {0x90, 16, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.STMapTable
/// Size: 0x0010 (0x000010 - 0x000020)
class FSTMapTable : public FBaseLensTable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FSTMapFocusPoint>)                  FocusPoints                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Class /Script/CameraCalibrationCore.LensFile
/// Size: 0x0280 (0x000028 - 0x0002A8)
class ULensFile : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 680;

public:
	SMember(FLensInfo)                                 LensInfo                                                    OFFSET(getStruct<T>, {0x30, 56, 0, 0})
	CMember(ELensDataMode)                             DataMode                                                    OFFSET(get<T>, {0x68, 1, 0, 0})
	CMember(TMap<FString, FString>)                    UserMetadata                                                OFFSET(get<T>, {0x70, 80, 0, 0})
	SMember(FEncodersTable)                            EncodersTable                                               OFFSET(getStruct<T>, {0xC0, 256, 0, 0})
	SMember(FDistortionTable)                          DistortionTable                                             OFFSET(getStruct<T>, {0x1C0, 32, 0, 0})
	SMember(FFocalLengthTable)                         FocalLengthTable                                            OFFSET(getStruct<T>, {0x1E0, 32, 0, 0})
	SMember(FImageCenterTable)                         ImageCenterTable                                            OFFSET(getStruct<T>, {0x200, 32, 0, 0})
	SMember(FNodalOffsetTable)                         NodalOffsetTable                                            OFFSET(getStruct<T>, {0x220, 32, 0, 0})
	SMember(FSTMapTable)                               STMapTable                                                  OFFSET(getStruct<T>, {0x240, 32, 0, 0})
	CMember(TArray<class UTextureRenderTarget2D*>)     UndistortionDisplacementMapHolders                          OFFSET(get<T>, {0x270, 16, 0, 0})
	CMember(TArray<class UTextureRenderTarget2D*>)     DistortionDisplacementMapHolders                            OFFSET(get<T>, {0x280, 16, 0, 0})


	/// Functions
	// Function /Script/CameraCalibrationCore.LensFile.RemoveZoomPoint
	// void RemoveZoomPoint(ELensDataCategory InDataCategory, float InFocus, float InZoom);                                     // [0x13f91f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensFile.RemoveFocusPoint
	// void RemoveFocusPoint(ELensDataCategory InDataCategory, float InFocus);                                                  // [0x13f9410] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensFile.HasSamples
	// bool HasSamples(ELensDataCategory InDataCategory);                                                                       // [0x13f8f00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.HasIrisEncoderMapping
	// bool HasIrisEncoderMapping();                                                                                            // [0x13fba30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.HasFocusEncoderMapping
	// bool HasFocusEncoderMapping();                                                                                           // [0x13fbb60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.GetTotalPointNum
	// int32_t GetTotalPointNum(ELensDataCategory InDataCategory);                                                              // [0x13f8e10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.GetSTMapPoints
	// TArray<FSTMapPointInfo> GetSTMapPoints();                                                                                // [0x13fb410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.GetSTMapPoint
	// bool GetSTMapPoint(float InFocus, float InZoom, FSTMapInfo& OutSTMapInfo);                                               // [0x13fa3a0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.GetNodalOffsetPoints
	// TArray<FNodalOffsetPointInfo> GetNodalOffsetPoints();                                                                    // [0x13faf40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.GetNodalOffsetPoint
	// bool GetNodalOffsetPoint(float InFocus, float InZoom, FNodalPointOffset& OutNodalPointOffset);                           // [0x13fa5d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.GetImageCenterPoints
	// TArray<FImageCenterPointInfo> GetImageCenterPoints();                                                                    // [0x13fb210] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.GetImageCenterPoint
	// bool GetImageCenterPoint(float InFocus, float InZoom, FImageCenterInfo& OutImageCenterInfo);                             // [0x13fa840] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.GetFocalLengthPoints
	// TArray<FFocalLengthPointInfo> GetFocalLengthPoints();                                                                    // [0x13fb490] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.GetFocalLengthPoint
	// bool GetFocalLengthPoint(float InFocus, float InZoom, FFocalLengthInfo& OutFocalLengthInfo);                             // [0x13faa80] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.GetDistortionPoints
	// TArray<FDistortionPointInfo> GetDistortionPoints();                                                                      // [0x13fb690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.GetDistortionPoint
	// bool GetDistortionPoint(float InFocus, float InZoom, FDistortionInfo& OutDistortionInfo);                                // [0x13facd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.EvaluateNormalizedIris
	// float EvaluateNormalizedIris(float InNormalizedValue);                                                                   // [0x13fb930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.EvaluateNormalizedFocus
	// float EvaluateNormalizedFocus(float InNormalizedValue);                                                                  // [0x13fba60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.EvaluateNodalPointOffset
	// bool EvaluateNodalPointOffset(float InFocus, float InZoom, FNodalPointOffset& OutEvaluatedValue);                        // [0x13fbb90] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.EvaluateImageCenterParameters
	// bool EvaluateImageCenterParameters(float InFocus, float InZoom, FImageCenterInfo& OutEvaluatedValue);                    // [0x13fc160] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.EvaluateFocalLength
	// bool EvaluateFocalLength(float InFocus, float InZoom, FFocalLengthInfo& OutEvaluatedValue);                              // [0x13fc390] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.EvaluateDistortionParameters
	// bool EvaluateDistortionParameters(float InFocus, float InZoom, FDistortionInfo& OutEvaluatedValue);                      // [0x13fc5d0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.EvaluateDistortionData
	// bool EvaluateDistortionData(float InFocus, float InZoom, FVector2D InFilmback, class ULensDistortionModelHandlerBase* InLensHandler); // [0x13fbdf0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CameraCalibrationCore.LensFile.ClearData
	// void ClearData(ELensDataCategory InDataCategory);                                                                        // [0x13f9000] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensFile.ClearAll
	// void ClearAll();                                                                                                         // [0x13f9170] Final|Native|Public|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensFile.AddSTMapPoint
	// void AddSTMapPoint(float NewFocus, float NewZoom, FSTMapInfo& NewPoint);                                                 // [0x13f9590] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensFile.AddNodalOffsetPoint
	// void AddNodalOffsetPoint(float NewFocus, float NewZoom, FNodalPointOffset& NewPoint);                                    // [0x13f97d0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensFile.AddImageCenterPoint
	// void AddImageCenterPoint(float NewFocus, float NewZoom, FImageCenterInfo& NewPoint);                                     // [0x13f9b10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensFile.AddFocalLengthPoint
	// void AddFocalLengthPoint(float NewFocus, float NewZoom, FFocalLengthInfo& NewFocalLength);                               // [0x13f9e00] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/CameraCalibrationCore.LensFile.AddDistortionPoint
	// void AddDistortionPoint(float NewFocus, float NewZoom, FDistortionInfo& NewPoint, FFocalLengthInfo& NewFocalLength);     // [0x13fa040] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/CameraCalibrationCore.SphericalLensDistortionModelHandler
/// Size: 0x0018 (0x0000B8 - 0x0000D0)
class USphericalLensDistortionModelHandler : public ULensDistortionModelHandlerBase
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Class /Script/CameraCalibrationCore.SphericalLensModel
/// Size: 0x0000 (0x000028 - 0x000028)
class USphericalLensModel : public ULensModel
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/CameraCalibrationCore.AnamorphicDistortionParameters
/// Size: 0x0038 (0x000000 - 0x000038)
class FAnamorphicDistortionParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     PixelAspect                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     CX02                                                        OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     CX04                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CX22                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     CX24                                                        OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     CX44                                                        OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     CY02                                                        OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     CY04                                                        OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     CY22                                                        OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     CY24                                                        OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     CY44                                                        OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     SqueezeX                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     SqueezeY                                                    OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     LensRotation                                                OFFSET(get<float>, {0x34, 4, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.LensDataCategoryEditorColor
/// Size: 0x001C (0x000000 - 0x00001C)
class FLensDataCategoryEditorColor : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FColor)                                    Focus                                                       OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	SMember(FColor)                                    Iris                                                        OFFSET(getStruct<T>, {0x4, 4, 0, 0})
	SMember(FColor)                                    Zoom                                                        OFFSET(getStruct<T>, {0x8, 4, 0, 0})
	SMember(FColor)                                    Distortion                                                  OFFSET(getStruct<T>, {0xC, 4, 0, 0})
	SMember(FColor)                                    ImageCenter                                                 OFFSET(getStruct<T>, {0x10, 4, 0, 0})
	SMember(FColor)                                    STMap                                                       OFFSET(getStruct<T>, {0x14, 4, 0, 0})
	SMember(FColor)                                    NodalOffset                                                 OFFSET(getStruct<T>, {0x18, 4, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.DistortionHandlerPicker
/// Size: 0x0028 (0x000000 - 0x000028)
class FDistortionHandlerPicker : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UCineCameraComponent*)               TargetCameraComponent                                       OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FGuid)                                     DistortionProducerID                                        OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FString)                                   HandlerDisplayName                                          OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.CameraFeedInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FCameraFeedInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FIntPoint)                                 Dimensions                                                  OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     AspectRatio                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.SimulcamInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FSimulcamInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FIntPoint)                                 MediaResolution                                             OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     MediaPlateAspectRatio                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     CGLayerAspectRatio                                          OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.NodalPointOffset
/// Size: 0x0020 (0x000000 - 0x000020)
class FNodalPointOffset : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   LocationOffset                                              OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FQuat)                                     RotationOffset                                              OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.DataTablePointInfoBase
/// Size: 0x0008 (0x000000 - 0x000008)
class FDataTablePointInfoBase : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Focus                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Zoom                                                        OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.DistortionPointInfo
/// Size: 0x0010 (0x000008 - 0x000018)
class FDistortionPointInfo : public FDataTablePointInfoBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FDistortionInfo)                           DistortionInfo                                              OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.FocalLengthPointInfo
/// Size: 0x0008 (0x000008 - 0x000010)
class FFocalLengthPointInfo : public FDataTablePointInfoBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FFocalLengthInfo)                          FocalLengthInfo                                             OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.STMapPointInfo
/// Size: 0x0010 (0x000008 - 0x000018)
class FSTMapPointInfo : public FDataTablePointInfoBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FSTMapInfo)                                STMapInfo                                                   OFFSET(getStruct<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.ImageCenterPointInfo
/// Size: 0x0008 (0x000008 - 0x000010)
class FImageCenterPointInfo : public FDataTablePointInfoBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FImageCenterInfo)                          ImageCenterInfo                                             OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.NodalOffsetPointInfo
/// Size: 0x0028 (0x000008 - 0x000030)
class FNodalOffsetPointInfo : public FDataTablePointInfoBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FNodalPointOffset)                         NodalPointOffset                                            OFFSET(getStruct<T>, {0x10, 32, 0, 0})
};

/// Struct /Script/CameraCalibrationCore.SphericalDistortionParameters
/// Size: 0x0014 (0x000000 - 0x000014)
class FSphericalDistortionParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	DMember(float)                                     K1                                                          OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     K2                                                          OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     K3                                                          OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     P1                                                          OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     P2                                                          OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Enum /Script/CameraCalibrationCore.ECalibratedMapPixelOrigin
/// Size: 0x02
enum class ECalibratedMapPixelOrigin : uint8_t
{
	ECalibratedMapPixelOrigin__TopLeft                                               = 0,
	ECalibratedMapPixelOrigin__BottomLeft                                            = 1
};

/// Enum /Script/CameraCalibrationCore.ECalibratedMapChannels
/// Size: 0x03
enum class ECalibratedMapChannels : uint8_t
{
	ECalibratedMapChannels__RG                                                       = 0,
	ECalibratedMapChannels__BA                                                       = 1,
	ECalibratedMapChannels__None                                                     = 2
};

/// Enum /Script/CameraCalibrationCore.ECalibrationPointVisualization
/// Size: 0x02
enum class ECalibrationPointVisualization : uint8_t
{
	CalibrationPointVisualizationCube                                                = 0,
	CalibrationPointVisualizationPyramid                                             = 1
};

/// Enum /Script/CameraCalibrationCore.ELensDisplayUnit
/// Size: 0x03
enum class ELensDisplayUnit : uint8_t
{
	ELensDisplayUnit__Millimeters                                                    = 0,
	ELensDisplayUnit__Pixels                                                         = 1,
	ELensDisplayUnit__Normalized                                                     = 2
};

/// Enum /Script/CameraCalibrationCore.EFIZEvaluationMode
/// Size: 0x04
enum class EFIZEvaluationMode : uint8_t
{
	EFIZEvaluationMode__UseLiveLink                                                  = 0,
	EFIZEvaluationMode__UseCameraSettings                                            = 1,
	EFIZEvaluationMode__UseRecordedValues                                            = 2,
	EFIZEvaluationMode__DoNotEvaluate                                                = 3
};

/// Enum /Script/CameraCalibrationCore.EFilmbackOverrideSource
/// Size: 0x03
enum class EFilmbackOverrideSource : uint8_t
{
	EFilmbackOverrideSource__LensFile                                                = 0,
	EFilmbackOverrideSource__CroppedFilmbackSetting                                  = 1,
	EFilmbackOverrideSource__DoNotOverride                                           = 2
};

/// Enum /Script/CameraCalibrationCore.EDistortionSource
/// Size: 0x03
enum class EDistortionSource : uint8_t
{
	EDistortionSource__LensFile                                                      = 0,
	EDistortionSource__LiveLinkLensSubject                                           = 1,
	EDistortionSource__Manual                                                        = 2
};

/// Enum /Script/CameraCalibrationCore.ELensDataMode
/// Size: 0x02
enum class ELensDataMode : uint8_t
{
	ELensDataMode__Parameters                                                        = 0,
	ELensDataMode__STMap                                                             = 1
};

/// Enum /Script/CameraCalibrationCore.ELensDataCategory
/// Size: 0x07
enum class ELensDataCategory : uint8_t
{
	ELensDataCategory__Focus                                                         = 0,
	ELensDataCategory__Iris                                                          = 1,
	ELensDataCategory__Zoom                                                          = 2,
	ELensDataCategory__Distortion                                                    = 3,
	ELensDataCategory__ImageCenter                                                   = 4,
	ELensDataCategory__STMap                                                         = 5,
	ELensDataCategory__NodalOffset                                                   = 6
};

