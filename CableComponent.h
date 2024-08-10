
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/CableComponent.CableActor
/// Size: 0x0008 (0x000248 - 0x000250)
class ACableActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
	CMember(class UCableComponent*)                    CableComponent                                              OFFSET(get<T>, {0x248, 8, 0, 0})
};

/// Class /Script/CableComponent.CableComponent
/// Size: 0x0090 (0x0004B0 - 0x000540)
class UCableComponent : public UMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	DMember(bool)                                      bAttachStart                                                OFFSET(get<bool>, {0x4B0, 1, 0, 0})
	DMember(bool)                                      bAttachEnd                                                  OFFSET(get<bool>, {0x4B1, 1, 0, 0})
	SMember(FComponentReference)                       AttachEndTo                                                 OFFSET(getStruct<T>, {0x4B8, 40, 0, 0})
	SMember(FName)                                     AttachEndToSocketName                                       OFFSET(getStruct<T>, {0x4E0, 8, 0, 0})
	SMember(FVector)                                   EndLocation                                                 OFFSET(getStruct<T>, {0x4E8, 12, 0, 0})
	DMember(float)                                     CableLength                                                 OFFSET(get<float>, {0x4F4, 4, 0, 0})
	DMember(int32_t)                                   NumSegments                                                 OFFSET(get<int32_t>, {0x4F8, 4, 0, 0})
	DMember(float)                                     SubstepTime                                                 OFFSET(get<float>, {0x4FC, 4, 0, 0})
	DMember(int32_t)                                   SolverIterations                                            OFFSET(get<int32_t>, {0x500, 4, 0, 0})
	DMember(bool)                                      bEnableStiffness                                            OFFSET(get<bool>, {0x504, 1, 0, 0})
	DMember(bool)                                      bUseSubstepping                                             OFFSET(get<bool>, {0x505, 1, 0, 0})
	DMember(bool)                                      bSkipCableUpdateWhenNotVisible                              OFFSET(get<bool>, {0x506, 1, 0, 0})
	DMember(bool)                                      bSkipCableUpdateWhenNotOwnerRecentlyRendered                OFFSET(get<bool>, {0x507, 1, 0, 0})
	DMember(bool)                                      bEnableCollision                                            OFFSET(get<bool>, {0x508, 1, 0, 0})
	DMember(float)                                     CollisionFriction                                           OFFSET(get<float>, {0x50C, 4, 0, 0})
	SMember(FVector)                                   CableForce                                                  OFFSET(getStruct<T>, {0x510, 12, 0, 0})
	DMember(float)                                     CableGravityScale                                           OFFSET(get<float>, {0x51C, 4, 0, 0})
	DMember(float)                                     CableWidth                                                  OFFSET(get<float>, {0x520, 4, 0, 0})
	DMember(int32_t)                                   NumSides                                                    OFFSET(get<int32_t>, {0x524, 4, 0, 0})
	DMember(float)                                     TileMaterial                                                OFFSET(get<float>, {0x528, 4, 0, 0})


	/// Functions
	// Function /Script/CableComponent.CableComponent.SetAttachEndToComponent
	// void SetAttachEndToComponent(class USceneComponent* Component, FName SocketName);                                        // [0x29621a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.SetAttachEndTo
	// void SetAttachEndTo(class AActor* Actor, FName ComponentProperty, FName SocketName);                                     // [0x2961f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/CableComponent.CableComponent.GetCableParticleLocations
	// void GetCableParticleLocations(TArray<FVector>& Locations);                                                              // [0x2961cd0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedComponent
	// class USceneComponent* GetAttachedComponent();                                                                           // [0x2961e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/CableComponent.CableComponent.GetAttachedActor
	// class AActor* GetAttachedActor();                                                                                        // [0x2961ee0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

