
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/ArchVisCharacter.ArchVisCharacter
/// Size: 0x0068 (0x0004F8 - 0x000560)
class AArchVisCharacter : public ACharacter
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	SMember(FString)                                   LookUpAxisName                                              OFFSET(getStruct<T>, {0x4F8, 16, 0, 0})
	SMember(FString)                                   LookUpAtRateAxisName                                        OFFSET(getStruct<T>, {0x508, 16, 0, 0})
	SMember(FString)                                   TurnAxisName                                                OFFSET(getStruct<T>, {0x518, 16, 0, 0})
	SMember(FString)                                   TurnAtRateAxisName                                          OFFSET(getStruct<T>, {0x528, 16, 0, 0})
	SMember(FString)                                   MoveForwardAxisName                                         OFFSET(getStruct<T>, {0x538, 16, 0, 0})
	SMember(FString)                                   MoveRightAxisName                                           OFFSET(getStruct<T>, {0x548, 16, 0, 0})
	DMember(float)                                     MouseSensitivityScale_Pitch                                 OFFSET(get<float>, {0x558, 4, 0, 0})
	DMember(float)                                     MouseSensitivityScale_Yaw                                   OFFSET(get<float>, {0x55C, 4, 0, 0})
};

/// Class /Script/ArchVisCharacter.ArchVisCharMovementComponent
/// Size: 0x0050 (0x000C30 - 0x000C80)
class UArchVisCharMovementComponent : public UCharacterMovementComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3200;

public:
	SMember(FRotator)                                  RotationalAcceleration                                      OFFSET(getStruct<T>, {0xC30, 12, 0, 0})
	SMember(FRotator)                                  RotationalDeceleration                                      OFFSET(getStruct<T>, {0xC3C, 12, 0, 0})
	SMember(FRotator)                                  MaxRotationalVelocity                                       OFFSET(getStruct<T>, {0xC48, 12, 0, 0})
	DMember(float)                                     MinPitch                                                    OFFSET(get<float>, {0xC54, 4, 0, 0})
	DMember(float)                                     MaxPitch                                                    OFFSET(get<float>, {0xC58, 4, 0, 0})
	DMember(float)                                     WalkingFriction                                             OFFSET(get<float>, {0xC5C, 4, 0, 0})
	DMember(float)                                     WalkingSpeed                                                OFFSET(get<float>, {0xC60, 4, 0, 0})
	DMember(float)                                     WalkingAcceleration                                         OFFSET(get<float>, {0xC64, 4, 0, 0})
};

