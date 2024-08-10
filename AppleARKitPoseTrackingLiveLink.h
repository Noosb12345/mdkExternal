
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject
/// dependency: LiveLinkAnimationCore

/// Class /Script/AppleARKitPoseTrackingLiveLink.AppleARKitPoseTrackingLiveLinkRemapAsset
/// Size: 0x0068 (0x000028 - 0x000090)
class UAppleARKitPoseTrackingLiveLinkRemapAsset : public ULiveLinkRetargetAsset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FVector)                                   AppleARKitHumanForward                                      OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	SMember(FVector)                                   MeshForward                                                 OFFSET(getStruct<T>, {0x34, 12, 0, 0})
	CMember(TMap<FName, FName>)                        AppleARKitBoneNamesToMeshBoneNames                          OFFSET(get<T>, {0x40, 80, 0, 0})
};

