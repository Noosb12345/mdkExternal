
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/FacialAnimation.AudioCurveSourceComponent
/// Size: 0x0040 (0x000B90 - 0x000BD0)
class UAudioCurveSourceComponent : public UAudioComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3024;

public:
	SMember(FName)                                     CurveSourceBindingName                                      OFFSET(getStruct<T>, {0xB90, 8, 0, 0})
	DMember(float)                                     CurveSyncOffset                                             OFFSET(get<float>, {0xB98, 4, 0, 0})
};

