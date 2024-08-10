
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AugmentedReality
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: ProceduralMeshComponent

/// Struct /Script/AppleARKitFaceSupport.NetQuantizeFaceCurve
/// Size: 0x0002 (0x000000 - 0x000002)
class FNetQuantizeFaceCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
};

/// Class /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent
/// Size: 0x00C8 (0x000518 - 0x0005E0)
class UAppleARKitFaceMeshComponent : public UProceduralMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	DMember(bool)                                      bWantsMeshUpdates                                           OFFSET(get<bool>, {0x518, 1, 0, 0})
	DMember(bool)                                      bWantsCollision                                             OFFSET(get<bool>, {0x519, 1, 0, 0})
	DMember(bool)                                      bAutoBindToLocalFaceMesh                                    OFFSET(get<bool>, {0x51A, 1, 0, 0})
	CMember(EARFaceComponentTransformMixing)           TransformSetting                                            OFFSET(get<T>, {0x51B, 1, 0, 0})
	DMember(bool)                                      bFlipTrackedRotation                                        OFFSET(get<bool>, {0x51C, 1, 0, 0})
	CMember(class UMaterialInterface*)                 FaceMaterial                                                OFFSET(get<T>, {0x520, 8, 0, 0})
	SMember(FName)                                     LiveLinkSubjectName                                         OFFSET(getStruct<T>, {0x528, 8, 0, 0})
	CMember(TArray<FNetQuantizeFaceCurve>)             RemoteCurves                                                OFFSET(get<T>, {0x530, 16, 0, 0})


	/// Functions
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.UpdateMeshFromBlendShapes
	// void UpdateMeshFromBlendShapes();                                                                                        // [0x181e150] Final|Native|Public|BlueprintCallable 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.UpdateMesh
	// void UpdateMesh(TArray<FVector>& Vertices);                                                                              // [0x181e050] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetBlendShapes
	// void SetBlendShapes(TMap<EARFaceBlendShape, float>& InBlendShapes);                                                      // [0x181e580] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetBlendShapeAmount
	// void SetBlendShapeAmount(EARFaceBlendShape BlendShape, float Amount);                                                    // [0x181e310] Final|Native|Public|BlueprintCallable 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.SetAutoBind
	// void SetAutoBind(bool bAutoBind);                                                                                        // [0x181df50] Final|Native|Public|BlueprintCallable 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.ServerUpdateFaceCurves
	// void ServerUpdateFaceCurves(TArray<FNetQuantizeFaceCurve> ClientCurves);                                                 // [0x181dc20] Final|Net|NetReliableNative|Event|Private|NetServer|NetValidate 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.PublishViaLiveLink
	// void PublishViaLiveLink(FName SubjectName);                                                                              // [0x181dda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.OnRep_RemoteCurves
	// void OnRep_RemoteCurves();                                                                                               // [0x181dd40] Final|Native|Private 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetTransform
	// FTransform GetTransform();                                                                                               // [0x181dd60] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetLastUpdateTimestamp
	// float GetLastUpdateTimestamp();                                                                                          // [0x181df00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetLastUpdateFrameNumber
	// int32_t GetLastUpdateFrameNumber();                                                                                      // [0x181df30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.GetFaceBlendShapeAmount
	// float GetFaceBlendShapeAmount(EARFaceBlendShape BlendShape);                                                             // [0x181e190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/AppleARKitFaceSupport.AppleARKitFaceMeshComponent.CreateMesh
	// void CreateMesh(TArray<FVector>& Vertices, TArray<int32_t>& Triangles, TArray<FVector2D>& UV0);                          // [0x181e760] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Enum /Script/AppleARKitFaceSupport.EARFaceComponentTransformMixing
/// Size: 0x04
enum class EARFaceComponentTransformMixing : uint8_t
{
	EARFaceComponentTransformMixing__ComponentOnly                                   = 0,
	EARFaceComponentTransformMixing__ComponentLocationTrackedRotation                = 1,
	EARFaceComponentTransformMixing__ComponentWithTracked                            = 2,
	EARFaceComponentTransformMixing__TrackingOnly                                    = 3
};

