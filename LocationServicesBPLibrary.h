
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: CoreUObject
/// dependency: Engine

/// Class /Script/LocationServicesBPLibrary.LocationServices
/// Size: 0x0000 (0x000028 - 0x000028)
class ULocationServices : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/LocationServicesBPLibrary.LocationServices.StopLocationServices
	// bool StopLocationServices();                                                                                             // [0x29717e0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.StartLocationServices
	// bool StartLocationServices();                                                                                            // [0x2971830] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.IsLocationAccuracyAvailable
	// bool IsLocationAccuracyAvailable(ELocationAccuracy Accuracy);                                                            // [0x2971630] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.InitLocationServices
	// bool InitLocationServices(ELocationAccuracy Accuracy, float UpdateFrequency, float MinDistanceFilter);                   // [0x2971880] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.GetLocationServicesImpl
	// class ULocationServicesImpl* GetLocationServicesImpl();                                                                  // [0x2971610] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.GetLastKnownLocation
	// FLocationServicesData GetLastKnownLocation();                                                                            // [0x2971780] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/LocationServicesBPLibrary.LocationServices.AreLocationServicesEnabled
	// bool AreLocationServicesEnabled();                                                                                       // [0x2971730] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/LocationServicesBPLibrary.LocationServicesImpl
/// Size: 0x0010 (0x000028 - 0x000038)
class ULocationServicesImpl : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FMulticastInlineDelegate)                  OnLocationChanged                                           OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/LocationServicesBPLibrary.LocationServicesData
/// Size: 0x0018 (0x000000 - 0x000018)
class FLocationServicesData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Timestamp                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Longitude                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Latitude                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     HorizontalAccuracy                                          OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     VerticalAccuracy                                            OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Altitude                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Enum /Script/LocationServicesBPLibrary.ELocationAccuracy
/// Size: 0x06
enum class ELocationAccuracy : uint8_t
{
	ELocationAccuracy__LA_ThreeKilometers                                            = 0,
	ELocationAccuracy__LA_OneKilometer                                               = 1,
	ELocationAccuracy__LA_HundredMeters                                              = 2,
	ELocationAccuracy__LA_TenMeters                                                  = 3,
	ELocationAccuracy__LA_Best                                                       = 4,
	ELocationAccuracy__LA_Navigation                                                 = 5
};

