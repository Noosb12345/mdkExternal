
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: DeveloperSettings

/// Class /Script/XeSSPlugin.XeSSSettings
/// Size: 0x0018 (0x000038 - 0x000050)
class UXeSSSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bEnableXeSSInEditorViewports                                OFFSET(get<bool>, {0x38, 1, 0, 0})
	SMember(FString)                                   DebugDataDumpPath                                           OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

