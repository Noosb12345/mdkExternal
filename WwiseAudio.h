
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AkAudio
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: M1
/// dependency: M1Data
/// dependency: UMG

/// Class /Game/WwiseAudio/AKAudioComponent/BP_AudioFL.BP_AudioFL_C
/// Size: 0x0000 (0x000028 - 0x000028)
class UBP_AudioFL_C : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AudioFL.BP_AudioFL_C.BP_Get M1Player String ID
	// void BP_Get M1Player String ID(class AActor* Object, class UObject* __WorldContext, FString& StringId);                  // [0x3a334c0] Static|Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AudioFL.BP_AudioFL_C.BP_AK_WidgetAnimsound
	// void BP_AK_WidgetAnimsound(class UAkAudioEvent* AkEvent, class UWidget* Target, class UObject* __WorldContext);          // [0x3a334c0] Static|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
};

/// Class /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C
/// Size: 0x00A0 (0x0006A0 - 0x000740)
class UBP_AKComponent_C : public UM1AkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1856;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x6A0, 8, 0, 0})
	DMember(bool)                                      IsPlayerInitSound                                           OFFSET(get<bool>, {0x6A8, 1, 0, 0})
	CMember(class UAkComponent*)                       OneShotAkcomp                                               OFFSET(get<T>, {0x6B0, 8, 0, 0})
	DMember(double)                                    RPM_Accelation                                              OFFSET(get<double>, {0x6B8, 8, 0, 0})
	DMember(double)                                    fireinterval                                                OFFSET(get<double>, {0x6C0, 8, 0, 0})
	DMember(bool)                                      IsContinousFiring_                                          OFFSET(get<bool>, {0x6C8, 1, 0, 0})
	SMember(FString)                                   StopFireAkEventName                                         OFFSET(getStruct<T>, {0x6D0, 16, 0, 0})
	DMember(double)                                    CuRound_Rate                                                OFFSET(get<double>, {0x6E0, 8, 0, 0})
	CMember(EM1DynamicDialogueStimulus)                VoStimulus                                                  OFFSET(get<T>, {0x6E8, 1, 0, 0})
	SMember(FString)                                   DeboneTarget                                                OFFSET(getStruct<T>, {0x6F0, 16, 0, 0})
	SMember(FString)                                   CampString                                                  OFFSET(getStruct<T>, {0x700, 16, 0, 0})
	DMember(bool)                                      ReadyPlayCampVoice                                          OFFSET(get<bool>, {0x710, 1, 0, 0})
	CMember(class UAkComponent*)                       RangeHitLocation                                            OFFSET(get<T>, {0x718, 8, 0, 0})
	DMember(bool)                                      PrologLoadDynamicBank_                                      OFFSET(get<bool>, {0x720, 1, 0, 0})
	DMember(int32_t)                                   BRCharge_Level                                              OFFSET(get<int32_t>, {0x724, 4, 0, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x728, 1, 0, 0})
	DMember(bool)                                      Rapid_Hit                                                   OFFSET(get<bool>, {0x729, 1, 0, 0})
	DMember(bool)                                      bTrapStarted                                                OFFSET(get<bool>, {0x72A, 1, 0, 0})
	SMember(FString)                                   CurrentWeaponType                                           OFFSET(getStruct<T>, {0x730, 16, 0, 0})


	/// Functions
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.GetReviveByRevive
	// void GetReviveByRevive(class AM1Player* Helper, FString& Event, TArray<FString>& Array);                                 // [0x3a334c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.GetReviveByRescue
	// void GetReviveByRescue(class AM1Player* Helper, FString& Event, TArray<FString>& Array);                                 // [0x3a334c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.NpcAkEventCallback
	// void NpcAkEventCallback(EAkCallbackType CallbackType, class UAkCallbackInfo* CallbackInfo);                              // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.GetDamagedLocation
	// FVector GetDamagedLocation(double Angle);                                                                                // [0x3a334c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.GetDeboneSuccessArg
	// void GetDeboneSuccessArg(FString& Event, TArray<FString>& Array);                                                        // [0x3a334c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.GetDeboneArg
	// void GetDeboneArg(FString& Event, TArray<FString>& Array);                                                               // [0x3a334c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.GetEmptyRoundsArg
	// void GetEmptyRoundsArg(EM1DynamicDialogueStimulus Stimulus, FString& Event, TArray<FString>& Array);                     // [0x3a334c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.GetDamagedArg
	// void GetDamagedArg(EM1DynamicDialogueStimulus Stimulus, FString& Event, TArray<FString>& Array);                         // [0x3a334c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.GetRegCampArg
	// void GetRegCampArg(FString& Event, TArray<FString>& Array);                                                              // [0x3a334c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.GetJoinMissionArg
	// void GetJoinMissionArg(FString& Event, TArray<FString>& Array);                                                          // [0x3a334c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.GetRescueArg
	// void GetRescueArg(class AActor* Object, FString& Event, TArray<FString>& Array);                                         // [0x3a334c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.GetEpicbossKillArg
	// void GetEpicbossKillArg(FString SourceString, FString& Event, TArray<FString>& Array);                                   // [0x3a334c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.GetOrCreateAkComponent
	// void GetOrCreateAkComponent(class USceneComponent* AttachToComponent, FName AttachPointName, FVector Offset, bool& bComponentCreated, class UAkComponent*& OutAkComponent); // [0x3a334c0] Public|HasOutParms|BlueprintCallable|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.TryPlayUI AkEventByName
	// void TryPlayUI AkEventByName(FString AkEventName);                                                                       // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.TryPlayUI AkEvent
	// void TryPlayUI AkEvent(class UAkAudioEvent* AkEvent);                                                                    // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnDoorOpenStart
	// void BP_OnDoorOpenStart();                                                                                               // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnDoorOpenEnd
	// void BP_OnDoorOpenEnd();                                                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnDoorCloseStart
	// void BP_OnDoorCloseStart();                                                                                              // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnDoorCloseEnd
	// void BP_OnDoorCloseEnd();                                                                                                // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnTrapStart
	// void BP_OnTrapStart();                                                                                                   // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnTrapLoop
	// void BP_OnTrapLoop();                                                                                                    // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnTrapEnd
	// void BP_OnTrapEnd();                                                                                                     // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnTrapHit
	// void BP_OnTrapHit();                                                                                                     // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMiniGameFinished
	// void BP_OnMiniGameFinished(bool bIsSuccess);                                                                             // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnTimingHit
	// void BP_OnTimingHit();                                                                                                   // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnTimingMiss
	// void BP_OnTimingMiss();                                                                                                  // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnRemainingTimeAlertStarted
	// void BP_OnRemainingTimeAlertStarted();                                                                                   // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnRoundStarted
	// void BP_OnRoundStarted();                                                                                                // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMiniGameStartedBySpecialCharacter
	// void BP_OnMiniGameStartedBySpecialCharacter(EM1MiniGameType InMiniGameType);                                             // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMovingActorMoveStart
	// void BP_OnMovingActorMoveStart(float Speed);                                                                             // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMovingActorSpawn
	// void BP_OnMovingActorSpawn();                                                                                            // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMovingActorDespawn
	// void BP_OnMovingActorDespawn();                                                                                          // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMovingActorMoveEnd
	// void BP_OnMovingActorMoveEnd();                                                                                          // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnChangeAudioMixOption
	// void BP_OnChangeAudioMixOption(EM1AudioMix InOption);                                                                    // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnNpcLookedAtPlayer
	// void BP_OnNpcLookedAtPlayer();                                                                                           // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnNpcPlayerApproached
	// void BP_OnNpcPlayerApproached();                                                                                         // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnNpcInteractionStarted
	// void BP_OnNpcInteractionStarted();                                                                                       // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnDropItemObtained
	// void BP_OnDropItemObtained();                                                                                            // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnDropItemSpawned
	// void BP_OnDropItemSpawned(EM1ImportanceType InImportanceType);                                                           // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMonsterReceiveAnimNotify
	// void BP_OnMonsterReceiveAnimNotify(class UAkAudioEvent* AkEvent, bool bIsFollowComponent, FString AttachTargetName, class USkeletalMeshComponent* TargetMesh, bool bIsDebugNotify, FVector& Offset); // [0x3a334c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMonsterReceiveAnimNotifyEnd
	// void BP_OnMonsterReceiveAnimNotifyEnd(class UAkComponent* TargetAkComponent, class UAkAudioEvent* AkEvent);              // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMonsterReceiveFootStepAnimNotify
	// void BP_OnMonsterReceiveFootStepAnimNotify(TEnumAsByte<EPhysicalSurface> SurfaceType, char PlayerFootStepAction);        // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMonsterDamaged
	// void BP_OnMonsterDamaged(bool bIsHitWeakPoint);                                                                          // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMonsterStartNormalRangedAttack
	// void BP_OnMonsterStartNormalRangedAttack();                                                                              // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMonsterStartMoveByPurpose
	// void BP_OnMonsterStartMoveByPurpose(EM1AIMovePurpose MovePurpose, bool bInBattle);                                       // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMonsterStopMoveByPurpose
	// void BP_OnMonsterStopMoveByPurpose(EM1AIMovePurpose MovePurpose, bool bInBattle, bool bIdle);                            // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMonsterAIMontageSound
	// void BP_OnMonsterAIMontageSound(EM1MonsterMontageSoundType MonsterMontageSoundType);                                     // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMonsterStartNormalMeleeAttack
	// void BP_OnMonsterStartNormalMeleeAttack();                                                                               // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMonsterGainKnockStatusEffect
	// void BP_OnMonsterGainKnockStatusEffect();                                                                                // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMonsterStartMoveWithDamage
	// void BP_OnMonsterStartMoveWithDamage();                                                                                  // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnMonsterStartRush
	// void BP_OnMonsterStartRush();                                                                                            // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerInitSound
	// void BP_OnPlayerInitSound();                                                                                             // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerUpdateCameraTransform
	// void BP_OnPlayerUpdateCameraTransform();                                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerBattleStateChanged
	// void BP_OnPlayerBattleStateChanged(bool bInBattleState);                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerReceiveAnimNotify
	// void BP_OnPlayerReceiveAnimNotify(class UAkAudioEvent* AkEvent, bool bIsFollowComponent);                                // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerReceiveFootStepAnimNotify
	// void BP_OnPlayerReceiveFootStepAnimNotify(TEnumAsByte<EPhysicalSurface> SurfaceType, char PlayerFootStepAction);         // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerRangedWeaponFired
	// void BP_OnPlayerRangedWeaponFired(class UAkAudioEvent* AkEvent, float fireinterval, float RoundRate, int32_t ChargeLevel); // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerNeedToPlayLocalSound
	// void BP_OnPlayerNeedToPlayLocalSound(class UAkAudioEvent* LocalSoundToPlay);                                             // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerActiveDBNO
	// void BP_OnPlayerActiveDBNO();                                                                                            // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerReviveByRescue
	// void BP_OnPlayerReviveByRescue(class AM1Player* HelperPlayer);                                                           // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerReviveByRespawn
	// void BP_OnPlayerReviveByRespawn();                                                                                       // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerEnterEpicBossRange
	// void BP_OnPlayerEnterEpicBossRange(FString EpicBossName);                                                                // [0x3a334c0] BlueprintEvent       
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerExitEpicBossRange
	// void BP_OnPlayerExitEpicBossRange(FString EpicBossName);                                                                 // [0x3a334c0] BlueprintEvent       
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerEnterArea
	// void BP_OnPlayerEnterArea(FString LocationString);                                                                       // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerJoinMission
	// void BP_OnPlayerJoinMission();                                                                                           // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerEndDebone
	// void BP_OnPlayerEndDebone();                                                                                             // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerDamaged
	// void BP_OnPlayerDamaged(EM1DynamicDialogueStimulus DamageStimulus);                                                      // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerRegisteredCamp
	// void BP_OnPlayerRegisteredCamp();                                                                                        // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerFirstFailedOfAutoReload
	// void BP_OnPlayerFirstFailedOfAutoReload(EM1DynamicDialogueStimulus EmptyRoundsStimulus);                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerSelectHero
	// void BP_OnPlayerSelectHero(FString SelectedHeroStringID);                                                                // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnCharacterReceiveDynamicDialogueAnimNotify
	// void BP_OnCharacterReceiveDynamicDialogueAnimNotify(EM1DynamicDialogueStimulus Stimulus, FString InEventName, TArray<FString>& ArgPaths); // [0x3a334c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerKilledEpicBoss
	// void BP_OnPlayerKilledEpicBoss(FString EpicBossName);                                                                    // [0x3a334c0] BlueprintEvent       
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerLanded
	// void BP_OnPlayerLanded(bool Hard);                                                                                       // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerFalling
	// void BP_OnPlayerFalling(float VelocityZ);                                                                                // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerWireHooked
	// void BP_OnPlayerWireHooked(FVector HookedLocation);                                                                      // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerStartDebone
	// void BP_OnPlayerStartDebone();                                                                                           // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerOutPlayableArea
	// void BP_OnPlayerOutPlayableArea(class UAkAudioEvent* InActivatedEvent);                                                  // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerSuccessRescue
	// void BP_OnPlayerSuccessRescue(class AM1Player* RescueTarget);                                                            // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerChangedWireState
	// void BP_OnPlayerChangedWireState(EM1WireState State);                                                                    // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerRangedWeaponStopFire
	// void BP_OnPlayerRangedWeaponStopFire();                                                                                  // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnWireMiss
	// void BP_OnWireMiss();                                                                                                    // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnWireHooked
	// void BP_OnWireHooked(TEnumAsByte<EPhysicalSurface> HitSurfaceType, bool bHookSuccess);                                   // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnHookChangedWireState
	// void BP_OnHookChangedWireState(EM1WireState State);                                                                      // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnAbilityProjectileExplosion
	// void BP_OnAbilityProjectileExplosion(FVector& Location, FRotator& Rotation);                                             // [0x3a334c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnAbilityProjectileHit
	// void BP_OnAbilityProjectileHit(TEnumAsByte<EPhysicalSurface> HitSurfaceType, FVector& Location, FRotator& Rotation);     // [0x3a334c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnAbilityProjectilePassBy
	// void BP_OnAbilityProjectilePassBy(FVector& Velocity);                                                                    // [0x3a334c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnAbilityProjectileBounce
	// void BP_OnAbilityProjectileBounce(FVector& Velocity);                                                                    // [0x3a334c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnAbilityActorSpawned
	// void BP_OnAbilityActorSpawned();                                                                                         // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnAbilityActorDestroyed
	// void BP_OnAbilityActorDestroyed(FVector& Location, FRotator& Rotation);                                                  // [0x3a334c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnUIPlayDefaultHitMarkerSound
	// void BP_OnUIPlayDefaultHitMarkerSound(EUIEventType UIType);                                                              // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnUIPlayAkEvent
	// void BP_OnUIPlayAkEvent(class UAkAudioEvent* AkEvent, EUIEventType UIType);                                              // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnUIPlayAkEventByName
	// void BP_OnUIPlayAkEventByName(FString InEventName, EUIEventType UIType);                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnUIInGameContentOpened
	// void BP_OnUIInGameContentOpened(class UAkAudioEvent* AkEvent);                                                           // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnUIInGameContentClosed
	// void BP_OnUIInGameContentClosed(class UAkAudioEvent* AkEvent);                                                           // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnUIPlayWeaknessKillHitMarkerSound
	// void BP_OnUIPlayWeaknessKillHitMarkerSound(EUIEventType UIType);                                                         // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnUIShowLoadingScreen
	// void BP_OnUIShowLoadingScreen();                                                                                         // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnUIHideLoadingScreen
	// void BP_OnUIHideLoadingScreen();                                                                                         // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnChangeGamePadVibrationAmount
	// void BP_OnChangeGamePadVibrationAmount(float InMount);                                                                   // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnChangeUseGamepadVibration
	// void BP_OnChangeUseGamepadVibration(bool bUse);                                                                          // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnCharacterDie
	// void BP_OnCharacterDie(bool bWeakness);                                                                                  // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnCharacterMeleeHit
	// void BP_OnCharacterMeleeHit(class UM1DataSoundEffects* OptionalSoundEffects, TEnumAsByte<EPhysicalSurface> HitSurfaceType, FVector& Location); // [0x3a334c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnCharacterRangeHit
	// void BP_OnCharacterRangeHit(class UM1DataSoundEffects* SoundEffects, TEnumAsByte<EPhysicalSurface> HitSurfaceType, FVector& Location, FRotator& Rotation); // [0x3a334c0] Event|Protected|HasOutParms|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnCharacterReceiveFootStepAnimNotify
	// void BP_OnCharacterReceiveFootStepAnimNotify(FString SurfaceType, FString CharacterFootStepAction);                      // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnChangedTimeDilation
	// void BP_OnChangedTimeDilation(float Rate);                                                                               // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnPlayerDamagedFromDirection
	// void BP_OnPlayerDamagedFromDirection(float Angle);                                                                       // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnChangedWeaponByHold
	// void BP_OnChangedWeaponByHold();                                                                                         // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_OnApplyBattleVoice
	// void BP_OnApplyBattleVoice(bool InActivate);                                                                             // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_StopAllAkEventOfOwner
	// void BP_StopAllAkEventOfOwner();                                                                                         // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_PauseAll
	// void BP_PauseAll();                                                                                                      // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.BP_ResumeAll
	// void BP_ResumeAll();                                                                                                     // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/BP_AKComponent.BP_AKComponent_C.ExecuteUbergraph_BP_AKComponent
	// void ExecuteUbergraph_BP_AKComponent(int32_t EntryPoint);                                                                // [0x3a334c0] Final|HasDefaults    
};

/// Class /Game/WwiseAudio/AKAudioComponent/AK_Dialog_Component.AK_Dialog_Component_C
/// Size: 0x0010 (0x000550 - 0x000560)
class UAK_Dialog_Component_C : public UM1DialogAkComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1376;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x550, 8, 0, 0})
	CMember(class UAkAudioEvent*)                      Ak_Event                                                    OFFSET(get<T>, {0x558, 8, 0, 0})


	/// Functions
	// Function /Game/WwiseAudio/AKAudioComponent/AK_Dialog_Component.AK_Dialog_Component_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/AK_Dialog_Component.AK_Dialog_Component_C.ReceiveEndPlay
	// void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);                                                          // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/AK_Dialog_Component.AK_Dialog_Component_C.ExecuteUbergraph_AK_Dialog_Component
	// void ExecuteUbergraph_AK_Dialog_Component(int32_t EntryPoint);                                                           // [0x3a334c0] Final                
};

/// Class /Game/WwiseAudio/Dev_Data/RadiusVisualizeBall.RadiusVisualizeBall_C
/// Size: 0x0018 (0x000248 - 0x000260)
class ARadiusVisualizeBall_C : public AM1AudioActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x248, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               Ball                                                        OFFSET(get<T>, {0x250, 8, 0, 0})
	DMember(double)                                    Radius                                                      OFFSET(get<double>, {0x258, 8, 0, 0})


	/// Functions
	// Function /Game/WwiseAudio/Dev_Data/RadiusVisualizeBall.RadiusVisualizeBall_C.destroy
	// void destroy();                                                                                                          // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WwiseAudio/Dev_Data/RadiusVisualizeBall.RadiusVisualizeBall_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x3a334c0] Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/WwiseAudio/Dev_Data/RadiusVisualizeBall.RadiusVisualizeBall_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/Dev_Data/RadiusVisualizeBall.RadiusVisualizeBall_C.ExecuteUbergraph_RadiusVisualizeBall
	// void ExecuteUbergraph_RadiusVisualizeBall(int32_t EntryPoint);                                                           // [0x3a334c0] Final                
};

/// Class /Game/WwiseAudio/AKAudioComponent/LevelActor/BP_AK_Ambient_3D.BP_AK_Ambient_3D_C
/// Size: 0x0058 (0x000288 - 0x0002E0)
class ABP_AK_Ambient_3D_C : public AAkAmbientSound
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FPointerToUberGraphFrame)                  UberGraphFrame                                              OFFSET(getStruct<T>, {0x288, 8, 0, 0})
	CMember(TEnumAsByte<AmbientObjectType>)            AmbientType                                                 OFFSET(get<T>, {0x290, 1, 0, 0})
	DMember(bool)                                      OverlapVolumeControl_                                       OFFSET(get<bool>, {0x291, 1, 0, 0})
	DMember(double)                                    GenerateGrid                                                OFFSET(get<double>, {0x298, 8, 0, 0})
	CMember(TArray<FTransform>)                        AmbientSound                                                OFFSET(get<T>, {0x2A0, 16, 0, 0})
	CMember(TArray<class UArrowComponent*>)            SoundSpot                                                   OFFSET(get<T>, {0x2B0, 16, 0, 0})
	CMember(TArray<FTransform>)                        AKSpot                                                      OFFSET(get<T>, {0x2C0, 16, 0, 0})
	CMember(class USplineComponent*)                   AmbientWay                                                  OFFSET(get<T>, {0x2D0, 8, 0, 0})
	DMember(double)                                    Attenuation                                                 OFFSET(get<double>, {0x2D8, 8, 0, 0})


	/// Functions
	// Function /Game/WwiseAudio/AKAudioComponent/LevelActor/BP_AK_Ambient_3D.BP_AK_Ambient_3D_C.SetPlayMethod
	// void SetPlayMethod();                                                                                                    // [0x3a334c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/LevelActor/BP_AK_Ambient_3D.BP_AK_Ambient_3D_C.Debug_Listening_Area
	// void Debug_Listening_Area();                                                                                             // [0x3a334c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/LevelActor/BP_AK_Ambient_3D.BP_AK_Ambient_3D_C.GenerateSplineMeter
	// void GenerateSplineMeter();                                                                                              // [0x3a334c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/LevelActor/BP_AK_Ambient_3D.BP_AK_Ambient_3D_C.ResetAmbient
	// void ResetAmbient();                                                                                                     // [0x3a334c0] Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/LevelActor/BP_AK_Ambient_3D.BP_AK_Ambient_3D_C.GenerateSplinePoint
	// void GenerateSplinePoint();                                                                                              // [0x3a334c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/LevelActor/BP_AK_Ambient_3D.BP_AK_Ambient_3D_C.Construct
	// void Construct();                                                                                                        // [0x3a334c0] Public|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/LevelActor/BP_AK_Ambient_3D.BP_AK_Ambient_3D_C.Auto_AddSpotPoint
	// void Auto_AddSpotPoint(FVector& NewLoc);                                                                                 // [0x3a334c0] Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/LevelActor/BP_AK_Ambient_3D.BP_AK_Ambient_3D_C.UserConstructionScript
	// void UserConstructionScript();                                                                                           // [0x3a334c0] Event|Public|BlueprintCallable|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/LevelActor/BP_AK_Ambient_3D.BP_AK_Ambient_3D_C.ReceiveBeginPlay
	// void ReceiveBeginPlay();                                                                                                 // [0x3a334c0] Event|Protected|BlueprintEvent 
	// Function /Game/WwiseAudio/AKAudioComponent/LevelActor/BP_AK_Ambient_3D.BP_AK_Ambient_3D_C.ExecuteUbergraph_BP_AK_Ambient_3D
	// void ExecuteUbergraph_BP_AK_Ambient_3D(int32_t EntryPoint);                                                              // [0x3a334c0] Final                
};

/// Enum /Game/WwiseAudio/Enum/PcFootStepState.PcFootStepState
/// Size: 0x11
enum class PcFootStepState : uint8_t
{
	PcFootStepState__NewEnumerator5                                                  = 0,
	PcFootStepState__NewEnumerator4                                                  = 1,
	PcFootStepState__NewEnumerator1                                                  = 2,
	PcFootStepState__NewEnumerator2                                                  = 3,
	PcFootStepState__NewEnumerator6                                                  = 4,
	PcFootStepState__NewEnumerator3                                                  = 5,
	PcFootStepState__NewEnumerator8                                                  = 6,
	PcFootStepState__NewEnumerator7                                                  = 7,
	PcFootStepState__NewEnumerator9                                                  = 8,
	PcFootStepState__NewEnumerator10                                                 = 9,
	PcFootStepState__NewEnumerator11                                                 = 10
};

/// Enum /Game/WwiseAudio/Enum/AmbientObjectType.AmbientObjectType
/// Size: 0x03
enum class AmbientObjectType : uint8_t
{
	AmbientObjectType__NewEnumerator1                                                = 0,
	AmbientObjectType__NewEnumerator2                                                = 1,
	AmbientObjectType__NewEnumerator3                                                = 2
};

