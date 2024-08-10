
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: AnimationBudgetAllocator
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: NavigationSystem

/// Class /Script/M1Actor.M1NavModifierSmallerMaxZComponent
/// Size: 0x0000 (0x000150 - 0x000150)
class UM1NavModifierSmallerMaxZComponent : public UNavModifierComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
};

/// Class /Script/M1Actor.M1SkeletalMeshActor
/// Size: 0x0000 (0x0002C8 - 0x0002C8)
class AM1SkeletalMeshActor : public ASkeletalMeshActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 712;

public:
};

/// Class /Script/M1Actor.M1SkeletalMeshComponentBudgeted
/// Size: 0x0010 (0x000E50 - 0x000E60)
class UM1SkeletalMeshComponentBudgeted : public USkeletalMeshComponentBudgeted
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3680;

public:
	DMember(bool)                                      bDisableAnimPhys                                            OFFSET(get<bool>, {0xE50, 1, 0, 0})
	CMember(ESkeletalMeshSignificanceLevel)            Significance                                                OFFSET(get<T>, {0xE51, 1, 0, 0})
};

/// Class /Script/M1Actor.M1StaticMeshComponent
/// Size: 0x0000 (0x000530 - 0x000530)
class UM1StaticMeshComponent : public UStaticMeshComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1328;

public:
};

/// Class /Script/M1Actor.M1StaticMeshActor
/// Size: 0x0010 (0x000258 - 0x000268)
class AM1StaticMeshActor : public AStaticMeshActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 616;

public:
	DMember(bool)                                      bMag_FillCollisionInsideForNavmesh                          OFFSET(get<bool>, {0x258, 1, 0, 0})
	CMember(class UNavModifierComponent*)              NavModifierComp                                             OFFSET(get<T>, {0x260, 8, 0, 0})
};

/// Struct /Script/M1Actor.M1WindGustParameter
/// Size: 0x001C (0x000000 - 0x00001C)
class FM1WindGustParameter : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	DMember(float)                                     GustFrequency                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     GustDurationMin                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     GustDurationMax                                             OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     GustDelay                                                   OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bEnabledGust                                                OFFSET(get<bool>, {0x18, 1, 1, 0})
};

/// Struct /Script/M1Actor.M1WindChannels
/// Size: 0x0001 (0x000000 - 0x000001)
class FM1WindChannels : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
	DMember(bool)                                      bWorld                                                      OFFSET(get<bool>, {0x0, 1, 1, 0})
	DMember(bool)                                      bChannel1                                                   OFFSET(get<bool>, {0x0, 1, 1, 1})
	DMember(bool)                                      bChannel2                                                   OFFSET(get<bool>, {0x0, 1, 1, 2})
};

/// Class /Script/M1Actor.M1WindDirectionalSourceComponent
/// Size: 0x0050 (0x000210 - 0x000260)
class UM1WindDirectionalSourceComponent : public UWindDirectionalSourceComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FM1WindGustParameter)                      GustParameter                                               OFFSET(getStruct<T>, {0x210, 28, 0, 0})
	SMember(FM1WindChannels)                           WindChannels                                                OFFSET(getStruct<T>, {0x22C, 1, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x230, 1, 1, 0})


	/// Functions
	// Function /Script/M1Actor.M1WindDirectionalSourceComponent.SetWindChannels
	// void SetWindChannels(FM1WindChannels InWindChannels);                                                                    // [0x1edf7b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/M1Actor.M1WindDirectionalSourceComponent.SetEnabled
	// void SetEnabled(bool InEnabled);                                                                                         // [0x1edf6b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/M1Actor.M1WindDirectionalSourceComponent.IsWindChannelsValid
	// bool IsWindChannelsValid(FM1WindChannels InWindChannels);                                                                // [0x1edf8a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/M1Actor.M1WindDirectionalSourceComponent.GustForce
	// void GustForce(float GustStrength, float GustPreDuration, float GustApexDuration, float GustPostDuration);               // [0x1edf140] Final|Native|Public|BlueprintCallable 
	// Function /Script/M1Actor.M1WindDirectionalSourceComponent.GetWindStrengthCombinedGust
	// void GetWindStrengthCombinedGust(FVector& Position, FVector& OutDirection, float& OutSpeed);                             // [0x1edf480] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
};

/// Class /Script/M1Actor.M1WorldSettings
/// Size: 0x0008 (0x000420 - 0x000428)
class AM1WorldSettings : public AWorldSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1064;

public:
	DMember(float)                                     GravityScale                                                OFFSET(get<float>, {0x420, 4, 0, 0})
};

/// Enum /Script/M1Actor.ESkeletalMeshSignificanceLevel
/// Size: 0x04
enum class ESkeletalMeshSignificanceLevel : uint8_t
{
	ESkeletalMeshSignificanceLevel__Low                                              = 0,
	ESkeletalMeshSignificanceLevel__Medium                                           = 1,
	ESkeletalMeshSignificanceLevel__High                                             = 2,
	ESkeletalMeshSignificanceLevel__Num                                              = 3
};

/// Enum /Script/M1Actor.EM1AnimPhysDisabledState
/// Size: 0x05
enum class EM1AnimPhysDisabledState : uint8_t
{
	EM1AnimPhysDisabledState__None                                                   = 0,
	EM1AnimPhysDisabledState__DisableWind                                            = 1,
	EM1AnimPhysDisabledState__DisableGravity                                         = 2,
	EM1AnimPhysDisabledState__DisableSimulation                                      = 4,
	EM1AnimPhysDisabledState__DisableAll                                             = 7
};

