
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: Chaos
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/ChaosSolverEngine.ChaosDebugDrawComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UChaosDebugDrawComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Class /Script/ChaosSolverEngine.ChaosEventListenerComponent
/// Size: 0x0008 (0x0000A8 - 0x0000B0)
class UChaosEventListenerComponent : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
};

/// Struct /Script/ChaosSolverEngine.ChaosHandlerSet
/// Size: 0x0058 (0x000000 - 0x000058)
class FChaosHandlerSet : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TSet<UObject*>)                            ChaosHandlers                                               OFFSET(get<T>, {0x8, 80, 0, 0})
};

/// Struct /Script/ChaosSolverEngine.BreakEventCallbackWrapper
/// Size: 0x0040 (0x000000 - 0x000040)
class FBreakEventCallbackWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/ChaosSolverEngine.RemovalEventCallbackWrapper
/// Size: 0x0040 (0x000000 - 0x000040)
class FRemovalEventCallbackWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/ChaosSolverEngine.CrumblingEventCallbackWrapper
/// Size: 0x0040 (0x000000 - 0x000040)
class FCrumblingEventCallbackWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Class /Script/ChaosSolverEngine.ChaosGameplayEventDispatcher
/// Size: 0x0260 (0x0000B0 - 0x000310)
class UChaosGameplayEventDispatcher : public UChaosEventListenerComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	CMember(TMap<class UPrimitiveComponent*, FChaosHandlerSet>) CollisionEventRegistrations                        OFFSET(get<T>, {0x1C0, 80, 0, 0})
	CMember(TMap<class UPrimitiveComponent*, FBreakEventCallbackWrapper>) BreakEventRegistrations                  OFFSET(get<T>, {0x210, 80, 0, 0})
	CMember(TMap<class UPrimitiveComponent*, FRemovalEventCallbackWrapper>) RemovalEventRegistrations              OFFSET(get<T>, {0x260, 80, 0, 0})
	CMember(TMap<class UPrimitiveComponent*, FCrumblingEventCallbackWrapper>) CrumblingEventRegistrations          OFFSET(get<T>, {0x2B0, 80, 0, 0})
};

/// Class /Script/ChaosSolverEngine.ChaosNotifyHandlerInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosNotifyHandlerInterface : public UInterface
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosSolverEngineBlueprintLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult
	// FHitResult ConvertPhysicsCollisionToHitResult(FChaosPhysicsCollisionInfo& PhysicsCollision);                             // [0x4fd6410] Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure 
};

/// Class /Script/ChaosSolverEngine.ChaosSolver
/// Size: 0x0000 (0x000028 - 0x000028)
class UChaosSolver : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ChaosSolverEngine.ChaosDebugSubstepControl
/// Size: 0x0003 (0x000000 - 0x000003)
class FChaosDebugSubstepControl : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 3;

public:
	DMember(bool)                                      bPause                                                      OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bSubstep                                                    OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bStep                                                       OFFSET(get<bool>, {0x2, 1, 0, 0})
};

/// Class /Script/ChaosSolverEngine.ChaosSolverActor
/// Size: 0x00F8 (0x000248 - 0x000340)
class AChaosSolverActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 832;

public:
	SMember(FChaosSolverConfiguration)                 Properties                                                  OFFSET(getStruct<T>, {0x248, 104, 0, 0})
	DMember(float)                                     TimeStepMultiplier                                          OFFSET(get<float>, {0x2B0, 4, 0, 0})
	DMember(int32_t)                                   CollisionIterations                                         OFFSET(get<int32_t>, {0x2B4, 4, 0, 0})
	DMember(int32_t)                                   PushOutIterations                                           OFFSET(get<int32_t>, {0x2B8, 4, 0, 0})
	DMember(int32_t)                                   PushOutPairIterations                                       OFFSET(get<int32_t>, {0x2BC, 4, 0, 0})
	DMember(float)                                     ClusterConnectionFactor                                     OFFSET(get<float>, {0x2C0, 4, 0, 0})
	CMember(EClusterConnectionTypeEnum)                ClusterUnionConnectionType                                  OFFSET(get<T>, {0x2C4, 1, 0, 0})
	DMember(bool)                                      DoGenerateCollisionData                                     OFFSET(get<bool>, {0x2C5, 1, 0, 0})
	SMember(FSolverCollisionFilterSettings)            CollisionFilterSettings                                     OFFSET(getStruct<T>, {0x2C8, 16, 0, 0})
	DMember(bool)                                      DoGenerateBreakingData                                      OFFSET(get<bool>, {0x2D8, 1, 0, 0})
	SMember(FSolverBreakingFilterSettings)             BreakingFilterSettings                                      OFFSET(getStruct<T>, {0x2DC, 16, 0, 0})
	DMember(bool)                                      DoGenerateTrailingData                                      OFFSET(get<bool>, {0x2EC, 1, 0, 0})
	SMember(FSolverTrailingFilterSettings)             TrailingFilterSettings                                      OFFSET(getStruct<T>, {0x2F0, 16, 0, 0})
	DMember(float)                                     MassScale                                                   OFFSET(get<float>, {0x300, 4, 0, 0})
	DMember(bool)                                      bHasFloor                                                   OFFSET(get<bool>, {0x304, 1, 0, 0})
	DMember(float)                                     FloorHeight                                                 OFFSET(get<float>, {0x308, 4, 0, 0})
	SMember(FChaosDebugSubstepControl)                 ChaosDebugSubstepControl                                    OFFSET(getStruct<T>, {0x30C, 3, 0, 0})
	CMember(class UBillboardComponent*)                SpriteComponent                                             OFFSET(get<T>, {0x310, 8, 0, 0})
	CMember(class UChaosGameplayEventDispatcher*)      GameplayEventDispatcherComponent                            OFFSET(get<T>, {0x330, 8, 0, 0})


	/// Functions
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetSolverActive
	// void SetSolverActive(bool bActive);                                                                                      // [0x13c2390] Native|Public|BlueprintCallable 
	// Function /Script/ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver
	// void SetAsCurrentWorldSolver();                                                                                          // [0x4fd6c00] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ChaosSolverEngine.ChaosSolverSettings
/// Size: 0x0028 (0x000038 - 0x000060)
class UChaosSolverSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FSoftClassPath)                            DefaultChaosSolverActorClass                                OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/ChaosSolverEngine.ChaosPhysicsCollisionInfo
/// Size: 0x0070 (0x000000 - 0x000070)
class FChaosPhysicsCollisionInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(class UPrimitiveComponent*)                Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	CMember(class UPrimitiveComponent*)                OtherComponent                                              OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FVector)                                   Normal                                                      OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	SMember(FVector)                                   AccumulatedImpulse                                          OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x34, 12, 0, 0})
	SMember(FVector)                                   OtherVelocity                                               OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	SMember(FVector)                                   OtherAngularVelocity                                        OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     OtherMass                                                   OFFSET(get<float>, {0x68, 4, 0, 0})
};

/// Struct /Script/ChaosSolverEngine.ChaosBreakEvent
/// Size: 0x0048 (0x000000 - 0x000048)
class FChaosBreakEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	CMember(class UPrimitiveComponent*)                Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FVector)                                   Extents                                                     OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bFromCrumble                                                OFFSET(get<bool>, {0x40, 1, 0, 0})
};

/// Struct /Script/ChaosSolverEngine.ChaosCrumblingEvent
/// Size: 0x0080 (0x000000 - 0x000080)
class FChaosCrumblingEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	CMember(class UPrimitiveComponent*)                Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FQuat)                                     Orientation                                                 OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FVector)                                   LinearVelocity                                              OFFSET(getStruct<T>, {0x30, 12, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x48, 4, 0, 0})
	SMember(FBox)                                      LocalBounds                                                 OFFSET(getStruct<T>, {0x4C, 28, 0, 0})
	CMember(TArray<int32_t>)                           Children                                                    OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/ChaosSolverEngine.ChaosRemovalEvent
/// Size: 0x0018 (0x000000 - 0x000018)
class FChaosRemovalEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class UPrimitiveComponent*)                Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Enum /Script/ChaosSolverEngine.EClusterConnectionTypeEnum
/// Size: 0x07
enum class EClusterConnectionTypeEnum : uint8_t
{
	EClusterConnectionTypeEnum__Chaos_PointImplicit                                  = 0,
	EClusterConnectionTypeEnum__Chaos_DelaunayTriangulation                          = 1,
	EClusterConnectionTypeEnum__Chaos_MinimalSpanningSubsetDelaunayTriangulation     = 2,
	EClusterConnectionTypeEnum__Chaos_PointImplicitAugmentedWithMinimalDelaunay      = 3,
	EClusterConnectionTypeEnum__Chaos_BoundsOverlapFilteredDelaunayTriangulation     = 4,
	EClusterConnectionTypeEnum__Chaos_None                                           = 5,
	EClusterConnectionTypeEnum__Chaos_EClsuterCreationParameters_Max                 = 6
};

