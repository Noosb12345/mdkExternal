
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType

/// Struct /Script/CoreOnline.JoinabilitySettings
/// Size: 0x0014 (0x000000 - 0x000014)
class FJoinabilitySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     SessionName                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      bPublicSearchable                                           OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bAllowInvites                                               OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bJoinViaPresence                                            OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(bool)                                      bJoinViaPresenceFriendsOnly                                 OFFSET(get<bool>, {0xB, 1, 0, 0})
	DMember(int32_t)                                   MaxPlayers                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   MaxPartySize                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/CoreOnline.UniqueNetIdWrapper
/// Size: 0x0001 (0x000000 - 0x000001)
class FUniqueNetIdWrapper : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Enum /Script/CoreOnline.ECoreOnlineDummy
/// Size: 0x01
enum class ECoreOnlineDummy : uint8_t
{
	ECoreOnlineDummy__Dummy                                                          = 0
};

