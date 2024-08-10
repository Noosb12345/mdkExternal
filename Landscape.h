
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: PhysicsCore

/// Class /Script/Landscape.ControlPointMeshComponent
/// Size: 0x0010 (0x000530 - 0x000540)
class UControlPointMeshComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	DMember(float)                                     VirtualTextureMainPassMaxDrawDistance                       OFFSET(get<float>, {0x530, 4, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class ULandscapeSplineInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/Landscape.LandscapePerLODMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapePerLODMaterialOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   LODIndex                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Class /Script/Landscape.LandscapeProxy
/// Size: 0x0320 (0x000248 - 0x000568)
class ALandscapeProxy : public APartitionActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1384;

public:
	CMember(class ULandscapeSplinesComponent*)         SplineComponent                                             OFFSET(get<T>, {0x250, 8, 0, 0})
	SMember(FGuid)                                     LandscapeGuid                                               OFFSET(getStruct<T>, {0x258, 16, 0, 0})
	CMember(TArray<FLandscapePerLODMaterialOverride>)  PerLODOverrideMaterials                                     OFFSET(get<T>, {0x268, 16, 0, 0})
	SMember(FIntPoint)                                 LandscapeSectionOffset                                      OFFSET(getStruct<T>, {0x278, 8, 0, 0})
	DMember(int32_t)                                   MaxLODLevel                                                 OFFSET(get<int32_t>, {0x280, 4, 0, 0})
	DMember(float)                                     ComponentScreenSizeToUseSubSections                         OFFSET(get<float>, {0x284, 4, 0, 0})
	DMember(float)                                     LOD0ScreenSize                                              OFFSET(get<float>, {0x288, 4, 0, 0})
	DMember(float)                                     LOD0DistributionSetting                                     OFFSET(get<float>, {0x28C, 4, 0, 0})
	DMember(float)                                     LODDistributionSetting                                      OFFSET(get<float>, {0x290, 4, 0, 0})
	DMember(float)                                     LODBlendRange                                               OFFSET(get<float>, {0x294, 4, 0, 0})
	DMember(int32_t)                                   StaticLightingLOD                                           OFFSET(get<int32_t>, {0x298, 4, 0, 0})
	CMember(class UPhysicalMaterial*)                  DefaultPhysMaterial                                         OFFSET(get<T>, {0x2A0, 8, 0, 0})
	DMember(float)                                     StreamingDistanceMultiplier                                 OFFSET(get<float>, {0x2A8, 4, 0, 0})
	CMember(class UMaterialInterface*)                 LandscapeMaterial                                           OFFSET(get<T>, {0x2B0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 LandscapeHoleMaterial                                       OFFSET(get<T>, {0x2D8, 8, 0, 0})
	CMember(TArray<class URuntimeVirtualTexture*>)     RuntimeVirtualTextures                                      OFFSET(get<T>, {0x2E0, 16, 0, 0})
	DMember(bool)                                      bSetCreateRuntimeVirtualTextureVolumes                      OFFSET(get<bool>, {0x2F0, 1, 0, 0})
	DMember(bool)                                      bVirtualTextureRenderWithQuad                               OFFSET(get<bool>, {0x2F1, 1, 0, 0})
	DMember(bool)                                      bVirtualTextureRenderWithQuadHQ                             OFFSET(get<bool>, {0x2F2, 1, 0, 0})
	DMember(int32_t)                                   VirtualTextureNumLods                                       OFFSET(get<int32_t>, {0x2F4, 4, 0, 0})
	DMember(int32_t)                                   VirtualTextureLodBias                                       OFFSET(get<int32_t>, {0x2F8, 4, 0, 0})
	CMember(ERuntimeVirtualTextureMainPassType)        VirtualTextureRenderPassType                                OFFSET(get<T>, {0x2FC, 1, 0, 0})
	DMember(float)                                     NegativeZBoundsExtension                                    OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(float)                                     PositiveZBoundsExtension                                    OFFSET(get<float>, {0x304, 4, 0, 0})
	CMember(TArray<class ULandscapeComponent*>)        LandscapeComponents                                         OFFSET(get<T>, {0x308, 16, 0, 0})
	CMember(TArray<class ULandscapeHeightfieldCollisionComponent*>) CollisionComponents                            OFFSET(get<T>, {0x318, 16, 0, 0})
	CMember(TArray<class UHierarchicalInstancedStaticMeshComponent*>) FoliageComponents                            OFFSET(get<T>, {0x328, 16, 0, 0})
	CMember(class ULandscapeNaniteComponent*)          NaniteComponent                                             OFFSET(get<T>, {0x338, 8, 0, 0})
	DMember(bool)                                      bHasLandscapeGrass                                          OFFSET(get<bool>, {0x3A4, 1, 0, 0})
	DMember(float)                                     StaticLightingResolution                                    OFFSET(get<float>, {0x3A8, 4, 0, 0})
	DMember(bool)                                      CastShadow                                                  OFFSET(get<bool>, {0x3AC, 1, 1, 0})
	DMember(bool)                                      bCastDynamicShadow                                          OFFSET(get<bool>, {0x3AC, 1, 1, 1})
	DMember(bool)                                      bCastStaticShadow                                           OFFSET(get<bool>, {0x3AC, 1, 1, 2})
	CMember(EShadowCacheInvalidationBehavior)          ShadowCacheInvalidationBehavior                             OFFSET(get<T>, {0x3AD, 1, 0, 0})
	DMember(bool)                                      bCastContactShadow                                          OFFSET(get<bool>, {0x3AE, 1, 1, 0})
	DMember(bool)                                      bCastFarShadow                                              OFFSET(get<bool>, {0x3B0, 1, 1, 0})
	DMember(bool)                                      bCastHiddenShadow                                           OFFSET(get<bool>, {0x3B4, 1, 1, 0})
	DMember(bool)                                      bCastShadowAsTwoSided                                       OFFSET(get<bool>, {0x3B8, 1, 1, 0})
	DMember(bool)                                      bAffectDistanceFieldLighting                                OFFSET(get<bool>, {0x3BC, 1, 1, 0})
	SMember(FLightingChannels)                         LightingChannels                                            OFFSET(getStruct<T>, {0x3BD, 1, 0, 0})
	DMember(bool)                                      bUseMaterialPositionOffsetInStaticLighting                  OFFSET(get<bool>, {0x3C0, 1, 1, 0})
	DMember(bool)                                      bRenderCustomDepth                                          OFFSET(get<bool>, {0x3C0, 1, 1, 1})
	CMember(ERendererStencilMask)                      CustomDepthStencilWriteMask                                 OFFSET(get<T>, {0x3C4, 1, 0, 0})
	DMember(int32_t)                                   CustomDepthStencilValue                                     OFFSET(get<int32_t>, {0x3C8, 4, 0, 0})
	DMember(float)                                     LDMaxDrawDistance                                           OFFSET(get<float>, {0x3CC, 4, 0, 0})
	SMember(FLightmassPrimitiveSettings)               LightmassSettings                                           OFFSET(getStruct<T>, {0x3D0, 24, 0, 0})
	DMember(int32_t)                                   CollisionMipLevel                                           OFFSET(get<int32_t>, {0x3E8, 4, 0, 0})
	DMember(int32_t)                                   SimpleCollisionMipLevel                                     OFFSET(get<int32_t>, {0x3EC, 4, 0, 0})
	SMember(FBodyInstance)                             BodyInstance                                                OFFSET(getStruct<T>, {0x3F8, 344, 0, 0})
	DMember(bool)                                      bGenerateOverlapEvents                                      OFFSET(get<bool>, {0x550, 1, 1, 0})
	DMember(bool)                                      bBakeMaterialPositionOffsetIntoCollision                    OFFSET(get<bool>, {0x550, 1, 1, 1})
	DMember(int32_t)                                   ComponentSizeQuads                                          OFFSET(get<int32_t>, {0x554, 4, 0, 0})
	DMember(int32_t)                                   SubsectionSizeQuads                                         OFFSET(get<int32_t>, {0x558, 4, 0, 0})
	DMember(int32_t)                                   NumSubsections                                              OFFSET(get<int32_t>, {0x55C, 4, 0, 0})
	DMember(bool)                                      bUsedForNavigation                                          OFFSET(get<bool>, {0x560, 1, 1, 0})
	DMember(bool)                                      bFillCollisionUnderLandscapeForNavmesh                      OFFSET(get<bool>, {0x560, 1, 1, 1})
	DMember(bool)                                      bUseDynamicMaterialInstance                                 OFFSET(get<bool>, {0x564, 1, 0, 0})
	CMember(ENavDataGatheringMode)                     NavigationGeometryGatheringMode                             OFFSET(get<T>, {0x565, 1, 0, 0})
	DMember(bool)                                      bUseLandscapeForCullingInvisibleHLODVertices                OFFSET(get<bool>, {0x566, 1, 0, 0})
	DMember(bool)                                      bHasLayersContent                                           OFFSET(get<bool>, {0x567, 1, 0, 0})


	/// Functions
	// Function /Script/Landscape.LandscapeProxy.SetVirtualTextureRenderPassType
	// void SetVirtualTextureRenderPassType(ERuntimeVirtualTextureMainPassType InType);                                         // [0x4eac1d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue
	// void SetLandscapeMaterialVectorParameterValue(FName ParameterName, FLinearColor Value);                                  // [0x4eab430] Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue
	// void SetLandscapeMaterialTextureParameterValue(FName ParameterName, class UTexture* Value);                              // [0x4eab640] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue
	// void SetLandscapeMaterialScalarParameterValue(FName ParameterName, float Value);                                         // [0x4eab1e0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.LandscapeExportHeightmapToRenderTarget
	// bool LandscapeExportHeightmapToRenderTarget(class UTextureRenderTarget2D* InRenderTarget, bool InExportHeightIntoRGChannel, bool InExportLandscapeProxies); // [0x4eaafb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.GetLandscapeActor
	// class ALandscape* GetLandscapeActor();                                                                                   // [0x4eab1b0] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorSetLandscapeMaterial
	// void EditorSetLandscapeMaterial(class UMaterialInterface* NewLandscapeMaterial);                                         // [0x13ba340] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.EditorApplySpline
	// void EditorApplySpline(class USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, class ULandscapeLayerInfoObject* PaintLayer, FName EditLayerName); // [0x4eab930] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeLODDistanceFactor
	// void ChangeLODDistanceFactor(float InLODDistanceFactor);                                                                 // [0x4eac0e0] Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections
	// void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections);                             // [0x4eabff0] Native|Public|BlueprintCallable 
};

/// Class /Script/Landscape.Landscape
/// Size: 0x0000 (0x000568 - 0x000568)
class ALandscape : public ALandscapeProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1384;

public:


	/// Functions
	// Function /Script/Landscape.Landscape.RenderHeightmap
	// void RenderHeightmap(FTransform& InWorldTransform, FBox2D& InExtents, class UTextureRenderTarget2D* OutRenderTarget);    // [0x4e75d40] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Landscape.LandscapeLODStreamingProxy_DEPRECATED
/// Size: 0x0000 (0x0000C8 - 0x0000C8)
class ULandscapeLODStreamingProxy_DEPRECATED : public UStreamableRenderAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
};

/// Struct /Script/Landscape.WeightmapLayerAllocationInfo
/// Size: 0x0010 (0x000000 - 0x000010)
class FWeightmapLayerAllocationInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class ULandscapeLayerInfoObject*)          LayerInfo                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(char)                                      WeightmapTextureIndex                                       OFFSET(get<char>, {0x8, 1, 0, 0})
	DMember(char)                                      WeightmapTextureChannel                                     OFFSET(get<char>, {0x9, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeComponent
/// Size: 0x01B8 (0x000478 - 0x000630)
class ULandscapeComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1584;

public:
	DMember(int32_t)                                   SectionBaseX                                                OFFSET(get<int32_t>, {0x478, 4, 0, 0})
	DMember(int32_t)                                   SectionBaseY                                                OFFSET(get<int32_t>, {0x47C, 4, 0, 0})
	DMember(int32_t)                                   ComponentSizeQuads                                          OFFSET(get<int32_t>, {0x480, 4, 0, 0})
	DMember(int32_t)                                   SubsectionSizeQuads                                         OFFSET(get<int32_t>, {0x484, 4, 0, 0})
	DMember(int32_t)                                   NumSubsections                                              OFFSET(get<int32_t>, {0x488, 4, 0, 0})
	CMember(class UMaterialInterface*)                 OverrideMaterial                                            OFFSET(get<T>, {0x490, 8, 0, 0})
	CMember(class UMaterialInterface*)                 OverrideHoleMaterial                                        OFFSET(get<T>, {0x498, 8, 0, 0})
	CMember(TArray<class UMaterialInstanceConstant*>)  MaterialInstances                                           OFFSET(get<T>, {0x4A0, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   MaterialInstancesDynamic                                    OFFSET(get<T>, {0x4B0, 16, 0, 0})
	CMember(TArray<int8_t>)                            LODIndexToMaterialIndex                                     OFFSET(get<T>, {0x4C0, 16, 0, 0})
	CMember(class UTexture2D*)                         XYOffsetmapTexture                                          OFFSET(get<T>, {0x4D0, 8, 0, 0})
	SMember(FVector4)                                  WeightmapScaleBias                                          OFFSET(getStruct<T>, {0x4E0, 16, 0, 0})
	DMember(float)                                     WeightmapSubsectionOffset                                   OFFSET(get<float>, {0x4F0, 4, 0, 0})
	SMember(FVector4)                                  HeightmapScaleBias                                          OFFSET(getStruct<T>, {0x500, 16, 0, 0})
	SMember(FBox)                                      CachedLocalBox                                              OFFSET(getStruct<T>, {0x510, 28, 0, 0})
	CMember(class ULandscapeHeightfieldCollisionComponent*) CollisionComponentRef                                  OFFSET(get<T>, {0x530, 8, 0, 0})
	DMember(bool)                                      bUserTriggeredChangeRequested                               OFFSET(get<bool>, {0x538, 1, 0, 0})
	DMember(bool)                                      bNaniteActive                                               OFFSET(get<bool>, {0x539, 1, 0, 0})
	CMember(class UTexture2D*)                         HeightmapTexture                                            OFFSET(get<T>, {0x540, 8, 0, 0})
	CMember(TArray<FWeightmapLayerAllocationInfo>)     WeightmapLayerAllocations                                   OFFSET(get<T>, {0x548, 16, 0, 0})
	CMember(TArray<class UTexture2D*>)                 WeightmapTextures                                           OFFSET(get<T>, {0x558, 16, 0, 0})
	CMember(TArray<FLandscapePerLODMaterialOverride>)  PerLODOverrideMaterials                                     OFFSET(get<T>, {0x568, 16, 0, 0})
	SMember(FGuid)                                     MapBuildDataId                                              OFFSET(getStruct<T>, {0x578, 16, 0, 0})
	DMember(int32_t)                                   CollisionMipLevel                                           OFFSET(get<int32_t>, {0x588, 4, 0, 0})
	DMember(int32_t)                                   SimpleCollisionMipLevel                                     OFFSET(get<int32_t>, {0x58C, 4, 0, 0})
	DMember(float)                                     NegativeZBoundsExtension                                    OFFSET(get<float>, {0x590, 4, 0, 0})
	DMember(float)                                     PositiveZBoundsExtension                                    OFFSET(get<float>, {0x594, 4, 0, 0})
	DMember(float)                                     StaticLightingResolution                                    OFFSET(get<float>, {0x598, 4, 0, 0})
	DMember(int32_t)                                   ForcedLOD                                                   OFFSET(get<int32_t>, {0x59C, 4, 0, 0})
	DMember(int32_t)                                   LODBias                                                     OFFSET(get<int32_t>, {0x5A0, 4, 0, 0})
	SMember(FGuid)                                     StateId                                                     OFFSET(getStruct<T>, {0x5A4, 16, 0, 0})
	SMember(FGuid)                                     BakedTextureMaterialGuid                                    OFFSET(getStruct<T>, {0x5B4, 16, 0, 0})
	SMember(FGuid)                                     LastBakedTextureMaterialGuid                                OFFSET(getStruct<T>, {0x5C4, 16, 0, 0})
	CMember(class UTexture2D*)                         GIBakedBaseColorTexture                                     OFFSET(get<T>, {0x5D8, 8, 0, 0})
	CMember(class UMaterialInterface*)                 MobileMaterialInterface                                     OFFSET(get<T>, {0x5E0, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         MobileMaterialInterfaces                                    OFFSET(get<T>, {0x5E8, 16, 0, 0})
	CMember(TArray<class UTexture2D*>)                 MobileWeightmapTextures                                     OFFSET(get<T>, {0x5F8, 16, 0, 0})


	/// Functions
	// Function /Script/Landscape.LandscapeComponent.SetLODBias
	// void SetLODBias(int32_t InLODBias);                                                                                      // [0x4e76c80] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.SetForcedLOD
	// void SetForcedLOD(int32_t InForcedLOD);                                                                                  // [0x4e76db0] Final|RequiredAPI|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.GetMaterialInstanceDynamic
	// class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex);                                             // [0x4e771c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation
	// float EditorGetPaintLayerWeightByNameAtLocation(FVector& InLocation, FName InPaintLayerName);                            // [0x4e76ee0] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation
	// float EditorGetPaintLayerWeightAtLocation(FVector& InLocation, class ULandscapeLayerInfoObject* PaintLayer);             // [0x4e77050] Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/Landscape.LandscapeGizmoActor
/// Size: 0x0000 (0x000248 - 0x000248)
class ALandscapeGizmoActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:
};

/// Class /Script/Landscape.LandscapeGizmoActiveActor
/// Size: 0x0050 (0x000248 - 0x000298)
class ALandscapeGizmoActiveActor : public ALandscapeGizmoActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 664;

public:
};

/// Class /Script/Landscape.LandscapeGizmoRenderComponent
/// Size: 0x0008 (0x000478 - 0x000480)
class ULandscapeGizmoRenderComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1152;

public:
};

/// Struct /Script/Landscape.GrassVariety
/// Size: 0x01B8 (0x000000 - 0x0001B8)
class FGrassVariety : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 440;

public:
	CMember(class UStaticMesh*)                        GrassMesh                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         OverrideMaterials                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         NaniteOverrideMaterials                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FPerPlatformFloat)                         GrassDensity                                                OFFSET(getStruct<T>, {0x28, 4, 0, 0})
	SMember(FPerQualityLevelFloat)                     GrassDensityQuality                                         OFFSET(getStruct<T>, {0x30, 104, 0, 0})
	DMember(bool)                                      bUseGrid                                                    OFFSET(get<bool>, {0x98, 1, 0, 0})
	DMember(float)                                     PlacementJitter                                             OFFSET(get<float>, {0x9C, 4, 0, 0})
	SMember(FPerPlatformInt)                           StartCullDistance                                           OFFSET(getStruct<T>, {0xA0, 4, 0, 0})
	SMember(FPerQualityLevelInt)                       StartCullDistanceQuality                                    OFFSET(getStruct<T>, {0xA8, 104, 0, 0})
	SMember(FPerPlatformInt)                           EndCullDistance                                             OFFSET(getStruct<T>, {0x110, 4, 0, 0})
	SMember(FPerQualityLevelInt)                       EndCullDistanceQuality                                      OFFSET(getStruct<T>, {0x118, 104, 0, 0})
	DMember(int32_t)                                   MinLOD                                                      OFFSET(get<int32_t>, {0x180, 4, 0, 0})
	CMember(EGrassScaling)                             Scaling                                                     OFFSET(get<T>, {0x184, 1, 0, 0})
	SMember(FFloatInterval)                            ScaleX                                                      OFFSET(getStruct<T>, {0x188, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleY                                                      OFFSET(getStruct<T>, {0x190, 8, 0, 0})
	SMember(FFloatInterval)                            ScaleZ                                                      OFFSET(getStruct<T>, {0x198, 8, 0, 0})
	DMember(bool)                                      RandomRotation                                              OFFSET(get<bool>, {0x1A0, 1, 0, 0})
	DMember(bool)                                      AlignToSurface                                              OFFSET(get<bool>, {0x1A1, 1, 0, 0})
	DMember(bool)                                      bUseLandscapeLightmap                                       OFFSET(get<bool>, {0x1A2, 1, 0, 0})
	SMember(FLightingChannels)                         LightingChannels                                            OFFSET(getStruct<T>, {0x1A3, 1, 0, 0})
	DMember(bool)                                      bReceivesDecals                                             OFFSET(get<bool>, {0x1A4, 1, 0, 0})
	DMember(bool)                                      bAffectDistanceFieldLighting                                OFFSET(get<bool>, {0x1A5, 1, 0, 0})
	DMember(bool)                                      bCastDynamicShadow                                          OFFSET(get<bool>, {0x1A6, 1, 0, 0})
	DMember(bool)                                      bCastContactShadow                                          OFFSET(get<bool>, {0x1A7, 1, 0, 0})
	DMember(bool)                                      bKeepInstanceBufferCPUCopy                                  OFFSET(get<bool>, {0x1A8, 1, 0, 0})
	DMember(uint32_t)                                  InstanceWorldPositionOffsetDisableDistance                  OFFSET(get<uint32_t>, {0x1AC, 4, 0, 0})
	CMember(EShadowCacheInvalidationBehavior)          ShadowCacheInvalidationBehavior                             OFFSET(get<T>, {0x1B0, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeGrassType
/// Size: 0x0038 (0x000028 - 0x000060)
class ULandscapeGrassType : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FGrassVariety>)                     GrassVarieties                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bEnableDensityScaling                                       OFFSET(get<bool>, {0x38, 1, 1, 0})
	CMember(class UStaticMesh*)                        GrassMesh                                                   OFFSET(get<T>, {0x40, 8, 0, 0})
	DMember(float)                                     GrassDensity                                                OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     PlacementJitter                                             OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(int32_t)                                   StartCullDistance                                           OFFSET(get<int32_t>, {0x50, 4, 0, 0})
	DMember(int32_t)                                   EndCullDistance                                             OFFSET(get<int32_t>, {0x54, 4, 0, 0})
	DMember(bool)                                      RandomRotation                                              OFFSET(get<bool>, {0x58, 1, 0, 0})
	DMember(bool)                                      AlignToSurface                                              OFFSET(get<bool>, {0x59, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeHeightfieldCollisionComponent
/// Size: 0x00D8 (0x000478 - 0x000550)
class ULandscapeHeightfieldCollisionComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	CMember(TArray<class ULandscapeLayerInfoObject*>)  ComponentLayerInfos                                         OFFSET(get<T>, {0x478, 16, 0, 0})
	DMember(int32_t)                                   SectionBaseX                                                OFFSET(get<int32_t>, {0x488, 4, 0, 0})
	DMember(int32_t)                                   SectionBaseY                                                OFFSET(get<int32_t>, {0x48C, 4, 0, 0})
	DMember(int32_t)                                   CollisionSizeQuads                                          OFFSET(get<int32_t>, {0x490, 4, 0, 0})
	DMember(float)                                     CollisionScale                                              OFFSET(get<float>, {0x494, 4, 0, 0})
	DMember(int32_t)                                   SimpleCollisionSizeQuads                                    OFFSET(get<int32_t>, {0x498, 4, 0, 0})
	CMember(TArray<char>)                              CollisionQuadFlags                                          OFFSET(get<T>, {0x4A0, 16, 0, 0})
	SMember(FGuid)                                     HeightfieldGuid                                             OFFSET(getStruct<T>, {0x4B0, 16, 0, 0})
	SMember(FBox)                                      CachedLocalBox                                              OFFSET(getStruct<T>, {0x4C0, 28, 0, 0})
	CMember(class ULandscapeComponent*)                RenderComponentRef                                          OFFSET(get<T>, {0x4E0, 8, 0, 0})
	CMember(TArray<class UPhysicalMaterial*>)          CookedPhysicalMaterials                                     OFFSET(get<T>, {0x4F8, 16, 0, 0})


	/// Functions
	// Function /Script/Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent
	// class ULandscapeComponent* GetRenderComponent();                                                                         // [0x2b2c7a0] Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Landscape.LandscapeLayerInfoObject
/// Size: 0x0028 (0x000028 - 0x000050)
class ULandscapeLayerInfoObject : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     LayerName                                                   OFFSET(getStruct<T>, {0x28, 8, 0, 0})
	CMember(class UPhysicalMaterial*)                  PhysMaterial                                                OFFSET(get<T>, {0x30, 8, 0, 0})
	DMember(float)                                     Hardness                                                    OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FLinearColor)                              LayerUsageDebugColor                                        OFFSET(getStruct<T>, {0x3C, 16, 0, 0})
};

/// Struct /Script/Landscape.LandscapeMaterialTextureStreamingInfo
/// Size: 0x000C (0x000000 - 0x00000C)
class FLandscapeMaterialTextureStreamingInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     TextureName                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     TexelFactor                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Class /Script/Landscape.LandscapeMaterialInstanceConstant
/// Size: 0x0018 (0x000240 - 0x000258)
class ULandscapeMaterialInstanceConstant : public UMaterialInstanceConstant
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	CMember(TArray<FLandscapeMaterialTextureStreamingInfo>) TextureStreamingInfo                                   OFFSET(get<T>, {0x240, 16, 0, 0})
	DMember(bool)                                      bIsLayerThumbnail                                           OFFSET(get<bool>, {0x250, 1, 1, 0})
	DMember(bool)                                      bDisableTessellation                                        OFFSET(get<bool>, {0x250, 1, 1, 1})
	DMember(bool)                                      bMobile                                                     OFFSET(get<bool>, {0x250, 1, 1, 2})
	DMember(bool)                                      bEditorToolUsage                                            OFFSET(get<bool>, {0x250, 1, 1, 3})
};

/// Class /Script/Landscape.LandscapeMeshCollisionComponent
/// Size: 0x0018 (0x000548 - 0x000560)
class ULandscapeMeshCollisionComponent : public ULandscapeHeightfieldCollisionComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	SMember(FGuid)                                     MeshGuid                                                    OFFSET(getStruct<T>, {0x548, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeMeshProxyActor
/// Size: 0x0008 (0x000248 - 0x000250)
class ALandscapeMeshProxyActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(class ULandscapeMeshProxyComponent*)       LandscapeMeshProxyComponent                                 OFFSET(get<T>, {0x248, 8, 0, 0})
};

/// Class /Script/Landscape.LandscapeMeshProxyComponent
/// Size: 0x0030 (0x000530 - 0x000560)
class ULandscapeMeshProxyComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	SMember(FGuid)                                     LandscapeGuid                                               OFFSET(getStruct<T>, {0x530, 16, 0, 0})
	CMember(TArray<FIntPoint>)                         ProxyComponentBases                                         OFFSET(get<T>, {0x540, 16, 0, 0})
	DMember(int8_t)                                    ProxyLOD                                                    OFFSET(get<int8_t>, {0x550, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeSettings
/// Size: 0x0078 (0x000038 - 0x0000B0)
class ULandscapeSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	DMember(int32_t)                                   MaxNumberOfLayers                                           OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	CMember(ELandscapeDirtyingMode)                    LandscapeDirtyingMode                                       OFFSET(get<T>, {0x3C, 1, 0, 0})
	DMember(int32_t)                                   SideResolutionLimit                                         OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(TWeakObjectPtr<class UMaterialInterface*>) DefaultLandscapeMaterial                                    OFFSET(get<T>, {0x48, 8, 0, 0})
	CMember(TWeakObjectPtr<class ULandscapeLayerInfoObject*>) DefaultLayerInfoObject                               OFFSET(get<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      bRestrictiveMode                                            OFFSET(get<bool>, {0xA8, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplinesComponent
/// Size: 0x0038 (0x000478 - 0x0004B0)
class ULandscapeSplinesComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1200;

public:
	CMember(TArray<class ULandscapeSplineControlPoint*>) ControlPoints                                             OFFSET(get<T>, {0x478, 16, 0, 0})
	CMember(TArray<class ULandscapeSplineSegment*>)    Segments                                                    OFFSET(get<T>, {0x488, 16, 0, 0})
	CMember(TArray<class UMeshComponent*>)             CookedForeignMeshComponents                                 OFFSET(get<T>, {0x498, 16, 0, 0})


	/// Functions
	// Function /Script/Landscape.LandscapeSplinesComponent.GetSplineMeshComponents
	// TArray<USplineMeshComponent*> GetSplineMeshComponents();                                                                 // [0x4e7ab50] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Landscape.LandscapeSplineConnection
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeSplineConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class ULandscapeSplineSegment*)            Segment                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      End                                                         OFFSET(get<bool>, {0x8, 1, 1, 0})
};

/// Struct /Script/Landscape.LandscapeSplineInterpPoint
/// Size: 0x0070 (0x000000 - 0x000070)
class FLandscapeSplineInterpPoint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FVector)                                   Center                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Left                                                        OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   Right                                                       OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   FalloffLeft                                                 OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	SMember(FVector)                                   FalloffRight                                                OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	SMember(FVector)                                   LayerLeft                                                   OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	SMember(FVector)                                   LayerRight                                                  OFFSET(getStruct<T>, {0x48, 12, 0, 0})
	SMember(FVector)                                   LayerFalloffLeft                                            OFFSET(getStruct<T>, {0x54, 12, 0, 0})
	SMember(FVector)                                   LayerFalloffRight                                           OFFSET(getStruct<T>, {0x60, 12, 0, 0})
	DMember(float)                                     StartEndFalloff                                             OFFSET(get<float>, {0x6C, 4, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineControlPoint
/// Size: 0x0080 (0x000028 - 0x0000A8)
class ULandscapeSplineControlPoint : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	SMember(FRotator)                                  Rotation                                                    OFFSET(getStruct<T>, {0x34, 12, 0, 0})
	DMember(float)                                     Width                                                       OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     LayerWidthRatio                                             OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     SideFalloff                                                 OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     LeftSideFalloffFactor                                       OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     RightSideFalloffFactor                                      OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     LeftSideLayerFalloffFactor                                  OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     RightSideLayerFalloffFactor                                 OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     EndFalloff                                                  OFFSET(get<float>, {0x5C, 4, 0, 0})
	CMember(TArray<FLandscapeSplineConnection>)        ConnectedSegments                                           OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FLandscapeSplineInterpPoint>)       Points                                                      OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x80, 28, 0, 0})
	CMember(class UControlPointMeshComponent*)         LocalMeshComponent                                          OFFSET(get<T>, {0xA0, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapeSplineSegmentConnection
/// Size: 0x0018 (0x000000 - 0x000018)
class FLandscapeSplineSegmentConnection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class ULandscapeSplineControlPoint*)       ControlPoint                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(float)                                     TangentLen                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
	SMember(FName)                                     SocketName                                                  OFFSET(getStruct<T>, {0xC, 8, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineSegment
/// Size: 0x0088 (0x000028 - 0x0000B0)
class ULandscapeSplineSegment : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FLandscapeSplineSegmentConnection)         Connections                                                 OFFSET(getStruct<T>, {0x28, 48, 0, 0})
	SMember(FInterpCurveVector)                        SplineInfo                                                  OFFSET(getStruct<T>, {0x58, 24, 0, 0})
	CMember(TArray<FLandscapeSplineInterpPoint>)       Points                                                      OFFSET(get<T>, {0x70, 16, 0, 0})
	SMember(FBox)                                      Bounds                                                      OFFSET(getStruct<T>, {0x80, 28, 0, 0})
	CMember(TArray<class USplineMeshComponent*>)       LocalMeshComponents                                         OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeStreamingProxy
/// Size: 0x0030 (0x000568 - 0x000598)
class ALandscapeStreamingProxy : public ALandscapeProxy
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1432;

public:
	CMember(TWeakObjectPtr<class ALandscape*>)         LandscapeActorRef                                           OFFSET(get<T>, {0x568, 8, 0, 0})
};

/// Class /Script/Landscape.LandscapeWeightmapUsage
/// Size: 0x0030 (0x000028 - 0x000058)
class ULandscapeWeightmapUsage : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(class ULandscapeComponent*)                ChannelUsage                                                OFFSET(get<T>, {0x28, 32, 0, 0})
	SMember(FGuid)                                     LayerGuid                                                   OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/Landscape.GrassInput
/// Size: 0x0038 (0x000000 - 0x000038)
class FGrassInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(class ULandscapeGrassType*)                GrassType                                                   OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FExpressionInput)                          Input                                                       OFFSET(getStruct<T>, {0x10, 40, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeGrassOutput
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapeGrassOutput : public UMaterialExpressionCustomOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FGrassInput>)                       GrassTypes                                                  OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/Landscape.LayerBlendInput
/// Size: 0x0078 (0x000000 - 0x000078)
class FLayerBlendInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	SMember(FName)                                     LayerName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TEnumAsByte<ELandscapeLayerBlendType>)     BlendType                                                   OFFSET(get<T>, {0x8, 1, 0, 0})
	SMember(FExpressionInput)                          LayerInput                                                  OFFSET(getStruct<T>, {0x10, 40, 0, 0})
	SMember(FExpressionInput)                          HeightInput                                                 OFFSET(getStruct<T>, {0x38, 40, 0, 0})
	DMember(float)                                     PreviewWeight                                               OFFSET(get<float>, {0x60, 4, 0, 0})
	SMember(FVector)                                   ConstLayerInput                                             OFFSET(getStruct<T>, {0x64, 12, 0, 0})
	DMember(float)                                     ConstHeightInput                                            OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerBlend
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapeLayerBlend : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FLayerBlendInput>)                  Layers                                                      OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerCoords
/// Size: 0x0018 (0x0000B0 - 0x0000C8)
class UMaterialExpressionLandscapeLayerCoords : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	CMember(TEnumAsByte<ETerrainCoordMappingType>)     MappingType                                                 OFFSET(get<T>, {0xB0, 1, 0, 0})
	CMember(TEnumAsByte<ELandscapeCustomizedCoordType>) CustomUVType                                               OFFSET(get<T>, {0xB1, 1, 0, 0})
	DMember(float)                                     MappingScale                                                OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     MappingRotation                                             OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(float)                                     MappingPanU                                                 OFFSET(get<float>, {0xBC, 4, 0, 0})
	DMember(float)                                     MappingPanV                                                 OFFSET(get<float>, {0xC0, 4, 0, 0})
};

/// Class /Script/Landscape.ControlPointMeshActor
/// Size: 0x0008 (0x000248 - 0x000250)
class AControlPointMeshActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(class UControlPointMeshComponent*)         ControlPointMeshComponent                                   OFFSET(get<T>, {0x248, 8, 0, 0})
};

/// Class /Script/Landscape.LandscapeBlueprintBrushBase
/// Size: 0x0000 (0x000248 - 0x000248)
class ALandscapeBlueprintBrushBase : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 584;

public:


	/// Functions
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate
	// void RequestLandscapeUpdate(bool bInUserTriggered);                                                                      // [0x2aba700] Final|Native|Public|BlueprintCallable 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Render
	// class UTextureRenderTarget2D* Render(bool InIsHeightmap, class UTextureRenderTarget2D* InCombinedResult, FName& InWeightmapLayerName); // [0x4e856f0] Native|Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.Initialize
	// void Initialize(FTransform& InLandscapeTransform, FIntPoint& InLandscapeSize, FIntPoint& InLandscapeRenderTargetSize);   // [0x4e85480] Native|Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies
	// void GetBlueprintRenderDependencies(TArray<UObject*>& OutStreamableAssets);                                              // [0x3a334c0] Event|Public|HasOutParms|BlueprintEvent 
};

/// Class /Script/Landscape.LandscapeHLODBuilder
/// Size: 0x0000 (0x000028 - 0x000028)
class ULandscapeHLODBuilder : public UHLODBuilder
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/Landscape.LandscapeInfo
/// Size: 0x01F0 (0x000028 - 0x000218)
class ULandscapeInfo : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 536;

public:
	CMember(TWeakObjectPtr<class ALandscape*>)         LandscapeActor                                              OFFSET(get<T>, {0x28, 8, 0, 0})
	SMember(FGuid)                                     LandscapeGuid                                               OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	DMember(int32_t)                                   ComponentSizeQuads                                          OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(int32_t)                                   SubsectionSizeQuads                                         OFFSET(get<int32_t>, {0x44, 4, 0, 0})
	DMember(int32_t)                                   ComponentNumSubsections                                     OFFSET(get<int32_t>, {0x48, 4, 0, 0})
	SMember(FVector)                                   DrawScale                                                   OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	CMember(TArray<TWeakObjectPtr<ALandscapeStreamingProxy*>>) StreamingProxies                                    OFFSET(get<T>, {0x108, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeInfoMap
/// Size: 0x0058 (0x000028 - 0x000080)
class ULandscapeInfoMap : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
};

/// Class /Script/Landscape.LandscapeNaniteComponent
/// Size: 0x0020 (0x000530 - 0x000550)
class ULandscapeNaniteComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1360;

public:
	SMember(FGuid)                                     ProxyContentId                                              OFFSET(getStruct<T>, {0x530, 16, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x540, 1, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineActor
/// Size: 0x0018 (0x000248 - 0x000260)
class ALandscapeSplineActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FGuid)                                     LandscapeGuid                                               OFFSET(getStruct<T>, {0x250, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeSplineMeshesActor
/// Size: 0x0010 (0x000248 - 0x000258)
class ALandscapeSplineMeshesActor : public APartitionActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	CMember(TArray<class UStaticMeshComponent*>)       StaticMeshComponents                                        OFFSET(get<T>, {0x248, 16, 0, 0})
};

/// Class /Script/Landscape.LandscapeSubsystem
/// Size: 0x0020 (0x000040 - 0x000060)
class ULandscapeSubsystem : public UTickableWorldSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSample
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapeLayerSample : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0xB0, 8, 0, 0})
	DMember(float)                                     PreviewWeight                                               OFFSET(get<float>, {0xB8, 4, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerSwitch
/// Size: 0x0060 (0x0000B0 - 0x000110)
class UMaterialExpressionLandscapeLayerSwitch : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FExpressionInput)                          LayerUsed                                                   OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          LayerNotUsed                                                OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	DMember(bool)                                      PreviewUsed                                                 OFFSET(get<bool>, {0x108, 1, 1, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeLayerWeight
/// Size: 0x0068 (0x0000B0 - 0x000118)
class UMaterialExpressionLandscapeLayerWeight : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FExpressionInput)                          Base                                                        OFFSET(getStruct<T>, {0xB0, 40, 0, 0})
	SMember(FExpressionInput)                          Layer                                                       OFFSET(getStruct<T>, {0xD8, 40, 0, 0})
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	DMember(float)                                     PreviewWeight                                               OFFSET(get<float>, {0x108, 4, 0, 0})
	SMember(FVector)                                   ConstBase                                                   OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
};

/// Struct /Script/Landscape.PhysicalMaterialInput
/// Size: 0x0030 (0x000000 - 0x000030)
class FPhysicalMaterialInput : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(class UPhysicalMaterial*)                  PhysicalMaterial                                            OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FExpressionInput)                          Input                                                       OFFSET(getStruct<T>, {0x8, 40, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapePhysicalMaterialOutput
/// Size: 0x0010 (0x0000B0 - 0x0000C0)
class UMaterialExpressionLandscapePhysicalMaterialOutput : public UMaterialExpressionCustomOutput
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FPhysicalMaterialInput>)            Inputs                                                      OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Class /Script/Landscape.MaterialExpressionLandscapeVisibilityMask
/// Size: 0x0000 (0x0000B0 - 0x0000B0)
class UMaterialExpressionLandscapeVisibilityMask : public UMaterialExpression
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/Landscape.LandscapeLayerBrush
/// Size: 0x0001 (0x000000 - 0x000001)
class FLandscapeLayerBrush : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeLayer
/// Size: 0x0088 (0x000000 - 0x000088)
class FLandscapeLayer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FGuid)                                     Guid                                                        OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(bool)                                      bLocked                                                     OFFSET(get<bool>, {0x19, 1, 0, 0})
	DMember(float)                                     HeightmapAlpha                                              OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     WeightmapAlpha                                              OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(TEnumAsByte<ELandscapeBlendMode>)          BlendMode                                                   OFFSET(get<T>, {0x24, 1, 0, 0})
	CMember(TArray<FLandscapeLayerBrush>)              Brushes                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TMap<class ULandscapeLayerInfoObject*, bool>) WeightmapLayerAllocationBlend                            OFFSET(get<T>, {0x38, 80, 0, 0})
};

/// Struct /Script/Landscape.LandscapeEditToolRenderData
/// Size: 0x0038 (0x000000 - 0x000038)
class FLandscapeEditToolRenderData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UMaterialInterface*)                 ToolMaterial                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UMaterialInterface*)                 GizmoMaterial                                               OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   SelectedType                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   DebugChannelR                                               OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   DebugChannelG                                               OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(int32_t)                                   DebugChannelB                                               OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	CMember(class UTexture2D*)                         DataTexture                                                 OFFSET(get<T>, {0x20, 8, 0, 0})
	CMember(class UTexture2D*)                         LayerContributionTexture                                    OFFSET(get<T>, {0x28, 8, 0, 0})
	CMember(class UTexture2D*)                         DirtyTexture                                                OFFSET(get<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapeComponentMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeComponentMaterialOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPerPlatformInt)                           LODIndex                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Landscape.WeightmapData
/// Size: 0x0030 (0x000000 - 0x000030)
class FWeightmapData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<class UTexture2D*>)                 Textures                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FWeightmapLayerAllocationInfo>)     LayerAllocations                                            OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<class ULandscapeWeightmapUsage*>)   TextureUsages                                               OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/Landscape.HeightmapData
/// Size: 0x0008 (0x000000 - 0x000008)
class FHeightmapData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UTexture2D*)                         Texture                                                     OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapeLayerComponentData
/// Size: 0x0038 (0x000000 - 0x000038)
class FLandscapeLayerComponentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FHeightmapData)                            HeightmapData                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FWeightmapData)                            WeightmapData                                               OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/Landscape.GizmoSelectData
/// Size: 0x0050 (0x000000 - 0x000050)
class FGizmoSelectData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
};

/// Struct /Script/Landscape.ForeignControlPointData
/// Size: 0x0001 (0x000000 - 0x000001)
class FForeignControlPointData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.ForeignSplineSegmentData
/// Size: 0x0001 (0x000000 - 0x000001)
class FForeignSplineSegmentData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.ForeignWorldSplineData
/// Size: 0x0001 (0x000000 - 0x000001)
class FForeignWorldSplineData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeSplineMeshEntry
/// Size: 0x0038 (0x000000 - 0x000038)
class FLandscapeSplineMeshEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(class UStaticMesh*)                        Mesh                                                        OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         MaterialOverrides                                           OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bCenterH                                                    OFFSET(get<bool>, {0x18, 1, 1, 0})
	SMember(FVector2D)                                 CenterAdjust                                                OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	DMember(bool)                                      bScaleToWidth                                               OFFSET(get<bool>, {0x24, 1, 1, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	CMember(TEnumAsByte<LandscapeSplineMeshOrientation>) Orientation                                               OFFSET(get<T>, {0x34, 1, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              ForwardAxis                                                 OFFSET(get<T>, {0x35, 1, 0, 0})
	CMember(TEnumAsByte<ESplineMeshAxis>)              UpAxis                                                      OFFSET(get<T>, {0x36, 1, 0, 0})
};

/// Struct /Script/Landscape.LandscapeInfoLayerSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeInfoLayerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(class ULandscapeLayerInfoObject*)          LayerInfoObj                                                OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     LayerName                                                   OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapeEditorLayerSettings
/// Size: 0x0001 (0x000000 - 0x000001)
class FLandscapeEditorLayerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeLayerStruct
/// Size: 0x0008 (0x000000 - 0x000008)
class FLandscapeLayerStruct : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class ULandscapeLayerInfoObject*)          LayerInfoObj                                                OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/Landscape.LandscapeImportLayerInfo
/// Size: 0x0001 (0x000000 - 0x000001)
class FLandscapeImportLayerInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/Landscape.LandscapeProxyMaterialOverride
/// Size: 0x0010 (0x000000 - 0x000010)
class FLandscapeProxyMaterialOverride : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FPerPlatformInt)                           LODIndex                                                    OFFSET(getStruct<T>, {0x0, 4, 0, 0})
	CMember(class UMaterialInterface*)                 Material                                                    OFFSET(get<T>, {0x8, 8, 0, 0})
};

/// Enum /Script/Landscape.ELandscapeSetupErrors
/// Size: 0x04
enum class ELandscapeSetupErrors : uint8_t
{
	LSE_None                                                                         = 0,
	LSE_NoLandscapeInfo                                                              = 1,
	LSE_CollsionXY                                                                   = 2,
	LSE_NoLayerInfo                                                                  = 3
};

/// Enum /Script/Landscape.ERTDrawingType
/// Size: 0x05
enum class ERTDrawingType : uint8_t
{
	ERTDrawingType__RTAtlas                                                          = 0,
	ERTDrawingType__RTAtlasToNonAtlas                                                = 1,
	ERTDrawingType__RTNonAtlasToAtlas                                                = 2,
	ERTDrawingType__RTNonAtlas                                                       = 3,
	ERTDrawingType__RTMips                                                           = 4
};

/// Enum /Script/Landscape.EHeightmapRTType
/// Size: 0x13
enum class EHeightmapRTType : uint8_t
{
	EHeightmapRTType__HeightmapRT_CombinedAtlas                                      = 0,
	EHeightmapRTType__HeightmapRT_CombinedNonAtlas                                   = 1,
	EHeightmapRTType__HeightmapRT_Scratch1                                           = 2,
	EHeightmapRTType__HeightmapRT_Scratch2                                           = 3,
	EHeightmapRTType__HeightmapRT_Scratch3                                           = 4,
	EHeightmapRTType__HeightmapRT_Mip1                                               = 5,
	EHeightmapRTType__HeightmapRT_Mip2                                               = 6,
	EHeightmapRTType__HeightmapRT_Mip3                                               = 7,
	EHeightmapRTType__HeightmapRT_Mip4                                               = 8,
	EHeightmapRTType__HeightmapRT_Mip5                                               = 9,
	EHeightmapRTType__HeightmapRT_Mip6                                               = 10,
	EHeightmapRTType__HeightmapRT_Mip7                                               = 11,
	EHeightmapRTType__HeightmapRT_Count                                              = 12
};

/// Enum /Script/Landscape.EWeightmapRTType
/// Size: 0x13
enum class EWeightmapRTType : uint8_t
{
	EWeightmapRTType__WeightmapRT_Scratch_RGBA                                       = 0,
	EWeightmapRTType__WeightmapRT_Scratch1                                           = 1,
	EWeightmapRTType__WeightmapRT_Scratch2                                           = 2,
	EWeightmapRTType__WeightmapRT_Scratch3                                           = 3,
	EWeightmapRTType__WeightmapRT_Mip0                                               = 4,
	EWeightmapRTType__WeightmapRT_Mip1                                               = 5,
	EWeightmapRTType__WeightmapRT_Mip2                                               = 6,
	EWeightmapRTType__WeightmapRT_Mip3                                               = 7,
	EWeightmapRTType__WeightmapRT_Mip4                                               = 8,
	EWeightmapRTType__WeightmapRT_Mip5                                               = 9,
	EWeightmapRTType__WeightmapRT_Mip6                                               = 10,
	EWeightmapRTType__WeightmapRT_Mip7                                               = 11,
	EWeightmapRTType__WeightmapRT_Count                                              = 12
};

/// Enum /Script/Landscape.ELandscapeBlendMode
/// Size: 0x02
enum class ELandscapeBlendMode : uint8_t
{
	LSBM_AdditiveBlend                                                               = 0,
	LSBM_AlphaBlend                                                                  = 1
};

/// Enum /Script/Landscape.ELandscapeClearMode
/// Size: 0x03
enum class ELandscapeClearMode : uint8_t
{
	Clear_Weightmap                                                                  = 1,
	Clear_Heightmap                                                                  = 2,
	Clear_All                                                                        = 3
};

/// Enum /Script/Landscape.ELandscapeGizmoType
/// Size: 0x03
enum class ELandscapeGizmoType : uint8_t
{
	LGT_None                                                                         = 0,
	LGT_Height                                                                       = 1,
	LGT_Weight                                                                       = 2
};

/// Enum /Script/Landscape.ELandscapeGizmoSnapType
/// Size: 0x03
enum class ELandscapeGizmoSnapType : uint8_t
{
	ELandscapeGizmoSnapType__None                                                    = 0,
	ELandscapeGizmoSnapType__Component                                               = 1,
	ELandscapeGizmoSnapType__Texel                                                   = 2
};

/// Enum /Script/Landscape.EGrassScaling
/// Size: 0x03
enum class EGrassScaling : uint8_t
{
	EGrassScaling__Uniform                                                           = 0,
	EGrassScaling__Free                                                              = 1,
	EGrassScaling__LockXY                                                            = 2
};

/// Enum /Script/Landscape.ESplineModulationColorMask
/// Size: 0x04
enum class ESplineModulationColorMask : uint8_t
{
	ESplineModulationColorMask__Red                                                  = 0,
	ESplineModulationColorMask__Green                                                = 1,
	ESplineModulationColorMask__Blue                                                 = 2,
	ESplineModulationColorMask__Alpha                                                = 3
};

/// Enum /Script/Landscape.ELandscapeDirtyingMode
/// Size: 0x03
enum class ELandscapeDirtyingMode : uint8_t
{
	ELandscapeDirtyingMode__Auto                                                     = 0,
	ELandscapeDirtyingMode__InLandscapeModeOnly                                      = 1,
	ELandscapeDirtyingMode__InLandscapeModeAndUserTriggeredChanges                   = 2
};

/// Enum /Script/Landscape.LandscapeSplineMeshOrientation
/// Size: 0x02
enum class LandscapeSplineMeshOrientation : uint8_t
{
	LSMO_XUp                                                                         = 0,
	LSMO_YUp                                                                         = 1
};

/// Enum /Script/Landscape.ELandscapeLayerBlendType
/// Size: 0x03
enum class ELandscapeLayerBlendType : uint8_t
{
	LB_WeightBlend                                                                   = 0,
	LB_AlphaBlend                                                                    = 1,
	LB_HeightBlend                                                                   = 2
};

/// Enum /Script/Landscape.ETerrainCoordMappingType
/// Size: 0x04
enum class ETerrainCoordMappingType : uint8_t
{
	TCMT_Auto                                                                        = 0,
	TCMT_XY                                                                          = 1,
	TCMT_XZ                                                                          = 2,
	TCMT_YZ                                                                          = 3
};

/// Enum /Script/Landscape.ELandscapeCustomizedCoordType
/// Size: 0x05
enum class ELandscapeCustomizedCoordType : uint8_t
{
	LCCT_None                                                                        = 0,
	LCCT_CustomUV0                                                                   = 1,
	LCCT_CustomUV1                                                                   = 2,
	LCCT_CustomUV2                                                                   = 3,
	LCCT_WeightMapUV                                                                 = 4
};

/// Enum /Script/Landscape.ELandscapeResizeMode
/// Size: 0x03
enum class ELandscapeResizeMode : uint8_t
{
	ELandscapeResizeMode__Resample                                                   = 0,
	ELandscapeResizeMode__Clip                                                       = 1,
	ELandscapeResizeMode__Expand                                                     = 2
};

/// Enum /Script/Landscape.ELandscapeImportAlphamapType
/// Size: 0x02
enum class ELandscapeImportAlphamapType : uint8_t
{
	ELandscapeImportAlphamapType__Additive                                           = 0,
	ELandscapeImportAlphamapType__Layered                                            = 1
};

/// Enum /Script/Landscape.ELandscapeLayerPaintingRestriction
/// Size: 0x04
enum class ELandscapeLayerPaintingRestriction : uint8_t
{
	ELandscapeLayerPaintingRestriction__None                                         = 0,
	ELandscapeLayerPaintingRestriction__UseMaxLayers                                 = 1,
	ELandscapeLayerPaintingRestriction__ExistingOnly                                 = 2,
	ELandscapeLayerPaintingRestriction__UseComponentAllowList                        = 3
};

/// Enum /Script/Landscape.ELandscapeLayerDisplayMode
/// Size: 0x03
enum class ELandscapeLayerDisplayMode : uint8_t
{
	ELandscapeLayerDisplayMode__Default                                              = 0,
	ELandscapeLayerDisplayMode__Alphabetical                                         = 1,
	ELandscapeLayerDisplayMode__UserSpecific                                         = 2
};

/// Enum /Script/Landscape.ELandscapeLODFalloff
/// Size: 0x02
enum class ELandscapeLODFalloff : uint8_t
{
	ELandscapeLODFalloff__Linear                                                     = 0,
	ELandscapeLODFalloff__SquareRoot                                                 = 1
};

