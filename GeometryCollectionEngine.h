
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: Chaos
/// dependency: ChaosSolverEngine
/// dependency: CoreUObject
/// dependency: DataflowEngine
/// dependency: Engine
/// dependency: FieldSystemEngine
/// dependency: PhysicsCore

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosCollisionEventRequestSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxNumberResults                                            OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinImpulse                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EChaosCollisionSortMethod)                 SortMethod                                                  OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosBreakingEventRequestSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxNumberOfResults                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinRadius                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EChaosBreakingSortMethod)                  SortMethod                                                  OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventRequestSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosTrailingEventRequestSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   MaxNumberOfResults                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MinSpeed                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinAngularSpeed                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(EChaosTrailingSortMethod)                  SortMethod                                                  OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventRequestSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FChaosRemovalEventRequestSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MaxNumberOfResults                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(float)                                     MinMass                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxDistance                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EChaosRemovalSortMethod)                   SortMethod                                                  OFFSET(get<T>, {0xC, 1, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.ChaosDestructionListener
/// Size: 0x0280 (0x0001F0 - 0x000470)
class UChaosDestructionListener : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	DMember(bool)                                      bIsCollisionEventListeningEnabled                           OFFSET(get<bool>, {0x1F0, 1, 1, 0})
	DMember(bool)                                      bIsBreakingEventListeningEnabled                            OFFSET(get<bool>, {0x1F0, 1, 1, 1})
	DMember(bool)                                      bIsTrailingEventListeningEnabled                            OFFSET(get<bool>, {0x1F0, 1, 1, 2})
	DMember(bool)                                      bIsRemovalEventListeningEnabled                             OFFSET(get<bool>, {0x1F0, 1, 1, 3})
	SMember(FChaosCollisionEventRequestSettings)       CollisionEventRequestSettings                               OFFSET(getStruct<T>, {0x1F4, 24, 0, 0})
	SMember(FChaosBreakingEventRequestSettings)        BreakingEventRequestSettings                                OFFSET(getStruct<T>, {0x20C, 24, 0, 0})
	SMember(FChaosTrailingEventRequestSettings)        TrailingEventRequestSettings                                OFFSET(getStruct<T>, {0x224, 24, 0, 0})
	SMember(FChaosRemovalEventRequestSettings)         RemovalEventRequestSettings                                 OFFSET(getStruct<T>, {0x23C, 16, 0, 0})
	CMember(TSet<AChaosSolverActor*>)                  ChaosSolverActors                                           OFFSET(get<T>, {0x250, 80, 0, 0})
	CMember(TSet<AGeometryCollectionActor*>)           GeometryCollectionActors                                    OFFSET(get<T>, {0x2A0, 80, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnCollisionEvents                                           OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnBreakingEvents                                            OFFSET(getStruct<T>, {0x300, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnTrailingEvents                                            OFFSET(getStruct<T>, {0x310, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnRemovalEvents                                             OFFSET(getStruct<T>, {0x320, 16, 0, 0})


	/// Functions
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents
	// void SortTrailingEvents(TArray<FChaosTrailingEventData>& TrailingEvents, EChaosTrailingSortMethod SortMethod);           // [0x4ff9450] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortRemovalEvents
	// void SortRemovalEvents(TArray<FChaosRemovalEventData>& RemovalEvents, EChaosRemovalSortMethod SortMethod);               // [0x4ff9280] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents
	// void SortCollisionEvents(TArray<FChaosCollisionEventData>& CollisionEvents, EChaosCollisionSortMethod SortMethod);       // [0x4ff97f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents
	// void SortBreakingEvents(TArray<FChaosBreakingEventData>& BreakingEvents, EChaosBreakingSortMethod SortMethod);           // [0x4ff9620] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings
	// void SetTrailingEventRequestSettings(FChaosTrailingEventRequestSettings& InSettings);                                    // [0x4ff9ef0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled
	// void SetTrailingEventEnabled(bool bIsEnabled);                                                                           // [0x4ff9af0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventRequestSettings
	// void SetRemovalEventRequestSettings(FChaosRemovalEventRequestSettings& InSettings);                                      // [0x4ff9df0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetRemovalEventEnabled
	// void SetRemovalEventEnabled(bool bIsEnabled);                                                                            // [0x4ff99f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings
	// void SetCollisionEventRequestSettings(FChaosCollisionEventRequestSettings& InSettings);                                  // [0x4ffa110] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled
	// void SetCollisionEventEnabled(bool bIsEnabled);                                                                          // [0x4ff9cf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings
	// void SetBreakingEventRequestSettings(FChaosBreakingEventRequestSettings& InSettings);                                    // [0x4ffa000] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled
	// void SetBreakingEventEnabled(bool bIsEnabled);                                                                           // [0x4ff9bf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor
	// void RemoveGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                             // [0x4ffa220] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor
	// void RemoveChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                                  // [0x13ba340] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.IsEventListening
	// bool IsEventListening();                                                                                                 // [0x4ff99c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor
	// void AddGeometryCollectionActor(class AGeometryCollectionActor* GeometryCollectionActor);                                // [0x4ffa3e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor
	// void AddChaosSolverActor(class AChaosSolverActor* ChaosSolverActor);                                                     // [0x13ba340] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionActor
/// Size: 0x0010 (0x000248 - 0x000258)
class AGeometryCollectionActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	CMember(class UGeometryCollectionComponent*)       GeometryCollectionComponent                                 OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class UGeometryCollectionDebugDrawComponent*) GeometryCollectionDebugDrawComponent                     OFFSET(get<T>, {0x250, 8, 0, 0})


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle
	// bool RaycastSingle(FVector Start, FVector End, FHitResult& OutHit);                                                      // [0x4ffd780] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionCache
/// Size: 0x0028 (0x000028 - 0x000050)
class UGeometryCollectionCache : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRecordedTransformTrack)                   RecordedData                                                OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	CMember(class UGeometryCollection*)                SupportedCollection                                         OFFSET(get<T>, {0x38, 8, 0, 0})
	SMember(FGuid)                                     CompatibleCollectionState                                   OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDamagePropagationData
/// Size: 0x000C (0x000000 - 0x00000C)
class FGeometryCollectionDamagePropagationData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     BreakDamagePropagationFactor                                OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ShockDamagePropagationFactor                                OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeomComponentCacheParameters
/// Size: 0x0050 (0x000000 - 0x000050)
class FGeomComponentCacheParameters : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(EGeometryCollectionCacheType)              CacheMode                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(class UGeometryCollectionCache*)           TargetCache                                                 OFFSET(get<T>, {0x8, 8, 0, 0})
	DMember(float)                                     ReverseCacheBeginTime                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      SaveCollisionData                                           OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      DoGenerateCollisionData                                     OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(int32_t)                                   CollisionDataSizeMax                                        OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	DMember(bool)                                      DoCollisionDataSpatialHash                                  OFFSET(get<bool>, {0x1C, 1, 0, 0})
	DMember(float)                                     CollisionDataSpatialHashRadius                              OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   MaxCollisionPerCell                                         OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	DMember(bool)                                      SaveBreakingData                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      DoGenerateBreakingData                                      OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(int32_t)                                   BreakingDataSizeMax                                         OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(bool)                                      DoBreakingDataSpatialHash                                   OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(float)                                     BreakingDataSpatialHashRadius                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   MaxBreakingPerCell                                          OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(bool)                                      SaveTrailingData                                            OFFSET(get<bool>, {0x3C, 1, 0, 0})
	DMember(bool)                                      DoGenerateTrailingData                                      OFFSET(get<bool>, {0x3D, 1, 0, 0})
	DMember(int32_t)                                   TrailingDataSizeMax                                         OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	DMember(float)                                     TrailingMinSpeedThreshold                                   OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     TrailingMinVolumeThreshold                                  OFFSET(get<float>, {0x48, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionRepData
/// Size: 0x0028 (0x000000 - 0x000028)
class FGeometryCollectionRepData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionComponent
/// Size: 0x0520 (0x0004B0 - 0x0009D0)
class UGeometryCollectionComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2512;

public:
	CMember(class AChaosSolverActor*)                  ChaosSolverActor                                            OFFSET(get<T>, {0x4B8, 8, 0, 0})
	CMember(class UGeometryCollection*)                RestCollection                                              OFFSET(get<T>, {0x5A0, 8, 0, 0})
	CMember(TArray<class AFieldSystemActor*>)          InitializationFields                                        OFFSET(get<T>, {0x5A8, 16, 0, 0})
	DMember(bool)                                      Simulating                                                  OFFSET(get<bool>, {0x5B8, 1, 0, 0})
	CMember(EObjectStateTypeEnum)                      ObjectType                                                  OFFSET(get<T>, {0x5BA, 1, 0, 0})
	DMember(bool)                                      bForceMotionBlur                                            OFFSET(get<bool>, {0x5BB, 1, 0, 0})
	DMember(bool)                                      EnableClustering                                            OFFSET(get<bool>, {0x5BC, 1, 0, 0})
	DMember(int32_t)                                   ClusterGroupIndex                                           OFFSET(get<int32_t>, {0x5C0, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevel                                             OFFSET(get<int32_t>, {0x5C4, 4, 0, 0})
	CMember(TArray<float>)                             DamageThreshold                                             OFFSET(get<T>, {0x5C8, 16, 0, 0})
	DMember(bool)                                      bUseSizeSpecificDamageThreshold                             OFFSET(get<bool>, {0x5D8, 1, 0, 0})
	SMember(FGeometryCollectionDamagePropagationData)  DamagePropagationData                                       OFFSET(getStruct<T>, {0x5DC, 12, 0, 0})
	DMember(bool)                                      bEnableDamageFromCollision                                  OFFSET(get<bool>, {0x5E8, 1, 0, 0})
	DMember(bool)                                      bAllowRemovalOnSleep                                        OFFSET(get<bool>, {0x5E9, 1, 0, 0})
	DMember(bool)                                      bAllowRemovalOnBreak                                        OFFSET(get<bool>, {0x5EA, 1, 0, 0})
	CMember(EClusterConnectionTypeEnum)                ClusterConnectionType                                       OFFSET(get<T>, {0x5EB, 1, 0, 0})
	DMember(int32_t)                                   CollisionGroup                                              OFFSET(get<int32_t>, {0x5EC, 4, 0, 0})
	DMember(float)                                     CollisionSampleFraction                                     OFFSET(get<float>, {0x5F0, 4, 0, 0})
	DMember(float)                                     LinearEtherDrag                                             OFFSET(get<float>, {0x5F4, 4, 0, 0})
	DMember(float)                                     AngularEtherDrag                                            OFFSET(get<float>, {0x5F8, 4, 0, 0})
	CMember(class UChaosPhysicalMaterial*)             PhysicalMaterial                                            OFFSET(get<T>, {0x600, 8, 0, 0})
	CMember(EInitialVelocityTypeEnum)                  InitialVelocityType                                         OFFSET(get<T>, {0x608, 1, 0, 0})
	SMember(FVector)                                   InitialLinearVelocity                                       OFFSET(getStruct<T>, {0x60C, 12, 0, 0})
	SMember(FVector)                                   InitialAngularVelocity                                      OFFSET(getStruct<T>, {0x618, 12, 0, 0})
	CMember(class UPhysicalMaterial*)                  PhysicalMaterialOverride                                    OFFSET(get<T>, {0x628, 8, 0, 0})
	SMember(FGeomComponentCacheParameters)             CacheParameters                                             OFFSET(getStruct<T>, {0x630, 80, 0, 0})
	CMember(TArray<FTransform>)                        RestTransforms                                              OFFSET(get<T>, {0x680, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyGeometryCollectionPhysicsStateChange                  OFFSET(getStruct<T>, {0x690, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  NotifyGeometryCollectionPhysicsLoadingStateChange           OFFSET(getStruct<T>, {0x6A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosBreakEvent                                           OFFSET(getStruct<T>, {0x6C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosRemovalEvent                                         OFFSET(getStruct<T>, {0x6D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosCrumblingEvent                                       OFFSET(getStruct<T>, {0x6E8, 16, 0, 0})
	DMember(float)                                     DesiredCacheTime                                            OFFSET(get<float>, {0x6F8, 4, 0, 0})
	DMember(bool)                                      CachePlayback                                               OFFSET(get<bool>, {0x6FC, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnChaosPhysicsCollision                                     OFFSET(getStruct<T>, {0x700, 16, 0, 0})
	DMember(bool)                                      bNotifyBreaks                                               OFFSET(get<bool>, {0x710, 1, 0, 0})
	DMember(bool)                                      bNotifyCollisions                                           OFFSET(get<bool>, {0x711, 1, 0, 0})
	DMember(bool)                                      bNotifyTrailing                                             OFFSET(get<bool>, {0x712, 1, 0, 0})
	DMember(bool)                                      bNotifyRemovals                                             OFFSET(get<bool>, {0x713, 1, 0, 0})
	DMember(bool)                                      bNotifyCrumblings                                           OFFSET(get<bool>, {0x714, 1, 0, 0})
	DMember(bool)                                      bCrumblingEventIncludesChildren                             OFFSET(get<bool>, {0x715, 1, 0, 0})
	DMember(bool)                                      bStoreVelocities                                            OFFSET(get<bool>, {0x716, 1, 0, 0})
	DMember(bool)                                      bShowBoneColors                                             OFFSET(get<bool>, {0x717, 1, 0, 0})
	DMember(bool)                                      bUseRootProxyForNavigation                                  OFFSET(get<bool>, {0x718, 1, 0, 0})
	DMember(bool)                                      bUpdateNavigationInTick                                     OFFSET(get<bool>, {0x719, 1, 0, 0})
	CMember(class AGeometryCollectionISMPoolActor*)    ISMPool                                                     OFFSET(get<T>, {0x720, 8, 0, 0})
	DMember(bool)                                      bEnableReplication                                          OFFSET(get<bool>, {0x730, 1, 0, 0})
	DMember(bool)                                      bEnableAbandonAfterLevel                                    OFFSET(get<bool>, {0x731, 1, 0, 0})
	DMember(int32_t)                                   ReplicationAbandonClusterLevel                              OFFSET(get<int32_t>, {0x734, 4, 0, 0})
	DMember(int32_t)                                   ReplicationAbandonAfterLevel                                OFFSET(get<int32_t>, {0x738, 4, 0, 0})
	SMember(FGeometryCollectionRepData)                RepData                                                     OFFSET(getStruct<T>, {0x740, 40, 0, 0})
	CMember(class UBodySetup*)                         DummyBodySetup                                              OFFSET(get<T>, {0x988, 8, 0, 0})
	CMember(TArray<class UInstancedStaticMeshComponent*>) EmbeddedGeometryComponents                               OFFSET(get<T>, {0x998, 16, 0, 0})


	/// Functions
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetRestCollection
	// void SetRestCollection(class UGeometryCollection* RestCollectionIn);                                                     // [0x5000510] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyRemovals
	// void SetNotifyRemovals(bool bNewNotifyRemovals);                                                                         // [0x4fff530] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyCrumblings
	// void SetNotifyCrumblings(bool bNewNotifyCrumblings, bool bNewCrumblingEventIncludesChildren);                            // [0x4fff230] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks
	// void SetNotifyBreaks(bool bNewNotifyBreaks);                                                                             // [0x4fff750] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetEnableDamageFromCollision
	// void SetEnableDamageFromCollision(bool bValue);                                                                          // [0x5000360] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByTransformedBox
	// void SetAnchoredByTransformedBox(FBox Box, FTransform Transform, bool bAnchored, int32_t MaxLevel);                      // [0x5001490] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByIndex
	// void SetAnchoredByIndex(int32_t Index, bool bAnchored);                                                                  // [0x5001ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.SetAnchoredByBox
	// void SetAnchoredByBox(FBox WorldSpaceBox, bool bAnchored, int32_t MaxLevel);                                             // [0x5001800] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.RemoveAllAnchors
	// void RemoveAllAnchors();                                                                                                 // [0x5001310] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision
	// void ReceivePhysicsCollision(FChaosPhysicsCollisionInfo& CollisionInfo);                                                 // [0x3a334c0] Event|Public|HasOutParms|BlueprintEvent 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x3a334c0] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature
	// void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(class UGeometryCollectionComponent* FracturedComponent); // [0x3a334c0] MulticastDelegate|Public|Delegate 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetRootIndex
	// int32_t GetRootIndex();                                                                                                  // [0x5000a40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetMassAndExtents
	// void GetMassAndExtents(int32_t ItemIndex, float& OutMass, FBox& OutExtents);                                             // [0x5000810] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetLocalBounds
	// FBox GetLocalBounds();                                                                                                   // [0x50028b0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetInitialLevel
	// int32_t GetInitialLevel(int32_t ItemIndex);                                                                              // [0x5000a70] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.GetDebugInfo
	// FString GetDebugInfo();                                                                                                  // [0x5000490] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleCluster
	// void CrumbleCluster(int32_t ItemIndex);                                                                                  // [0x5001f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.CrumbleActiveClusters
	// void CrumbleActiveClusters();                                                                                            // [0x5001d80] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField
	// void ApplyPhysicsField(bool Enabled, EGeometryCollectionPhysicsTypeEnum Target, class UFieldSystemMetaData* MetaData, class UFieldNodeBase* Field); // [0x4fff970] Final|Native|Public|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyLinearVelocity
	// void ApplyLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity);                                                    // [0x5000e50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField
	// void ApplyKinematicField(float Radius, FVector Position);                                                                // [0x5000090] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyInternalStrain
	// void ApplyInternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // [0x5002070] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyExternalStrain
	// void ApplyExternalStrain(int32_t ItemIndex, FVector& Location, float Radius, int32_t PropagationDepth, float PropagationFactor, float Strain); // [0x5002490] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingLinearVelocity
	// void ApplyBreakingLinearVelocity(int32_t ItemIndex, FVector& LinearVelocity);                                            // [0x5001140] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyBreakingAngularVelocity
	// void ApplyBreakingAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity);                                          // [0x5001140] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/GeometryCollectionEngine.GeometryCollectionComponent.ApplyAngularVelocity
	// void ApplyAngularVelocity(int32_t ItemIndex, FVector& AngularVelocity);                                                  // [0x5000b60] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
/// Size: 0x0001 (0x000000 - 0x000001)
class FGeometryCollectionDebugDrawWarningMessage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
/// Size: 0x0018 (0x000000 - 0x000018)
class FGeometryCollectionDebugDrawActorSelectedRigidBody : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	CMember(class AChaosSolverActor*)                  Solver                                                      OFFSET(get<T>, {0x8, 8, 0, 0})
	CMember(class AGeometryCollectionActor*)           GeometryCollection                                          OFFSET(get<T>, {0x10, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawActor
/// Size: 0x00C0 (0x000248 - 0x000308)
class AGeometryCollectionDebugDrawActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 776;

public:
	SMember(FGeometryCollectionDebugDrawWarningMessage) WarningMessage                                             OFFSET(getStruct<T>, {0x248, 1, 0, 0})
	SMember(FGeometryCollectionDebugDrawActorSelectedRigidBody) SelectedRigidBody                                  OFFSET(getStruct<T>, {0x250, 24, 0, 0})
	DMember(bool)                                      bDebugDrawWholeCollection                                   OFFSET(get<bool>, {0x268, 1, 0, 0})
	DMember(bool)                                      bDebugDrawHierarchy                                         OFFSET(get<bool>, {0x269, 1, 0, 0})
	DMember(bool)                                      bDebugDrawClustering                                        OFFSET(get<bool>, {0x26A, 1, 0, 0})
	CMember(EGeometryCollectionDebugDrawActorHideGeometry) HideGeometry                                            OFFSET(get<T>, {0x26B, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyId                                            OFFSET(get<bool>, {0x26C, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyCollision                                     OFFSET(get<bool>, {0x26D, 1, 0, 0})
	DMember(bool)                                      bCollisionAtOrigin                                          OFFSET(get<bool>, {0x26E, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyTransform                                     OFFSET(get<bool>, {0x26F, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyInertia                                       OFFSET(get<bool>, {0x270, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyVelocity                                      OFFSET(get<bool>, {0x271, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyForce                                         OFFSET(get<bool>, {0x272, 1, 0, 0})
	DMember(bool)                                      bShowRigidBodyInfos                                         OFFSET(get<bool>, {0x273, 1, 0, 0})
	DMember(bool)                                      bShowTransformIndex                                         OFFSET(get<bool>, {0x274, 1, 0, 0})
	DMember(bool)                                      bShowTransform                                              OFFSET(get<bool>, {0x275, 1, 0, 0})
	DMember(bool)                                      bShowParent                                                 OFFSET(get<bool>, {0x276, 1, 0, 0})
	DMember(bool)                                      bShowLevel                                                  OFFSET(get<bool>, {0x277, 1, 0, 0})
	DMember(bool)                                      bShowConnectivityEdges                                      OFFSET(get<bool>, {0x278, 1, 0, 0})
	DMember(bool)                                      bShowGeometryIndex                                          OFFSET(get<bool>, {0x279, 1, 0, 0})
	DMember(bool)                                      bShowGeometryTransform                                      OFFSET(get<bool>, {0x27A, 1, 0, 0})
	DMember(bool)                                      bShowBoundingBox                                            OFFSET(get<bool>, {0x27B, 1, 0, 0})
	DMember(bool)                                      bShowFaces                                                  OFFSET(get<bool>, {0x27C, 1, 0, 0})
	DMember(bool)                                      bShowFaceIndices                                            OFFSET(get<bool>, {0x27D, 1, 0, 0})
	DMember(bool)                                      bShowFaceNormals                                            OFFSET(get<bool>, {0x27E, 1, 0, 0})
	DMember(bool)                                      bShowSingleFace                                             OFFSET(get<bool>, {0x27F, 1, 0, 0})
	DMember(int32_t)                                   SingleFaceIndex                                             OFFSET(get<int32_t>, {0x280, 4, 0, 0})
	DMember(bool)                                      bShowVertices                                               OFFSET(get<bool>, {0x284, 1, 0, 0})
	DMember(bool)                                      bShowVertexIndices                                          OFFSET(get<bool>, {0x285, 1, 0, 0})
	DMember(bool)                                      bShowVertexNormals                                          OFFSET(get<bool>, {0x286, 1, 0, 0})
	DMember(bool)                                      bUseActiveVisualization                                     OFFSET(get<bool>, {0x287, 1, 0, 0})
	DMember(float)                                     PointThickness                                              OFFSET(get<float>, {0x288, 4, 0, 0})
	DMember(float)                                     LineThickness                                               OFFSET(get<float>, {0x28C, 4, 0, 0})
	DMember(bool)                                      bTextShadow                                                 OFFSET(get<bool>, {0x290, 1, 0, 0})
	DMember(float)                                     TextScale                                                   OFFSET(get<float>, {0x294, 4, 0, 0})
	DMember(float)                                     NormalScale                                                 OFFSET(get<float>, {0x298, 4, 0, 0})
	DMember(float)                                     AxisScale                                                   OFFSET(get<float>, {0x29C, 4, 0, 0})
	DMember(float)                                     ArrowScale                                                  OFFSET(get<float>, {0x2A0, 4, 0, 0})
	SMember(FColor)                                    RigidBodyIdColor                                            OFFSET(getStruct<T>, {0x2A4, 4, 0, 0})
	DMember(float)                                     RigidBodyTransformScale                                     OFFSET(get<float>, {0x2A8, 4, 0, 0})
	SMember(FColor)                                    RigidBodyCollisionColor                                     OFFSET(getStruct<T>, {0x2AC, 4, 0, 0})
	SMember(FColor)                                    RigidBodyInertiaColor                                       OFFSET(getStruct<T>, {0x2B0, 4, 0, 0})
	SMember(FColor)                                    RigidBodyVelocityColor                                      OFFSET(getStruct<T>, {0x2B4, 4, 0, 0})
	SMember(FColor)                                    RigidBodyForceColor                                         OFFSET(getStruct<T>, {0x2B8, 4, 0, 0})
	SMember(FColor)                                    RigidBodyInfoColor                                          OFFSET(getStruct<T>, {0x2BC, 4, 0, 0})
	SMember(FColor)                                    TransformIndexColor                                         OFFSET(getStruct<T>, {0x2C0, 4, 0, 0})
	DMember(float)                                     TransformScale                                              OFFSET(get<float>, {0x2C4, 4, 0, 0})
	SMember(FColor)                                    LevelColor                                                  OFFSET(getStruct<T>, {0x2C8, 4, 0, 0})
	SMember(FColor)                                    ParentColor                                                 OFFSET(getStruct<T>, {0x2CC, 4, 0, 0})
	DMember(float)                                     ConnectivityEdgeThickness                                   OFFSET(get<float>, {0x2D0, 4, 0, 0})
	SMember(FColor)                                    GeometryIndexColor                                          OFFSET(getStruct<T>, {0x2D4, 4, 0, 0})
	DMember(float)                                     GeometryTransformScale                                      OFFSET(get<float>, {0x2D8, 4, 0, 0})
	SMember(FColor)                                    BoundingBoxColor                                            OFFSET(getStruct<T>, {0x2DC, 4, 0, 0})
	SMember(FColor)                                    FaceColor                                                   OFFSET(getStruct<T>, {0x2E0, 4, 0, 0})
	SMember(FColor)                                    FaceIndexColor                                              OFFSET(getStruct<T>, {0x2E4, 4, 0, 0})
	SMember(FColor)                                    FaceNormalColor                                             OFFSET(getStruct<T>, {0x2E8, 4, 0, 0})
	SMember(FColor)                                    SingleFaceColor                                             OFFSET(getStruct<T>, {0x2EC, 4, 0, 0})
	SMember(FColor)                                    VertexColor                                                 OFFSET(getStruct<T>, {0x2F0, 4, 0, 0})
	SMember(FColor)                                    VertexIndexColor                                            OFFSET(getStruct<T>, {0x2F4, 4, 0, 0})
	SMember(FColor)                                    VertexNormalColor                                           OFFSET(getStruct<T>, {0x2F8, 4, 0, 0})
	CMember(class UBillboardComponent*)                SpriteComponent                                             OFFSET(get<T>, {0x300, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
/// Size: 0x0018 (0x0000A8 - 0x0000C0)
class UGeometryCollectionDebugDrawComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class AGeometryCollectionDebugDrawActor*)  GeometryCollectionDebugDrawActor                            OFFSET(get<T>, {0xA8, 8, 0, 0})
	CMember(class AGeometryCollectionRenderLevelSetActor*) GeometryCollectionRenderLevelSetActor                   OFFSET(get<T>, {0xB0, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolActor
/// Size: 0x0008 (0x000248 - 0x000250)
class AGeometryCollectionISMPoolActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(class UGeometryCollectionISMPoolComponent*) ISMPoolComp                                                OFFSET(get<T>, {0x248, 8, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionISMPoolComponent
/// Size: 0x00C0 (0x0001F0 - 0x0002B0)
class UGeometryCollectionISMPoolComponent : public USceneComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionEmbeddedExemplar
/// Size: 0x0030 (0x000000 - 0x000030)
class FGeometryCollectionEmbeddedExemplar : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSoftObjectPath)                           StaticMeshExemplar                                          OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	DMember(float)                                     StartCullDistance                                           OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     EndCullDistance                                             OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   InstanceCount                                               OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionAutoInstanceMesh
/// Size: 0x0030 (0x000000 - 0x000030)
class FGeometryCollectionAutoInstanceMesh : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FSoftObjectPath)                           StaticMesh                                                  OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         Materials                                                   OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionLevelSetData
/// Size: 0x0010 (0x000000 - 0x000010)
class FGeometryCollectionLevelSetData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   MinLevelSetResolution                                       OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaxLevelSetResolution                                       OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MinClusterLevelSetResolution                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevelSetResolution                                OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionParticleData
/// Size: 0x0008 (0x000000 - 0x000008)
class FGeometryCollectionCollisionParticleData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     CollisionParticlesFraction                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   MaximumCollisionParticles                                   OFFSET(get<int32_t>, {0x4, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionCollisionTypeData
/// Size: 0x0024 (0x000000 - 0x000024)
class FGeometryCollectionCollisionTypeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(ECollisionTypeEnum)                        CollisionType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EImplicitTypeEnum)                         ImplicitType                                                OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FGeometryCollectionLevelSetData)           LevelSet                                                    OFFSET(getStruct<T>, {0x4, 16, 0, 0})
	SMember(FGeometryCollectionCollisionParticleData)  CollisionParticles                                          OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	DMember(float)                                     CollisionObjectReductionPercentage                          OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     CollisionMarginFraction                                     OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSizeSpecificData
/// Size: 0x0020 (0x000000 - 0x000020)
class FGeometryCollectionSizeSpecificData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     MaxSize                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FGeometryCollectionCollisionTypeData>) CollisionShapes                                          OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   DamageThreshold                                             OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollection
/// Size: 0x0138 (0x000028 - 0x000160)
class UGeometryCollection : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	DMember(bool)                                      EnableClustering                                            OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   ClusterGroupIndex                                           OFFSET(get<int32_t>, {0x34, 4, 0, 0})
	DMember(int32_t)                                   MaxClusterLevel                                             OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	CMember(TArray<float>)                             DamageThreshold                                             OFFSET(get<T>, {0x40, 16, 0, 0})
	DMember(bool)                                      bUseSizeSpecificDamageThreshold                             OFFSET(get<bool>, {0x50, 1, 0, 0})
	DMember(bool)                                      PerClusterOnlyDamageThreshold                               OFFSET(get<bool>, {0x51, 1, 0, 0})
	SMember(FGeometryCollectionDamagePropagationData)  DamagePropagationData                                       OFFSET(getStruct<T>, {0x54, 12, 0, 0})
	CMember(EClusterConnectionTypeEnum)                ClusterConnectionType                                       OFFSET(get<T>, {0x60, 1, 0, 0})
	DMember(float)                                     ConnectionGraphBoundsFilteringMargin                        OFFSET(get<float>, {0x64, 4, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         Materials                                                   OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<FGeometryCollectionEmbeddedExemplar>) EmbeddedGeometryExemplar                                  OFFSET(get<T>, {0x78, 16, 0, 0})
	DMember(bool)                                      bUseFullPrecisionUVs                                        OFFSET(get<bool>, {0x88, 1, 0, 0})
	CMember(TArray<FGeometryCollectionAutoInstanceMesh>) AutoInstanceMeshes                                        OFFSET(get<T>, {0x90, 16, 0, 0})
	SMember(FSoftObjectPath)                           RootProxy                                                   OFFSET(getStruct<T>, {0xA0, 32, 0, 0})
	DMember(bool)                                      bStripOnCook                                                OFFSET(get<bool>, {0xC0, 1, 0, 0})
	DMember(bool)                                      EnableNanite                                                OFFSET(get<bool>, {0xC1, 1, 0, 0})
	DMember(bool)                                      bMassAsDensity                                              OFFSET(get<bool>, {0xC2, 1, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     MinimumMassClamp                                            OFFSET(get<float>, {0xC8, 4, 0, 0})
	DMember(bool)                                      bImportCollisionFromSource                                  OFFSET(get<bool>, {0xCC, 1, 0, 0})
	DMember(bool)                                      bRemoveOnMaxSleep                                           OFFSET(get<bool>, {0xCD, 1, 0, 0})
	SMember(FVector2D)                                 MaximumSleepTime                                            OFFSET(getStruct<T>, {0xD0, 8, 0, 0})
	SMember(FVector2D)                                 RemovalDuration                                             OFFSET(getStruct<T>, {0xD8, 8, 0, 0})
	DMember(bool)                                      bSlowMovingAsSleeping                                       OFFSET(get<bool>, {0xE0, 1, 0, 0})
	DMember(float)                                     SlowMovingVelocityThreshold                                 OFFSET(get<float>, {0xE4, 4, 0, 0})
	CMember(TArray<FGeometryCollectionSizeSpecificData>) SizeSpecificData                                          OFFSET(get<T>, {0xE8, 16, 0, 0})
	DMember(bool)                                      EnableRemovePiecesOnFracture                                OFFSET(get<bool>, {0xF8, 1, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         RemoveOnFractureMaterials                                   OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(class UDataflow*)                          DataflowAsset                                               OFFSET(get<T>, {0x110, 8, 0, 0})
	SMember(FString)                                   DataflowTerminal                                            OFFSET(getStruct<T>, {0x118, 16, 0, 0})
	SMember(FGuid)                                     PersistentGuid                                              OFFSET(getStruct<T>, {0x128, 16, 0, 0})
	SMember(FGuid)                                     StateGuid                                                   OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	DMember(int32_t)                                   BoneSelectedMaterialIndex                                   OFFSET(get<int32_t>, {0x148, 4, 0, 0})
};

/// Class /Script/GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
/// Size: 0x0098 (0x000248 - 0x0002E0)
class AGeometryCollectionRenderLevelSetActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	CMember(class UVolumeTexture*)                     TargetVolumeTexture                                         OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class UMaterial*)                          RayMarchMaterial                                            OFFSET(get<T>, {0x250, 8, 0, 0})
	DMember(float)                                     SurfaceTolerance                                            OFFSET(get<float>, {0x258, 4, 0, 0})
	DMember(float)                                     Isovalue                                                    OFFSET(get<float>, {0x25C, 4, 0, 0})
	DMember(bool)                                      Enabled                                                     OFFSET(get<bool>, {0x260, 1, 0, 0})
	DMember(bool)                                      RenderVolumeBoundingBox                                     OFFSET(get<bool>, {0x261, 1, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosBreakingEventData
/// Size: 0x001C (0x000000 - 0x00001C)
class FChaosBreakingEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosCollisionEventData
/// Size: 0x0044 (0x000000 - 0x000044)
class FChaosCollisionEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 68;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   Velocity1                                                   OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FVector)                                   Velocity2                                                   OFFSET(getStruct<T>, {0x24, 12, 0, 0})
	DMember(float)                                     Mass1                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Mass2                                                       OFFSET(get<float>, {0x34, 4, 0, 0})
	SMember(FVector)                                   Impulse                                                     OFFSET(getStruct<T>, {0x38, 12, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosRemovalEventData
/// Size: 0x0014 (0x000000 - 0x000014)
class FChaosRemovalEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.ChaosTrailingEventData
/// Size: 0x002C (0x000000 - 0x00002C)
class FChaosTrailingEventData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(int32_t)                                   ParticleIndex                                               OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/GeometryCollectionEngine.GeometryCollectionSource
/// Size: 0x0070 (0x000000 - 0x000070)
class FGeometryCollectionSource : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FSoftObjectPath)                           SourceGeometryObject                                        OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	CMember(TArray<class UMaterialInterface*>)         SourceMaterial                                              OFFSET(get<T>, {0x50, 16, 0, 0})
	DMember(bool)                                      bAddInternalMaterials                                       OFFSET(get<bool>, {0x60, 1, 0, 0})
	DMember(bool)                                      bSplitComponents                                            OFFSET(get<bool>, {0x61, 1, 0, 0})
};

/// Enum /Script/GeometryCollectionEngine.ECollectionAttributeEnum
/// Size: 0x04
enum class ECollectionAttributeEnum : uint8_t
{
	ECollectionAttributeEnum__Chaos_Active                                           = 0,
	ECollectionAttributeEnum__Chaos_DynamicState                                     = 1,
	ECollectionAttributeEnum__Chaos_CollisionGroup                                   = 2,
	ECollectionAttributeEnum__Chaos_Max                                              = 3
};

/// Enum /Script/GeometryCollectionEngine.ECollectionGroupEnum
/// Size: 0x02
enum class ECollectionGroupEnum : uint8_t
{
	ECollectionGroupEnum__Chaos_Traansform                                           = 0,
	ECollectionGroupEnum__Chaos_Max                                                  = 1
};

/// Enum /Script/GeometryCollectionEngine.EChaosBreakingSortMethod
/// Size: 0x05
enum class EChaosBreakingSortMethod : uint8_t
{
	EChaosBreakingSortMethod__SortNone                                               = 0,
	EChaosBreakingSortMethod__SortByHighestMass                                      = 1,
	EChaosBreakingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosBreakingSortMethod__SortByNearestFirst                                     = 3,
	EChaosBreakingSortMethod__Count                                                  = 4
};

/// Enum /Script/GeometryCollectionEngine.EChaosCollisionSortMethod
/// Size: 0x06
enum class EChaosCollisionSortMethod : uint8_t
{
	EChaosCollisionSortMethod__SortNone                                              = 0,
	EChaosCollisionSortMethod__SortByHighestMass                                     = 1,
	EChaosCollisionSortMethod__SortByHighestSpeed                                    = 2,
	EChaosCollisionSortMethod__SortByHighestImpulse                                  = 3,
	EChaosCollisionSortMethod__SortByNearestFirst                                    = 4,
	EChaosCollisionSortMethod__Count                                                 = 5
};

/// Enum /Script/GeometryCollectionEngine.EChaosRemovalSortMethod
/// Size: 0x04
enum class EChaosRemovalSortMethod : uint8_t
{
	EChaosRemovalSortMethod__SortNone                                                = 0,
	EChaosRemovalSortMethod__SortByHighestMass                                       = 1,
	EChaosRemovalSortMethod__SortByNearestFirst                                      = 2,
	EChaosRemovalSortMethod__Count                                                   = 3
};

/// Enum /Script/GeometryCollectionEngine.EChaosTrailingSortMethod
/// Size: 0x05
enum class EChaosTrailingSortMethod : uint8_t
{
	EChaosTrailingSortMethod__SortNone                                               = 0,
	EChaosTrailingSortMethod__SortByHighestMass                                      = 1,
	EChaosTrailingSortMethod__SortByHighestSpeed                                     = 2,
	EChaosTrailingSortMethod__SortByNearestFirst                                     = 3,
	EChaosTrailingSortMethod__Count                                                  = 4
};

/// Enum /Script/GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
/// Size: 0x05
enum class EGeometryCollectionDebugDrawActorHideGeometry : uint8_t
{
	EGeometryCollectionDebugDrawActorHideGeometry__HideNone                          = 0,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWithCollision                 = 1,
	EGeometryCollectionDebugDrawActorHideGeometry__HideSelected                      = 2,
	EGeometryCollectionDebugDrawActorHideGeometry__HideWholeCollection               = 3,
	EGeometryCollectionDebugDrawActorHideGeometry__HideAll                           = 4
};

