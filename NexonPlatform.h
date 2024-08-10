
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/NexonPlatform.NXPToyCSInterface
/// Size: 0x0000 (0x000028 - 0x000028)
class UNXPToyCSInterface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/NexonPlatform.NXPToyCSInterface.OpenNCSForNonMember
	// void OpenNCSForNonMember();                                                                                              // [0x1861360] Final|Native|Public|Const 
};

/// Class /Script/NexonPlatform.NXPToyPreferences
/// Size: 0x0210 (0x000028 - 0x000238)
class UNXPToyPreferences : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 568;

public:
	CMember(TMap<FString, FString>)                    BannerDoNotShowToday                                        OFFSET(get<T>, {0x28, 80, 0, 0})
	CMember(TArray<FString>)                           ConditionalBannerDoNotShowAnymore                           OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TMap<FString, FString>)                    ConditionalBannerDoNotShowToday                             OFFSET(get<T>, {0x88, 80, 0, 0})
	CMember(TMap<FString, int32_t>)                    ConditionalBannerTotalDisplayCount                          OFFSET(get<T>, {0xD8, 80, 0, 0})
	CMember(TMap<FString, FString>)                    ConditionalBannerLastDisplayDateTime                        OFFSET(get<T>, {0x128, 80, 0, 0})
	CMember(TMap<FString, FString>)                    TodayDoNotShowToday                                         OFFSET(get<T>, {0x178, 80, 0, 0})
	CMember(TMap<FString, FString>)                    EveTodayDoNotShowToday                                      OFFSET(get<T>, {0x1C8, 80, 0, 0})
	SMember(FString)                                   NXID                                                        OFFSET(getStruct<T>, {0x218, 16, 0, 0})
	SMember(FString)                                   NXPW                                                        OFFSET(getStruct<T>, {0x228, 16, 0, 0})
};

/// Class /Script/NexonPlatform.NXPEveInterface
/// Size: 0x0008 (0x000028 - 0x000030)
class UNXPEveInterface : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:


	/// Functions
	// Function /Script/NexonPlatform.NXPEveInterface.saveEveUserInfo
	// void saveEveUserInfo(FString UserInfo);                                                                                  // [0x18638a0] Final|Native|Public|Const 
	// Function /Script/NexonPlatform.NXPEveInterface.openLink
	// void openLink(FString EveLinkJsonString, FString callback);                                                              // [0x1862cb0] Final|Native|Public|Const 
	// Function /Script/NexonPlatform.NXPEveInterface.getUserInfo
	// void getUserInfo(FString callback);                                                                                      // [0x1863250] Final|Native|Public|Const 
	// Function /Script/NexonPlatform.NXPEveInterface.getLocale
	// void getLocale(FString callback);                                                                                        // [0x1863360] Final|Native|Public|Const 
	// Function /Script/NexonPlatform.NXPEveInterface.getDisplayCutout
	// void getDisplayCutout(FString callback);                                                                                 // [0x1863b70] Final|Native|Public|Const 
	// Function /Script/NexonPlatform.NXPEveInterface.getCountry
	// void getCountry(FString callback);                                                                                       // [0x1863470] Final|Native|Public|Const 
	// Function /Script/NexonPlatform.NXPEveInterface.doNotShowToday
	// void doNotShowToday(FString PlacementId, FString State);                                                                 // [0x1863580] Final|Native|Public|Const 
	// Function /Script/NexonPlatform.NXPEveInterface.dismissWebView
	// void dismissWebView(FString callback);                                                                                   // [0x1863750] Final|Native|Public|Const 
	// Function /Script/NexonPlatform.NXPEveInterface.callback
	// void callback(FString ErrorCode, FString Message);                                                                       // [0x18639a0] Final|Native|Public|Const 
	// Function /Script/NexonPlatform.NXPEveInterface.billingRequestProducts
	// void billingRequestProducts(TArray<FString>& ProductIds, FString callback);                                              // [0x1863050] Final|Native|Public|HasOutParms|Const 
	// Function /Script/NexonPlatform.NXPEveInterface.billingPayment
	// void billingPayment(FString ProductId, FString callback);                                                                // [0x1862e80] Final|Native|Public|Const 
};

/// Enum /Script/NexonPlatform.EUINavigationFeatureActivationStatus
/// Size: 0x03
enum class EUINavigationFeatureActivationStatus : uint8_t
{
	EUINavigationFeatureActivationStatus__Off                                        = 0,
	EUINavigationFeatureActivationStatus__On                                         = 1,
	EUINavigationFeatureActivationStatus__UINavigationAction_Back_Only               = 2
};

/// Enum /Script/NexonPlatform.EUINavigationMoveCursorToFocusedWidget
/// Size: 0x02
enum class EUINavigationMoveCursorToFocusedWidget : uint8_t
{
	EUINavigationMoveCursorToFocusedWidget__Off                                      = 0,
	EUINavigationMoveCursorToFocusedWidget__On                                       = 1
};

