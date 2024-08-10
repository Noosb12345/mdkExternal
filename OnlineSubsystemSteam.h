
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine
/// dependency: OnlineSubsystemUtils
/// dependency: PacketHandler

/// Class /Script/OnlineSubsystemSteam.SteamAuthComponentModuleInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/OnlineSubsystemSteam.SteamNetConnection
/// Size: 0x0008 (0x001E48 - 0x001E50)
class USteamNetConnection : public UIpConnection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 7760;

public:
	DMember(bool)                                      bIsPassthrough                                              OFFSET(get<bool>, {0x1E48, 1, 0, 0})
};

/// Class /Script/OnlineSubsystemSteam.SteamNetDriver
/// Size: 0x0008 (0x000868 - 0x000870)
class USteamNetDriver : public UIpNetDriver
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2160;

public:
};

