
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Class /Script/M1VivoxSettings.M1VivoxSettings
/// Size: 0x0010 (0x000038 - 0x000048)
class UM1VivoxSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     InputVolumeRangeMinimum                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     InputVolumeRangeMaximum                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     OutputVolumeRangeMinimum                                    OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     OutputVolumeRangeMaximum                                    OFFSET(get<float>, {0x44, 4, 0, 0})
};

