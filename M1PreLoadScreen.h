
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine

/// Class /Script/M1PreLoadScreen.M1LoadingScreenManager
/// Size: 0x0090 (0x000030 - 0x0000C0)
class UM1LoadingScreenManager : public UGameInstanceSubsystem
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
};

/// Class /Script/M1PreLoadScreen.M1PreLoadScreenSetting
/// Size: 0x0060 (0x000038 - 0x000098)
class UM1PreLoadScreenSetting : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	SMember(FSoftClassPath)                            StartupLoadingScreenClassName                               OFFSET(getStruct<T>, {0x38, 32, 0, 0})
	SMember(FSoftClassPath)                            EngineLoadingScreenClassName                                OFFSET(getStruct<T>, {0x58, 32, 0, 0})
	SMember(FSoftClassPath)                            GameLoadingScreenClassName                                  OFFSET(getStruct<T>, {0x78, 32, 0, 0})
};

