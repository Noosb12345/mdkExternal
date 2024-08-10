
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AnimationCore
/// dependency: Constraints
/// dependency: CoreUObject
/// dependency: DeveloperSettings
/// dependency: Engine
/// dependency: LevelSequence
/// dependency: MovieScene
/// dependency: MovieSceneTracks
/// dependency: RigVM

/// Struct /Script/ControlRig.RigElementKey
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigElementKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(ERigElementType)                           Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x4, 8, 0, 0})
};

/// Class /Script/ControlRig.RigHierarchy
/// Size: 0x0348 (0x000028 - 0x000370)
class URigHierarchy : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 880;

public:
	DMember(uint16_t)                                  TopologyVersion                                             OFFSET(get<uint16_t>, {0x88, 2, 0, 0})
	DMember(uint16_t)                                  MetadataVersion                                             OFFSET(get<uint16_t>, {0x8A, 2, 0, 0})
	DMember(uint16_t)                                  MetadataTagVersion                                          OFFSET(get<uint16_t>, {0x8C, 2, 0, 0})
	DMember(bool)                                      bEnableDirtyPropagation                                     OFFSET(get<bool>, {0x8E, 1, 0, 0})
	DMember(int32_t)                                   TransformStackIndex                                         OFFSET(get<int32_t>, {0x128, 4, 0, 0})
	CMember(class URigHierarchyController*)            HierarchyController                                         OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(TMap<FRigElementKey, FRigElementKey>)      PreviousNameMap                                             OFFSET(get<T>, {0x200, 80, 0, 0})
	CMember(class URigHierarchy*)                      HierarchyForCacheValidation                                 OFFSET(get<T>, {0x2D0, 8, 0, 0})


	/// Functions
	// Function /Script/ControlRig.RigHierarchy.UnsetCurveValueByIndex
	// void UnsetCurveValueByIndex(int32_t InElementIndex, bool bSetupUndo);                                                    // [0x1652c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.UnsetCurveValue
	// void UnsetCurveValue(FRigElementKey InKey, bool bSetupUndo);                                                             // [0x1652e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SwitchToWorldSpace
	// bool SwitchToWorldSpace(FRigElementKey InChild, bool bInitial, bool bAffectChildren);                                    // [0x164ebd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SwitchToParent
	// bool SwitchToParent(FRigElementKey InChild, FRigElementKey InParent, bool bInitial, bool bAffectChildren);               // [0x164f0f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SwitchToDefaultParent
	// bool SwitchToDefaultParent(FRigElementKey InChild, bool bInitial, bool bAffectChildren);                                 // [0x164ee60] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SortKeys
	// TArray<FRigElementKey> SortKeys(TArray<FRigElementKey>& InKeys);                                                         // [0x1658980] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.SetVectorMetadata
	// bool SetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector InValue);                                    // [0x165dfb0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetVectorArrayMetadata
	// bool SetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FVector> InValue);                       // [0x165dbf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetTransformMetadata
	// bool SetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform InValue);                              // [0x165b480] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetTransformArrayMetadata
	// bool SetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FTransform> InValue);                 // [0x165b0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetTag
	// bool SetTag(FRigElementKey InItem, FName InTag);                                                                         // [0x1658ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRotatorMetadata
	// bool SetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator InValue);                                  // [0x165d150] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRotatorArrayMetadata
	// bool SetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRotator> InValue);                     // [0x165cd70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRigElementKeyMetadata
	// bool SetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey InValue);                      // [0x16597e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetRigElementKeyArrayMetadata
	// bool SetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FRigElementKey> InValue);         // [0x1659400] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetQuatMetadata
	// bool SetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat InValue);                                        // [0x165c310] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetQuatArrayMetadata
	// bool SetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FQuat> InValue);                           // [0x165bf50] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetPose_ForBlueprint
	// void SetPose_ForBlueprint(FRigPose InPose);                                                                              // [0x164dd70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetParentWeightArray
	// bool SetParentWeightArray(FRigElementKey InChild, TArray<FRigElementWeight> InWeights, bool bInitial, bool bAffectChildren); // [0x164f3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetParentWeight
	// bool SetParentWeight(FRigElementKey InChild, FRigElementKey InParent, FRigElementWeight InWeight, bool bInitial, bool bAffectChildren); // [0x164f7f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetNameMetadata
	// bool SetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName InValue);                                        // [0x165ede0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetNameArrayMetadata
	// bool SetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FName> InValue);                           // [0x165ea20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLocalTransformByIndex
	// void SetLocalTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x1657a60] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLocalTransform
	// void SetLocalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x1657f00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLinearColorMetadata
	// bool SetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor InValue);                          // [0x165a630] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetLinearColorArrayMetadata
	// bool SetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<FLinearColor> InValue);             // [0x165a260] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetInt32Metadata
	// bool SetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32_t InValue);                                     // [0x165fae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetInt32ArrayMetadata
	// bool SetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<int32_t> InValue);                        // [0x165f720] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetGlobalTransformByIndex
	// void SetGlobalTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // [0x1656b40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetGlobalTransform
	// void SetGlobalTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommand); // [0x1656fe0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetFloatMetadata
	// bool SetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float InValue);                                       // [0x1660950] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetFloatArrayMetadata
	// bool SetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<float> InValue);                          // [0x1660570] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetCurveValueByIndex
	// void SetCurveValueByIndex(int32_t InElementIndex, float InValue, bool bSetupUndo);                                       // [0x16530a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetCurveValue
	// void SetCurveValue(FRigElementKey InKey, float InValue, bool bSetupUndo);                                                // [0x1653330] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlVisibilityByIndex
	// void SetControlVisibilityByIndex(int32_t InElementIndex, bool bVisibility);                                              // [0x1653ca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlVisibility
	// void SetControlVisibility(FRigElementKey InKey, bool bVisibility);                                                       // [0x1653ea0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlValueByIndex
	// void SetControlValueByIndex(int32_t InElementIndex, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // [0x1654100] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlValue
	// void SetControlValue(FRigElementKey InKey, FRigControlValue InValue, ERigControlValueType InValueType, bool bSetupUndo, bool bPrintPythonCommands); // [0x1654540] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlShapeTransformByIndex
	// void SetControlShapeTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bSetupUndo);    // [0x1651b10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlShapeTransform
	// void SetControlShapeTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bSetupUndo);             // [0x1651ea0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlSettingsByIndex
	// void SetControlSettingsByIndex(int32_t InElementIndex, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // [0x16511e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlSettings
	// void SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo, bool bForce, bool bPrintPythonCommands); // [0x16515e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotatorByIndex
	// void SetControlPreferredRotatorByIndex(int32_t InElementIndex, FRotator& InValue, bool bInitial, bool bFixEulerFlips);   // [0x1654a50] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlPreferredRotator
	// void SetControlPreferredRotator(FRigElementKey InKey, FRotator& InValue, bool bInitial, bool bFixEulerFlips);            // [0x1654d70] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlOffsetTransformByIndex
	// void SetControlOffsetTransformByIndex(int32_t InElementIndex, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x16522c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetControlOffsetTransform
	// void SetControlOffsetTransform(FRigElementKey InKey, FTransform InTransform, bool bInitial, bool bAffectChildren, bool bSetupUndo, bool bPrintPythonCommands); // [0x1652740] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetBoolMetadata
	// bool SetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool InValue);                                         // [0x16617c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SetBoolArrayMetadata
	// bool SetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName, TArray<bool> InValue);                            // [0x1661400] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.SendAutoKeyEvent
	// void SendAutoKeyEvent(FRigElementKey InElement, float InOffsetInSeconds, bool bAsynchronous);                            // [0x164e3c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.ResetToDefault
	// void ResetToDefault();                                                                                                   // [0x1665a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.ResetPoseToInitial
	// void ResetPoseToInitial(ERigElementType InTypeFilter);                                                                   // [0x16654c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.ResetCurveValues
	// void ResetCurveValues();                                                                                                 // [0x1665430] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.Reset
	// void Reset();                                                                                                            // [0x1665a30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.RemoveMetadata
	// bool RemoveMetadata(FRigElementKey InItem, FName InMetadataName);                                                        // [0x1662430] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.RemoveAllMetadata
	// bool RemoveAllMetadata(FRigElementKey InItem);                                                                           // [0x1662260] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.Num
	// int32_t Num();                                                                                                           // [0x1665410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromVector2D
	// FRigControlValue MakeControlValueFromVector2D(FVector2D InValue);                                                        // [0x164d590] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromVector
	// FRigControlValue MakeControlValueFromVector(FVector InValue);                                                            // [0x164d330] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromTransformNoScale
	// FRigControlValue MakeControlValueFromTransformNoScale(FTransformNoScale InValue);                                        // [0x164c6a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromTransform
	// FRigControlValue MakeControlValueFromTransform(FTransform InValue);                                                      // [0x164cd10] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromRotator
	// FRigControlValue MakeControlValueFromRotator(FRotator InValue);                                                          // [0x164d080] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromInt
	// FRigControlValue MakeControlValueFromInt(int32_t InValue);                                                               // [0x164d850] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromFloat
	// FRigControlValue MakeControlValueFromFloat(float InValue);                                                               // [0x164daa0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromEulerTransform
	// FRigControlValue MakeControlValueFromEulerTransform(FEulerTransform InValue);                                            // [0x164c9a0] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.MakeControlValueFromBool
	// FRigControlValue MakeControlValueFromBool(bool InValue);                                                                 // [0x164dc30] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.IsValidIndex
	// bool IsValidIndex(int32_t InElementIndex);                                                                               // [0x1665310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsSelectedByIndex
	// bool IsSelectedByIndex(int32_t InIndex);                                                                                 // [0x1658ad0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsSelected
	// bool IsSelected(FRigElementKey InKey);                                                                                   // [0x1658be0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsProcedural
	// bool IsProcedural(FRigElementKey& InKey);                                                                                // [0x1665020] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsParentedTo
	// bool IsParentedTo(FRigElementKey InChild, FRigElementKey InParent);                                                      // [0x164e790] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsCurveValueSetByIndex
	// bool IsCurveValueSetByIndex(int32_t InElementIndex);                                                                     // [0x1653690] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsCurveValueSet
	// bool IsCurveValueSet(FRigElementKey InKey);                                                                              // [0x16537b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.IsControllerAvailable
	// bool IsControllerAvailable();                                                                                            // [0x164e3a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.HasTag
	// bool HasTag(FRigElementKey InItem, FName InTag);                                                                         // [0x16590a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetVectorMetadata
	// FVector GetVectorMetadata(FRigElementKey InItem, FName InMetadataName, FVector DefaultValue);                            // [0x165e6a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetVectorFromControlValue
	// FVector GetVectorFromControlValue(FRigControlValue InValue);                                                             // [0x164d210] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetVectorArrayMetadata
	// TArray<FVector> GetVectorArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                     // [0x165e350] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetVector2DFromControlValue
	// FVector2D GetVector2DFromControlValue(FRigControlValue InValue);                                                         // [0x164d460] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetTransformNoScaleFromControlValue
	// FTransformNoScale GetTransformNoScaleFromControlValue(FRigControlValue InValue);                                         // [0x164c550] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetTransformMetadata
	// FTransform GetTransformMetadata(FRigElementKey InItem, FName InMetadataName, FTransform DefaultValue);                   // [0x165bb90] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetTransformFromControlValue
	// FTransform GetTransformFromControlValue(FRigControlValue InValue);                                                       // [0x164cbd0] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetTransformArrayMetadata
	// TArray<FTransform> GetTransformArrayMetadata(FRigElementKey InItem, FName InMetadataName);                               // [0x165b840] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetTags
	// TArray<FName> GetTags(FRigElementKey InItem);                                                                            // [0x16592a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetSelectedKeys
	// TArray<FRigElementKey> GetSelectedKeys(ERigElementType InTypeFilter);                                                    // [0x1658db0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRotatorMetadata
	// FRotator GetRotatorMetadata(FRigElementKey InItem, FName InMetadataName, FRotator DefaultValue);                         // [0x165d870] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRotatorFromControlValue
	// FRotator GetRotatorFromControlValue(FRigControlValue InValue);                                                           // [0x164cf50] Final|Native|Static|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetRotatorArrayMetadata
	// TArray<FRotator> GetRotatorArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                   // [0x165d4f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRootElementKeys
	// TArray<FRigElementKey> GetRootElementKeys();                                                                             // [0x1662bf0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRigidBodyKeys
	// TArray<FRigElementKey> GetRigidBodyKeys(bool bTraverse);                                                                 // [0x1662e50] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRigElementKeyMetadata
	// FRigElementKey GetRigElementKeyMetadata(FRigElementKey InItem, FName InMetadataName, FRigElementKey DefaultValue);       // [0x1659ef0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetRigElementKeyArrayMetadata
	// TArray<FRigElementKey> GetRigElementKeyArrayMetadata(FRigElementKey InItem, FName InMetadataName);                       // [0x1659b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetReferenceKeys
	// TArray<FRigElementKey> GetReferenceKeys(bool bTraverse);                                                                 // [0x1662d10] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetQuatMetadata
	// FQuat GetQuatMetadata(FRigElementKey InItem, FName InMetadataName, FQuat DefaultValue);                                  // [0x165c9f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetQuatArrayMetadata
	// TArray<FQuat> GetQuatArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                         // [0x165c6a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetPreviousParent
	// FRigElementKey GetPreviousParent(FRigElementKey& InKey);                                                                 // [0x164c280] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetPreviousName
	// FName GetPreviousName(FRigElementKey& InKey);                                                                            // [0x164c3f0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetPose
	// FRigPose GetPose(bool bInitial);                                                                                         // [0x164e070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentWeightArray
	// TArray<FRigElementWeight> GetParentWeightArray(FRigElementKey InChild, bool bInitial);                                   // [0x164fb80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentWeight
	// FRigElementWeight GetParentWeight(FRigElementKey InChild, FRigElementKey InParent, bool bInitial);                       // [0x164fe40] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentTransformByIndex
	// FTransform GetParentTransformByIndex(int32_t InElementIndex, bool bInitial);                                             // [0x1650d10] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParentTransform
	// FTransform GetParentTransform(FRigElementKey InKey, bool bInitial);                                                      // [0x1650f10] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetParents
	// TArray<FRigElementKey> GetParents(FRigElementKey InKey, bool bRecursive);                                                // [0x16508f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNumberOfParents
	// int32_t GetNumberOfParents(FRigElementKey InKey);                                                                        // [0x1650370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNullKeys
	// TArray<FRigElementKey> GetNullKeys(bool bTraverse);                                                                      // [0x1663310] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNameMetadata
	// FName GetNameMetadata(FRigElementKey InItem, FName InMetadataName, FName DefaultValue);                                  // [0x165f380] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetNameArrayMetadata
	// TArray<FName> GetNameArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                         // [0x165f190] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetMetadataType
	// ERigMetadataType GetMetadataType(FRigElementKey InItem, FName InMetadataName);                                           // [0x16626c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.RigHierarchy.GetMetadataNames
	// TArray<FName> GetMetadataNames(FRigElementKey InItem);                                                                   // [0x1662960] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.RigHierarchy.GetLocalTransformByIndex
	// FTransform GetLocalTransformByIndex(int32_t InElementIndex, bool bInitial);                                              // [0x1658460] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalTransform
	// FTransform GetLocalTransform(FRigElementKey InKey, bool bInitial);                                                       // [0x1658680] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalIndex_ForBlueprint
	// int32_t GetLocalIndex_ForBlueprint(FRigElementKey InKey);                                                                // [0x1664b80] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalControlShapeTransformByIndex
	// FTransform GetLocalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial);                                  // [0x1656160] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLocalControlShapeTransform
	// FTransform GetLocalControlShapeTransform(FRigElementKey InKey, bool bInitial);                                           // [0x1656370] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLinearColorMetadata
	// FLinearColor GetLinearColorMetadata(FRigElementKey InItem, FName InMetadataName, FLinearColor DefaultValue);             // [0x165ad40] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetLinearColorArrayMetadata
	// TArray<FLinearColor> GetLinearColorArrayMetadata(FRigElementKey InItem, FName InMetadataName);                           // [0x165a9c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetKeys
	// TArray<FRigElementKey> GetKeys(TArray<int32_t> InElementIndices);                                                        // [0x1664820] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetKey
	// FRigElementKey GetKey(int32_t InElementIndex);                                                                           // [0x1664a60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetIntFromControlValue
	// int32_t GetIntFromControlValue(FRigControlValue InValue);                                                                // [0x164d740] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetInt32Metadata
	// int32_t GetInt32Metadata(FRigElementKey InItem, FName InMetadataName, int32_t DefaultValue);                             // [0x16601e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetInt32ArrayMetadata
	// TArray<int32_t> GetInt32ArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                      // [0x165fe90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetIndex_ForBlueprint
	// int32_t GetIndex_ForBlueprint(FRigElementKey InKey);                                                                     // [0x1664e60] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalTransformByIndex
	// FTransform GetGlobalTransformByIndex(int32_t InElementIndex, bool bInitial);                                             // [0x1657540] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalTransform
	// FTransform GetGlobalTransform(FRigElementKey InKey, bool bInitial);                                                      // [0x1657760] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlShapeTransformByIndex
	// FTransform GetGlobalControlShapeTransformByIndex(int32_t InElementIndex, bool bInitial);                                 // [0x1655c70] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlShapeTransform
	// FTransform GetGlobalControlShapeTransform(FRigElementKey InKey, bool bInitial);                                          // [0x1655e80] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlOffsetTransformByIndex
	// FTransform GetGlobalControlOffsetTransformByIndex(int32_t InElementIndex, bool bInitial);                                // [0x1656650] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetGlobalControlOffsetTransform
	// FTransform GetGlobalControlOffsetTransform(FRigElementKey InKey, bool bInitial);                                         // [0x1656860] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetFloatMetadata
	// float GetFloatMetadata(FRigElementKey InItem, FName InMetadataName, float DefaultValue);                                 // [0x1661070] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetFloatFromControlValue
	// float GetFloatFromControlValue(FRigControlValue InValue);                                                                // [0x164d990] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetFloatArrayMetadata
	// TArray<float> GetFloatArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                        // [0x1660d00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetFirstParent
	// FRigElementKey GetFirstParent(FRigElementKey InKey);                                                                     // [0x1650580] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetEulerTransformFromControlValue
	// FEulerTransform GetEulerTransformFromControlValue(FRigControlValue InValue);                                             // [0x164c810] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetDefaultParent
	// FRigElementKey GetDefaultParent(FRigElementKey InKey);                                                                   // [0x16507d0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetCurveValueByIndex
	// float GetCurveValueByIndex(int32_t InElementIndex);                                                                      // [0x1653990] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetCurveValue
	// float GetCurveValue(FRigElementKey InKey);                                                                               // [0x1653ac0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetCurveKeys
	// TArray<FRigElementKey> GetCurveKeys();                                                                                   // [0x1662f90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlValueByIndex
	// FRigControlValue GetControlValueByIndex(int32_t InElementIndex, ERigControlValueType InValueType);                       // [0x16556c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlValue
	// FRigControlValue GetControlValue(FRigElementKey InKey, ERigControlValueType InValueType);                                // [0x1655930] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredRotatorByIndex
	// FRotator GetControlPreferredRotatorByIndex(int32_t InElementIndex, bool bInitial);                                       // [0x1655140] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetControlPreferredRotator
	// FRotator GetControlPreferredRotator(FRigElementKey InKey, bool bInitial);                                                // [0x16553a0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetController
	// class URigHierarchyController* GetController(bool bCreateIfNeeded);                                                      // [0x164e2a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.GetControlKeys
	// TArray<FRigElementKey> GetControlKeys(bool bTraverse);                                                                   // [0x1663110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetChildren
	// TArray<FRigElementKey> GetChildren(FRigElementKey InKey, bool bRecursive);                                               // [0x1650b00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetBoolMetadata
	// bool GetBoolMetadata(FRigElementKey InItem, FName InMetadataName, bool DefaultValue);                                    // [0x1661ec0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetBoolArrayMetadata
	// TArray<bool> GetBoolArrayMetadata(FRigElementKey InItem, FName InMetadataName);                                          // [0x1661b70] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetBoneKeys
	// TArray<FRigElementKey> GetBoneKeys(bool bTraverse);                                                                      // [0x1663450] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.GetAllKeys_ForBlueprint
	// TArray<FRigElementKey> GetAllKeys_ForBlueprint(bool bTraverse);                                                          // [0x164e630] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.FindNull_ForBlueprintOnly
	// FRigNullElement FindNull_ForBlueprintOnly(FRigElementKey& InKey);                                                        // [0x1663650] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.FindControl_ForBlueprintOnly
	// FRigControlElement FindControl_ForBlueprintOnly(FRigElementKey& InKey);                                                  // [0x1663970] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.FindBone_ForBlueprintOnly
	// FRigBoneElement FindBone_ForBlueprintOnly(FRigElementKey& InKey);                                                        // [0x1663f30] Final|Native|Private|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchy.CopyPose
	// void CopyPose(class URigHierarchy* InHierarchy, bool bCurrent, bool bInitial, bool bWeights, bool bMatchPoseInGlobalIfNeeded); // [0x16655b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.CopyHierarchy
	// void CopyHierarchy(class URigHierarchy* InHierarchy);                                                                    // [0x1665920] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchy.Contains_ForBlueprint
	// bool Contains_ForBlueprint(FRigElementKey InKey);                                                                        // [0x1665150] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.TransformableControlHandle
/// Size: 0x0038 (0x000058 - 0x000090)
class UTransformableControlHandle : public UTransformableHandle
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(TWeakObjectPtr<class UControlRig*>)        ControlRig                                                  OFFSET(get<T>, {0x58, 8, 0, 0})
	SMember(FName)                                     ControlName                                                 OFFSET(getStruct<T>, {0x88, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigHierarchySettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FRigHierarchySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ProceduralElementLimit                                      OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigControlElementCustomization
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigControlElementCustomization : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FRigElementKey>)                    AvailableSpaces                                             OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FRigElementKey>)                    RemovedSpaces                                               OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigInfluenceEntry
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigInfluenceEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKey)                            Source                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	CMember(TArray<FRigElementKey>)                    AffectedList                                                OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigInfluenceMap
/// Size: 0x0068 (0x000000 - 0x000068)
class FRigInfluenceMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	SMember(FName)                                     EventName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TArray<FRigInfluenceEntry>)                Entries                                                     OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TMap<FRigElementKey, int32_t>)             KeyToIndex                                                  OFFSET(get<T>, {0x18, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigInfluenceMapPerEvent
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigInfluenceMapPerEvent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FRigInfluenceMap>)                  Maps                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<FName, int32_t>)                      EventToIndex                                                OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Class /Script/ControlRig.ControlRig
/// Size: 0x0278 (0x000180 - 0x0003F8)
class UControlRig : public URigVMHost
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1016;

public:
	CMember(ERigExecutionType)                         ExecutionType                                               OFFSET(get<T>, {0x188, 1, 0, 0})
	SMember(FRigHierarchySettings)                     HierarchySettings                                           OFFSET(getStruct<T>, {0x18C, 4, 0, 0})
	CMember(TMap<FRigElementKey, FRigControlElementCustomization>) ControlCustomizations                           OFFSET(get<T>, {0x190, 80, 0, 0})
	CMember(class URigHierarchy*)                      DynamicHierarchy                                            OFFSET(get<T>, {0x1E0, 8, 0, 0})
	CMember(TArray<TWeakObjectPtr<UControlRigShapeLibrary*>>) ShapeLibraries                                       OFFSET(get<T>, {0x1E8, 16, 0, 0})
	CMember(class UAnimationDataSourceRegistry*)       DataSourceRegistry                                          OFFSET(get<T>, {0x210, 8, 0, 0})
	SMember(FRigInfluenceMapPerEvent)                  Influences                                                  OFFSET(getStruct<T>, {0x2A8, 96, 0, 0})
	CMember(class UControlRig*)                        InteractionRig                                              OFFSET(get<T>, {0x308, 8, 0, 0})
	CMember(class UClass*)                             InteractionRigClass                                         OFFSET(get<T>, {0x310, 8, 0, 0})
	SMember(FMulticastSparseDelegate)                  OnControlSelected_BP                                        OFFSET(getStruct<T>, {0x3D8, 1, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRig.SetInteractionRigClass
	// void SetInteractionRigClass(class UClass* InInteractionRigClass);                                                        // [0x167b170] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SetInteractionRig
	// void SetInteractionRig(class UControlRig* InInteractionRig);                                                             // [0x167b3d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.SelectControl
	// void SelectControl(FName& InControlName, bool bSelect);                                                                  // [0x167b690] Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.RequestConstruction
	// void RequestConstruction();                                                                                              // [0x167b820] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.OnControlSelectedBP__DelegateSignature
	// void OnControlSelectedBP__DelegateSignature(class UControlRig* Rig, FRigControlElement& Control, bool bSelected);        // [0x3a334c0] MulticastDelegate|Public|Delegate|HasOutParms 
	// Function /Script/ControlRig.ControlRig.IsControlSelected
	// bool IsControlSelected(FName& InControlName);                                                                            // [0x167b4e0] Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetInteractionRigClass
	// class UClass* GetInteractionRigClass();                                                                                  // [0x167b3b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetInteractionRig
	// class UControlRig* GetInteractionRig();                                                                                  // [0x167b4c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetHostingActor
	// class AActor* GetHostingActor();                                                                                         // [0x167b870] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.GetHierarchy
	// class URigHierarchy* GetHierarchy();                                                                                     // [0x167b850] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRig.FindControlRigs
	// TArray<UControlRig*> FindControlRigs(class UObject* Outer, class UClass* OptionalClass);                                 // [0x167ba50] Final|Native|Static|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRig.CurrentControlSelection
	// TArray<FName> CurrentControlSelection();                                                                                 // [0x167b5e0] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.CreateTransformableControlHandle
	// class UTransformableControlHandle* CreateTransformableControlHandle(class UObject* Outer, FName& ControlName);           // [0x167b8c0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRig.ClearControlSelection
	// bool ClearControlSelection();                                                                                            // [0x167b660] Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigAnimInstance
/// Size: 0x0008 (0x000318 - 0x000320)
class UControlRigAnimInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Script/ControlRig.ControlRigBlueprintGeneratedClass
/// Size: 0x0000 (0x000390 - 0x000390)
class UControlRigBlueprintGeneratedClass : public URigVMBlueprintGeneratedClass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 912;

public:
};

/// Struct /Script/ControlRig.ControlRigComponentMappedElement
/// Size: 0x00A0 (0x000000 - 0x0000A0)
class FControlRigComponentMappedElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FComponentReference)                       ComponentReference                                          OFFSET(getStruct<T>, {0x0, 40, 0, 0})
	DMember(int32_t)                                   TransformIndex                                              OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	SMember(FName)                                     TransformName                                               OFFSET(getStruct<T>, {0x2C, 8, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x34, 1, 0, 0})
	SMember(FName)                                     ElementName                                                 OFFSET(getStruct<T>, {0x38, 8, 0, 0})
	CMember(EControlRigComponentMapDirection)          Direction                                                   OFFSET(get<T>, {0x40, 1, 0, 0})
	SMember(FTransform)                                Offset                                                      OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x80, 4, 0, 0})
	CMember(EControlRigComponentSpace)                 Space                                                       OFFSET(get<T>, {0x84, 1, 0, 0})
	CMember(class USceneComponent*)                    SceneComponent                                              OFFSET(get<T>, {0x88, 8, 0, 0})
	DMember(int32_t)                                   ElementIndex                                                OFFSET(get<int32_t>, {0x90, 4, 0, 0})
	DMember(int32_t)                                   SubIndex                                                    OFFSET(get<int32_t>, {0x94, 4, 0, 0})
};

/// Class /Script/ControlRig.ControlRigComponent
/// Size: 0x0168 (0x000478 - 0x0005E0)
class UControlRigComponent : public UPrimitiveComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1504;

public:
	CMember(class UClass*)                             ControlRigClass                                             OFFSET(get<T>, {0x478, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreInitializeDelegate                                     OFFSET(getStruct<T>, {0x480, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostInitializeDelegate                                    OFFSET(getStruct<T>, {0x490, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreConstructionDelegate                                   OFFSET(getStruct<T>, {0x4A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostConstructionDelegate                                  OFFSET(getStruct<T>, {0x4B0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPreForwardsSolveDelegate                                  OFFSET(getStruct<T>, {0x4C0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnPostForwardsSolveDelegate                                 OFFSET(getStruct<T>, {0x4D0, 16, 0, 0})
	CMember(TArray<FControlRigComponentMappedElement>) UserDefinedElements                                         OFFSET(get<T>, {0x4E0, 16, 0, 0})
	CMember(TArray<FControlRigComponentMappedElement>) MappedElements                                              OFFSET(get<T>, {0x4F0, 16, 0, 0})
	DMember(bool)                                      bEnableLazyEvaluation                                       OFFSET(get<bool>, {0x500, 1, 0, 0})
	DMember(float)                                     LazyEvaluationPositionThreshold                             OFFSET(get<float>, {0x504, 4, 0, 0})
	DMember(float)                                     LazyEvaluationRotationThreshold                             OFFSET(get<float>, {0x508, 4, 0, 0})
	DMember(float)                                     LazyEvaluationScaleThreshold                                OFFSET(get<float>, {0x50C, 4, 0, 0})
	DMember(bool)                                      bResetTransformBeforeTick                                   OFFSET(get<bool>, {0x510, 1, 0, 0})
	DMember(bool)                                      bResetInitialsBeforeConstruction                            OFFSET(get<bool>, {0x511, 1, 0, 0})
	DMember(bool)                                      bUpdateRigOnTick                                            OFFSET(get<bool>, {0x512, 1, 0, 0})
	DMember(bool)                                      bUpdateInEditor                                             OFFSET(get<bool>, {0x513, 1, 0, 0})
	DMember(bool)                                      bDrawBones                                                  OFFSET(get<bool>, {0x514, 1, 0, 0})
	DMember(bool)                                      bShowDebugDrawing                                           OFFSET(get<bool>, {0x515, 1, 0, 0})
	CMember(class UControlRig*)                        ControlRig                                                  OFFSET(get<T>, {0x518, 8, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRigComponent.Update
	// void Update(float DeltaTime);                                                                                            // [0x168a140] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetObjectBinding
	// void SetObjectBinding(class UObject* InObjectToBind);                                                                    // [0x1685440] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetMappedElements
	// void SetMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                     // [0x1689eb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialSpaceTransform
	// void SetInitialSpaceTransform(FName SpaceName, FTransform InitialTransform, EControlRigComponentSpace Space);            // [0x1685620] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetInitialBoneTransform
	// void SetInitialBoneTransform(FName BoneName, FTransform InitialTransform, EControlRigComponentSpace Space, bool bPropagateToChildren); // [0x1688760] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlVector2D
	// void SetControlVector2D(FName ControlName, FVector2D Value);                                                             // [0x1687170] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlTransform
	// void SetControlTransform(FName ControlName, FTransform Value, EControlRigComponentSpace Space);                          // [0x1686400] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlScale
	// void SetControlScale(FName ControlName, FVector Value, EControlRigComponentSpace Space);                                 // [0x1686710] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlRotator
	// void SetControlRotator(FName ControlName, FRotator Value, EControlRigComponentSpace Space);                              // [0x1686b30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlRigClass
	// void SetControlRigClass(class UClass* InControlRigClass);                                                                // [0x1685530] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlPosition
	// void SetControlPosition(FName ControlName, FVector Value, EControlRigComponentSpace Space);                              // [0x1686d50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlOffset
	// void SetControlOffset(FName ControlName, FTransform OffsetTransform, EControlRigComponentSpace Space);                   // [0x1685e30] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlInt
	// void SetControlInt(FName ControlName, int32_t Value);                                                                    // [0x16873b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlFloat
	// void SetControlFloat(FName ControlName, float Value);                                                                    // [0x16875d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetControlBool
	// void SetControlBool(FName ControlName, bool Value);                                                                      // [0x1687820] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneTransform
	// void SetBoneTransform(FName BoneName, FTransform Transform, EControlRigComponentSpace Space, float Weight, bool bPropagateToChildren); // [0x1688a50] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.SetBoneInitialTransformsFromSkeletalMesh
	// void SetBoneInitialTransformsFromSkeletalMesh(class USkeletalMesh* InSkeletalMesh);                                      // [0x1689750] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.OnPreInitialize
	// void OnPreInitialize(class UControlRigComponent* Component);                                                             // [0x168a700] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPreForwardsSolve
	// void OnPreForwardsSolve(class UControlRigComponent* Component);                                                          // [0x168a340] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPreConstruction
	// void OnPreConstruction(class UControlRigComponent* Component);                                                           // [0x168a520] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostInitialize
	// void OnPostInitialize(class UControlRigComponent* Component);                                                            // [0x168a610] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostForwardsSolve
	// void OnPostForwardsSolve(class UControlRigComponent* Component);                                                         // [0x168a250] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.OnPostConstruction
	// void OnPostConstruction(class UControlRigComponent* Component);                                                          // [0x168a430] Native|Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigComponent.Initialize
	// void Initialize();                                                                                                       // [0x168a230] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetSpaceTransform
	// FTransform GetSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                          // [0x1685bb0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialSpaceTransform
	// FTransform GetInitialSpaceTransform(FName SpaceName, EControlRigComponentSpace Space);                                   // [0x1685930] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetInitialBoneTransform
	// FTransform GetInitialBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                     // [0x1688de0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetElementNames
	// TArray<FName> GetElementNames(ERigElementType ElementType);                                                              // [0x1689590] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlVector2D
	// FVector2D GetControlVector2D(FName ControlName);                                                                         // [0x1688170] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlTransform
	// FTransform GetControlTransform(FName ControlName, EControlRigComponentSpace Space);                                      // [0x1687a30] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlScale
	// FVector GetControlScale(FName ControlName, EControlRigComponentSpace Space);                                             // [0x1687bf0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRotator
	// FRotator GetControlRotator(FName ControlName, EControlRigComponentSpace Space);                                          // [0x1687dc0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlRig
	// class UControlRig* GetControlRig();                                                                                      // [0x168a8a0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlPosition
	// FVector GetControlPosition(FName ControlName, EControlRigComponentSpace Space);                                          // [0x1687fa0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlOffset
	// FTransform GetControlOffset(FName ControlName, EControlRigComponentSpace Space);                                         // [0x1686190] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.GetControlInt
	// int32_t GetControlInt(FName ControlName);                                                                                // [0x1688310] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlFloat
	// float GetControlFloat(FName ControlName);                                                                                // [0x1688480] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetControlBool
	// bool GetControlBool(FName ControlName);                                                                                  // [0x16885f0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetBoneTransform
	// FTransform GetBoneTransform(FName BoneName, EControlRigComponentSpace Space);                                            // [0x16890d0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.GetAbsoluteTime
	// float GetAbsoluteTime();                                                                                                 // [0x168a7f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigComponent.DoesElementExist
	// bool DoesElementExist(FName Name, ERigElementType ElementType);                                                          // [0x16893c0] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.ClearMappedElements
	// void ClearMappedElements();                                                                                              // [0x168a120] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.CanExecute
	// bool CanExecute();                                                                                                       // [0x168a830] Final|Native|Public|BlueprintCallable|BlueprintPure 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedSkeletalMesh
	// void AddMappedSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent, TArray<FControlRigComponentMappedBone> Bones, TArray<FControlRigComponentMappedCurve> Curves); // [0x1689970] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedElements
	// void AddMappedElements(TArray<FControlRigComponentMappedElement> NewMappedElements);                                     // [0x1689d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedComponents
	// void AddMappedComponents(TArray<FControlRigComponentMappedComponent> Components);                                        // [0x1689c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigComponent.AddMappedCompleteSkeletalMesh
	// void AddMappedCompleteSkeletalMesh(class USkeletalMeshComponent* SkeletalMeshComponent);                                 // [0x1689860] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigControlActor
/// Size: 0x00B8 (0x000248 - 0x000300)
class AControlRigControlActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(class AActor*)                             ActorToTrack                                                OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class UClass*)                             ControlRigClass                                             OFFSET(get<T>, {0x250, 8, 0, 0})
	DMember(bool)                                      bRefreshOnTick                                              OFFSET(get<bool>, {0x258, 1, 0, 0})
	DMember(bool)                                      bIsSelectable                                               OFFSET(get<bool>, {0x259, 1, 0, 0})
	CMember(class UMaterialInterface*)                 MaterialOverride                                            OFFSET(get<T>, {0x260, 8, 0, 0})
	SMember(FString)                                   ColorParameter                                              OFFSET(getStruct<T>, {0x268, 16, 0, 0})
	DMember(bool)                                      bCastShadows                                                OFFSET(get<bool>, {0x278, 1, 0, 0})
	CMember(class USceneComponent*)                    ActorRootComponent                                          OFFSET(get<T>, {0x280, 8, 0, 0})
	CMember(TWeakObjectPtr<class UControlRig*>)        ControlRig                                                  OFFSET(get<T>, {0x288, 8, 0, 0})
	CMember(TArray<FName>)                             ControlNames                                                OFFSET(get<T>, {0x2B8, 16, 0, 0})
	CMember(TArray<FTransform>)                        ShapeTransforms                                             OFFSET(get<T>, {0x2C8, 16, 0, 0})
	CMember(TArray<class UStaticMeshComponent*>)       Components                                                  OFFSET(get<T>, {0x2D8, 16, 0, 0})
	CMember(TArray<class UMaterialInstanceDynamic*>)   Materials                                                   OFFSET(get<T>, {0x2E8, 16, 0, 0})
	SMember(FName)                                     ColorParameterName                                          OFFSET(getStruct<T>, {0x2F8, 8, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRigControlActor.ResetControlActor
	// void ResetControlActor();                                                                                                // [0x1693900] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigControlActor.Refresh
	// void Refresh();                                                                                                          // [0x16938c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigControlActor.Clear
	// void Clear();                                                                                                            // [0x16938e0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigShapeActor
/// Size: 0x0048 (0x000248 - 0x000290)
class AControlRigShapeActor : public AActor
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 656;

public:
	CMember(class USceneComponent*)                    ActorRootComponent                                          OFFSET(get<T>, {0x248, 8, 0, 0})
	CMember(class UStaticMeshComponent*)               StaticMeshComponent                                         OFFSET(get<T>, {0x250, 8, 0, 0})
	DMember(uint32_t)                                  ControlRigIndex                                             OFFSET(get<uint32_t>, {0x258, 4, 0, 0})
	CMember(TWeakObjectPtr<class UControlRig*>)        ControlRig                                                  OFFSET(get<T>, {0x25C, 8, 0, 0})
	SMember(FName)                                     ControlName                                                 OFFSET(getStruct<T>, {0x264, 8, 0, 0})
	SMember(FName)                                     ShapeName                                                   OFFSET(getStruct<T>, {0x26C, 8, 0, 0})
	SMember(FName)                                     ColorParameterName                                          OFFSET(getStruct<T>, {0x274, 8, 0, 0})
	DMember(bool)                                      bSelected                                                   OFFSET(get<bool>, {0x28C, 1, 1, 0})
	DMember(bool)                                      bHovered                                                    OFFSET(get<bool>, {0x28C, 1, 1, 1})


	/// Functions
	// Function /Script/ControlRig.ControlRigShapeActor.SetSelected
	// void SetSelected(bool bInSelected);                                                                                      // [0x13c24d0] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetSelectable
	// void SetSelectable(bool bInSelectable);                                                                                  // [0x1695e30] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetHovered
	// void SetHovered(bool bInHovered);                                                                                        // [0x1695d40] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetGlobalTransform
	// void SetGlobalTransform(FTransform& InTransform);                                                                        // [0x1695bd0] Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.SetEnabled
	// void SetEnabled(bool bInEnabled);                                                                                        // [0x13c2390] Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigShapeActor.OnTransformChanged
	// void OnTransformChanged(FTransform& NewTransform);                                                                       // [0x3a334c0] Event|Public|HasOutParms|HasDefaults|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnSelectionChanged
	// void OnSelectionChanged(bool bIsSelected);                                                                               // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnManipulatingChanged
	// void OnManipulatingChanged(bool bIsManipulating);                                                                        // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnHoveredChanged
	// void OnHoveredChanged(bool bIsSelected);                                                                                 // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.OnEnabledChanged
	// void OnEnabledChanged(bool bIsEnabled);                                                                                  // [0x3a334c0] Event|Public|BlueprintEvent 
	// Function /Script/ControlRig.ControlRigShapeActor.IsSelectedInEditor
	// bool IsSelectedInEditor();                                                                                               // [0x1695f20] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigShapeActor.IsHovered
	// bool IsHovered();                                                                                                        // [0x1695d10] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigShapeActor.IsEnabled
	// bool IsEnabled();                                                                                                        // [0x13c2480] Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigShapeActor.GetGlobalTransform
	// FTransform GetGlobalTransform();                                                                                         // [0x1695b50] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/ControlRig.ControlRigShapeDefinition
/// Size: 0x0080 (0x000000 - 0x000080)
class FControlRigShapeDefinition : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FName)                                     ShapeName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	CMember(TWeakObjectPtr<class UStaticMesh*>)        StaticMesh                                                  OFFSET(get<T>, {0x8, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x40, 48, 0, 0})
};

/// Class /Script/ControlRig.ControlRigShapeLibrary
/// Size: 0x0118 (0x000028 - 0x000140)
class UControlRigShapeLibrary : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FControlRigShapeDefinition)                DefaultShape                                                OFFSET(getStruct<T>, {0x30, 128, 0, 0})
	CMember(TWeakObjectPtr<class UMaterial*>)          DefaultMaterial                                             OFFSET(get<T>, {0xB0, 8, 0, 0})
	CMember(TWeakObjectPtr<class UMaterial*>)          XRayMaterial                                                OFFSET(get<T>, {0xE0, 8, 0, 0})
	SMember(FName)                                     MaterialColorParameter                                      OFFSET(getStruct<T>, {0x110, 8, 0, 0})
	CMember(TArray<FControlRigShapeDefinition>)        Shapes                                                      OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigTestDataVariable
/// Size: 0x0020 (0x000000 - 0x000020)
class FControlRigTestDataVariable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     CPPType                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FString)                                   Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.CachedRigElement
/// Size: 0x0020 (0x000000 - 0x000020)
class FCachedRigElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKey)                            Key                                                         OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(uint16_t)                                  Index                                                       OFFSET(get<uint16_t>, {0xC, 2, 0, 0})
	DMember(int32_t)                                   ContainerVersion                                            OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigPoseElement
/// Size: 0x0090 (0x000000 - 0x000090)
class FRigPoseElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FCachedRigElement)                         Index                                                       OFFSET(getStruct<T>, {0x0, 32, 0, 0})
	SMember(FTransform)                                GlobalTransform                                             OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	DMember(float)                                     CurveValue                                                  OFFSET(get<float>, {0x80, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigPose
/// Size: 0x0070 (0x000000 - 0x000070)
class FRigPose : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	CMember(TArray<FRigPoseElement>)                   Elements                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
	DMember(int32_t)                                   HierarchyTopologyVersion                                    OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   PoseHash                                                    OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigTestDataFrame
/// Size: 0x0090 (0x000000 - 0x000090)
class FControlRigTestDataFrame : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(double)                                    AbsoluteTime                                                OFFSET(get<double>, {0x0, 8, 0, 0})
	DMember(double)                                    DeltaTime                                                   OFFSET(get<double>, {0x8, 8, 0, 0})
	CMember(TArray<FControlRigTestDataVariable>)       Variables                                                   OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FRigPose)                                  Pose                                                        OFFSET(getStruct<T>, {0x20, 112, 0, 0})
};

/// Class /Script/ControlRig.ControlRigTestData
/// Size: 0x0128 (0x000028 - 0x000150)
class UControlRigTestData : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FSoftObjectPath)                           ControlRigObjectPath                                        OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FControlRigTestDataFrame)                  Initial                                                     OFFSET(getStruct<T>, {0x48, 144, 0, 0})
	CMember(TArray<FControlRigTestDataFrame>)          InputFrames                                                 OFFSET(get<T>, {0xD8, 16, 0, 0})
	CMember(TArray<FControlRigTestDataFrame>)          OutputFrames                                                OFFSET(get<T>, {0xE8, 16, 0, 0})
	CMember(TArray<int32_t>)                           FramesToSkip                                                OFFSET(get<T>, {0xF8, 16, 0, 0})
	DMember(double)                                    Tolerance                                                   OFFSET(get<double>, {0x108, 8, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRigTestData.SetupReplay
	// bool SetupReplay(class UControlRig* InControlRig, bool bGroundTruth);                                                    // [0x16984b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigTestData.ReleaseReplay
	// void ReleaseReplay();                                                                                                    // [0x1698490] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigTestData.Record
	// bool Record(class UControlRig* InControlRig, double InRecordingDuration);                                                // [0x16987b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigTestData.IsReplaying
	// bool IsReplaying();                                                                                                      // [0x16983a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.IsRecording
	// bool IsRecording();                                                                                                      // [0x1698370] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.GetTimeRange
	// FVector2D GetTimeRange(bool bInput);                                                                                     // [0x1698c20] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.GetPlaybackMode
	// EControlRigTestDataPlaybackMode GetPlaybackMode();                                                                       // [0x1698410] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.GetFrameIndexForTime
	// int32_t GetFrameIndexForTime(double InSeconds, bool bInput);                                                             // [0x1698a90] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigTestData.CreateNewAsset
	// class UControlRigTestData* CreateNewAsset(FString InDesiredPackagePath, FString InBlueprintPathName);                    // [0x1698d60] Final|Native|Static|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigValidator
/// Size: 0x0040 (0x000028 - 0x000068)
class UControlRigValidator : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 104;

public:
	CMember(TArray<class UControlRigValidationPass*>)  Passes                                                      OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ControlRig.ControlRigValidationPass
/// Size: 0x0000 (0x000028 - 0x000028)
class UControlRigValidationPass : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Class /Script/ControlRig.AdditiveControlRig
/// Size: 0x0010 (0x0003F8 - 0x000408)
class UAdditiveControlRig : public UControlRig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1032;

public:
};

/// Class /Script/ControlRig.FKControlRig
/// Size: 0x0040 (0x0003F8 - 0x000438)
class UFKControlRig : public UControlRig
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1080;

public:
	CMember(TArray<bool>)                              IsControlActive                                             OFFSET(get<T>, {0x3F8, 16, 0, 0})
	CMember(EControlRigFKRigExecuteMode)               ApplyMode                                                   OFFSET(get<T>, {0x408, 1, 0, 0})
};

/// Class /Script/ControlRig.RigHierarchyController
/// Size: 0x0078 (0x000028 - 0x0000A0)
class URigHierarchyController : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	DMember(bool)                                      bReportWarningsAndErrors                                    OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TWeakObjectPtr<class URigHierarchy*>)      Hierarchy                                                   OFFSET(get<T>, {0x2C, 8, 0, 0})


	/// Functions
	// Function /Script/ControlRig.RigHierarchyController.SetSelection
	// bool SetSelection(TArray<FRigElementKey>& InKeys, bool bPrintPythonCommand);                                             // [0x16d6060] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetParent
	// bool SetParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x16d1490] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetHierarchy
	// void SetHierarchy(class URigHierarchy* InHierarchy);                                                                     // [0x16d6580] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetDisplayName
	// FName SetDisplayName(FRigElementKey InControl, FName InDisplayName, bool bRenameElement, bool bSetupUndo, bool bPrintPythonCommand); // [0x16d2190] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.SetControlSettings
	// bool SetControlSettings(FRigElementKey InKey, FRigControlSettings InSettings, bool bSetupUndo);                          // [0x16d3d30] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.SelectElement
	// bool SelectElement(FRigElementKey InKey, bool bSelect, bool bClearSelection);                                            // [0x16d6330] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ReorderElement
	// bool ReorderElement(FRigElementKey InElement, int32_t InIndex, bool bSetupUndo, bool bPrintPythonCommand);               // [0x16d24e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RenameElement
	// FRigElementKey RenameElement(FRigElementKey InElement, FName InName, bool bSetupUndo, bool bPrintPythonCommand, bool bClearSelection); // [0x16d27b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RemoveParent
	// bool RemoveParent(FRigElementKey InChild, FRigElementKey InParent, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x16d1ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RemoveElement
	// bool RemoveElement(FRigElementKey InElement, bool bSetupUndo, bool bPrintPythonCommand);                                 // [0x16d2b00] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.RemoveAllParents
	// bool RemoveAllParents(FRigElementKey InChild, bool bMaintainGlobalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x16d17f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.MirrorElements
	// TArray<FRigElementKey> MirrorElements(TArray<FRigElementKey> InKeys, FRigVMMirrorSettings InSettings, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // [0x16d0c80] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ImportFromText
	// TArray<FRigElementKey> ImportFromText(FString InContent, bool bReplaceExistingElements, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // [0x16d2d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ImportCurves
	// TArray<FRigElementKey> ImportCurves(class USkeleton* InSkeleton, FName InNameSpace, bool bSelectCurves, bool bSetupUndo, bool bPrintPythonCommand); // [0x16d3410] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ImportBones
	// TArray<FRigElementKey> ImportBones(class USkeleton* InSkeleton, FName InNameSpace, bool bReplaceExistingBones, bool bRemoveObsoleteBones, bool bSelectBones, bool bSetupUndo, bool bPrintPythonCommand); // [0x16d37d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.GetHierarchy
	// class URigHierarchy* GetHierarchy();                                                                                     // [0x16d6670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.GetControlSettings
	// FRigControlSettings GetControlSettings(FRigElementKey InKey);                                                            // [0x16d4020] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.ExportToText
	// FString ExportToText(TArray<FRigElementKey> InKeys);                                                                     // [0x16d3110] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.ExportSelectionToText
	// FString ExportSelectionToText();                                                                                         // [0x16d32b0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.RigHierarchyController.DuplicateElements
	// TArray<FRigElementKey> DuplicateElements(TArray<FRigElementKey> InKeys, bool bSelectNewElements, bool bSetupUndo, bool bPrintPythonCommands); // [0x16d1140] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.DeselectElement
	// bool DeselectElement(FRigElementKey InKey);                                                                              // [0x16d6220] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.ClearSelection
	// bool ClearSelection();                                                                                                   // [0x16d6000] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddRigidBody
	// FRigElementKey AddRigidBody(FName InName, FRigElementKey InParent, FRigRigidBodySettings InSettings, FTransform InLocalTransform, bool bSetupUndo, bool bPrintPythonCommand); // [0x16d45a0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddParent
	// bool AddParent(FRigElementKey InChild, FRigElementKey InParent, float InWeight, bool bMaintainGlobalTransform, bool bSetupUndo); // [0x16d1e20] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddNull
	// FRigElementKey AddNull(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, bool bSetupUndo, bool bPrintPythonCommand); // [0x16d56c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddCurve
	// FRigElementKey AddCurve(FName InName, float InValue, bool bSetupUndo, bool bPrintPythonCommand);                         // [0x16d49e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddControl_ForBlueprint
	// FRigElementKey AddControl_ForBlueprint(FName InName, FRigElementKey InParent, FRigControlSettings InSettings, FRigControlValue InValue, bool bSetupUndo, bool bPrintPythonCommand); // [0x16d50c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddBone
	// FRigElementKey AddBone(FName InName, FRigElementKey InParent, FTransform InTransform, bool bTransformInGlobal, ERigBoneType InBoneType, bool bSetupUndo, bool bPrintPythonCommand); // [0x16d5b10] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/ControlRig.RigHierarchyController.AddAnimationChannel_ForBlueprint
	// FRigElementKey AddAnimationChannel_ForBlueprint(FName InName, FRigElementKey InParentControl, FRigControlSettings InSettings, bool bSetupUndo, bool bPrintPythonCommand); // [0x16d4cb0] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/ControlRig.ControlRigLayerInstance
/// Size: 0x0008 (0x000318 - 0x000320)
class UControlRigLayerInstance : public UAnimInstance
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
};

/// Class /Script/ControlRig.ControlRigObjectHolder
/// Size: 0x0010 (0x000028 - 0x000038)
class UControlRigObjectHolder : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<class UObject*>)                    Objects                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ControlRig.ControlRigSequence
/// Size: 0x0068 (0x000220 - 0x000288)
class UControlRigSequence : public ULevelSequence
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 648;

public:
	CMember(TWeakObjectPtr<class UAnimSequence*>)      LastExportedToAnimationSequence                             OFFSET(get<T>, {0x220, 8, 0, 0})
	CMember(TWeakObjectPtr<class USkeletalMesh*>)      LastExportedUsingSkeletalMesh                               OFFSET(get<T>, {0x250, 8, 0, 0})
	DMember(float)                                     LastExportedFrameRate                                       OFFSET(get<float>, {0x280, 4, 0, 0})
};

/// Struct /Script/ControlRig.ChannelMapInfo
/// Size: 0x0040 (0x000000 - 0x000040)
class FChannelMapInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(int32_t)                                   ControlIndex                                                OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   TotalChannelIndex                                           OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   ChannelIndex                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   ParentControlIndex                                          OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	SMember(FName)                                     ChannelTypeName                                             OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bDoesHaveSpace                                              OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(int32_t)                                   SpaceChannelIndex                                           OFFSET(get<int32_t>, {0x1C, 4, 0, 0})
	DMember(int32_t)                                   MaskIndex                                                   OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	DMember(int32_t)                                   CategoryIndex                                               OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	CMember(TArray<uint32_t>)                          ConstraintsIndex                                            OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.EnumParameterNameAndCurve
/// Size: 0x0110 (0x000000 - 0x000110)
class FEnumParameterNameAndCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FMovieSceneByteChannel)                    ParameterCurve                                              OFFSET(getStruct<T>, {0x8, 264, 0, 0})
};

/// Struct /Script/ControlRig.IntegerParameterNameAndCurve
/// Size: 0x0108 (0x000000 - 0x000108)
class FIntegerParameterNameAndCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 264;

public:
	SMember(FName)                                     ParameterName                                               OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FMovieSceneIntegerChannel)                 ParameterCurve                                              OFFSET(getStruct<T>, {0x8, 256, 0, 0})
};

/// Struct /Script/ControlRig.MovieSceneControlRigSpaceBaseKey
/// Size: 0x0010 (0x000000 - 0x000010)
class FMovieSceneControlRigSpaceBaseKey : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(EMovieSceneControlRigSpaceType)            SpaceType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FRigElementKey)                            ControlRigElement                                           OFFSET(getStruct<T>, {0x4, 12, 0, 0})
};

/// Struct /Script/ControlRig.MovieSceneControlRigSpaceChannel
/// Size: 0x00C0 (0x000050 - 0x000110)
class FMovieSceneControlRigSpaceChannel : public FMovieSceneChannel
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	CMember(TArray<FFrameNumber>)                      KeyTimes                                                    OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FMovieSceneControlRigSpaceBaseKey>) KeyValues                                                   OFFSET(get<T>, {0x60, 16, 0, 0})
	SMember(FMovieSceneKeyHandleMap)                   KeyHandles                                                  OFFSET(getStruct<T>, {0x70, 136, 0, 0})
};

/// Struct /Script/ControlRig.SpaceControlNameAndChannel
/// Size: 0x0118 (0x000000 - 0x000118)
class FSpaceControlNameAndChannel : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 280;

public:
	SMember(FName)                                     ControlName                                                 OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FMovieSceneControlRigSpaceChannel)         SpaceCurve                                                  OFFSET(getStruct<T>, {0x8, 272, 0, 0})
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterSection
/// Size: 0x0278 (0x000158 - 0x0003D0)
class UMovieSceneControlRigParameterSection : public UMovieSceneParameterSection
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 976;

public:
	CMember(class UControlRig*)                        ControlRig                                                  OFFSET(get<T>, {0x1A0, 8, 0, 0})
	CMember(class UClass*)                             ControlRigClass                                             OFFSET(get<T>, {0x1A8, 8, 0, 0})
	CMember(TArray<bool>)                              ControlsMask                                                OFFSET(get<T>, {0x1B0, 16, 0, 0})
	SMember(FMovieSceneTransformMask)                  TransformMask                                               OFFSET(getStruct<T>, {0x1C0, 4, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Weight                                                      OFFSET(getStruct<T>, {0x1C8, 272, 0, 0})
	CMember(TMap<FName, FChannelMapInfo>)              ControlChannelMap                                           OFFSET(get<T>, {0x2D8, 80, 0, 0})
	CMember(TArray<FEnumParameterNameAndCurve>)        EnumParameterNamesAndCurves                                 OFFSET(get<T>, {0x328, 16, 0, 0})
	CMember(TArray<FIntegerParameterNameAndCurve>)     IntegerParameterNamesAndCurves                              OFFSET(get<T>, {0x338, 16, 0, 0})
	CMember(TArray<FSpaceControlNameAndChannel>)       SpaceChannels                                               OFFSET(get<T>, {0x348, 16, 0, 0})
	CMember(TArray<FConstraintAndActiveChannel>)       ConstraintsChannels                                         OFFSET(get<T>, {0x358, 16, 0, 0})
};

/// Class /Script/ControlRig.MovieSceneControlRigParameterTrack
/// Size: 0x0068 (0x000098 - 0x000100)
class UMovieSceneControlRigParameterTrack : public UMovieSceneNameableTrack
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class UControlRig*)                        ControlRig                                                  OFFSET(get<T>, {0xD8, 8, 0, 0})
	CMember(class UMovieSceneSection*)                 SectionToKey                                                OFFSET(get<T>, {0xE0, 8, 0, 0})
	CMember(TArray<class UMovieSceneSection*>)         Sections                                                    OFFSET(get<T>, {0xE8, 16, 0, 0})
	SMember(FName)                                     TrackName                                                   OFFSET(getStruct<T>, {0xF8, 8, 0, 0})
};

/// Class /Script/ControlRig.ControlRigSettings
/// Size: 0x0000 (0x000038 - 0x000038)
class UControlRigSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Class /Script/ControlRig.ControlRigEditorSettings
/// Size: 0x0000 (0x000038 - 0x000038)
class UControlRigEditorSettings : public UDeveloperSettings
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
};

/// Struct /Script/ControlRig.RigControlValueStorage
/// Size: 0x0084 (0x000000 - 0x000084)
class FRigControlValueStorage : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 132;

public:
	DMember(float)                                     Float00                                                     OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Float01                                                     OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Float02                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Float03                                                     OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Float10                                                     OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Float11                                                     OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Float12                                                     OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Float13                                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Float20                                                     OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     Float21                                                     OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Float22                                                     OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Float23                                                     OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Float30                                                     OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Float31                                                     OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Float32                                                     OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Float33                                                     OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(float)                                     Float001                                                    OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(float)                                     Float011                                                    OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Float021                                                    OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     Float031                                                    OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     Float101                                                    OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(float)                                     Float111                                                    OFFSET(get<float>, {0x54, 4, 0, 0})
	DMember(float)                                     Float121                                                    OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     Float131                                                    OFFSET(get<float>, {0x5C, 4, 0, 0})
	DMember(float)                                     Float201                                                    OFFSET(get<float>, {0x60, 4, 0, 0})
	DMember(float)                                     Float211                                                    OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     Float221                                                    OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     Float231                                                    OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     Float301                                                    OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     Float311                                                    OFFSET(get<float>, {0x74, 4, 0, 0})
	DMember(float)                                     Float321                                                    OFFSET(get<float>, {0x78, 4, 0, 0})
	DMember(float)                                     Float331                                                    OFFSET(get<float>, {0x7C, 4, 0, 0})
	DMember(bool)                                      bValid                                                      OFFSET(get<bool>, {0x80, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigControlValue
/// Size: 0x0084 (0x000000 - 0x000084)
class FRigControlValue : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 132;

public:
	SMember(FRigControlValueStorage)                   FloatStorage                                                OFFSET(getStruct<T>, {0x0, 132, 0, 0})
};

/// Struct /Script/ControlRig.RigControlCopy
/// Size: 0x0170 (0x000000 - 0x000170)
class FRigControlCopy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(ERigControlType)                           ControlType                                                 OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FRigControlValue)                          Value                                                       OFFSET(getStruct<T>, {0x1C, 132, 0, 0})
	SMember(FRigElementKey)                            ParentKey                                                   OFFSET(getStruct<T>, {0xA0, 12, 0, 0})
	SMember(FTransform)                                OffsetTransform                                             OFFSET(getStruct<T>, {0xB0, 48, 0, 0})
	SMember(FTransform)                                ParentTransform                                             OFFSET(getStruct<T>, {0xE0, 48, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	SMember(FTransform)                                GlobalTransform                                             OFFSET(getStruct<T>, {0x140, 48, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigControlPose
/// Size: 0x0060 (0x000000 - 0x000060)
class FControlRigControlPose : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FRigControlCopy>)                   CopyOfControls                                              OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/ControlRig.ControlRigPoseAsset
/// Size: 0x0060 (0x000028 - 0x000088)
class UControlRigPoseAsset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FControlRigControlPose)                    Pose                                                        OFFSET(getStruct<T>, {0x28, 96, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRigPoseAsset.SelectControls
	// void SelectControls(class UControlRig* InControlRig, bool bDoMirror);                                                    // [0x170a7d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.SavePose
	// void SavePose(class UControlRig* InControlRig, bool bUseAll);                                                            // [0x170aba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.ReplaceControlName
	// void ReplaceControlName(FName& CurrentName, FName& NewName);                                                             // [0x170a230] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.PastePose
	// void PastePose(class UControlRig* InControlRig, bool bDoKey, bool bDoMirror);                                            // [0x170a960] Final|Native|Public|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.GetCurrentPose
	// void GetCurrentPose(class UControlRig* InControlRig, FControlRigControlPose& OutPose);                                   // [0x170a540] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/ControlRig.ControlRigPoseAsset.GetControlNames
	// TArray<FName> GetControlNames();                                                                                         // [0x170a4c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/ControlRig.ControlRigPoseAsset.DoesMirrorMatch
	// bool DoesMirrorMatch(class UControlRig* ControlRig, FName& ControlName);                                                 // [0x1709fb0] Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.ControlRigPoseMirrorSettings
/// Size: 0x0028 (0x000028 - 0x000050)
class UControlRigPoseMirrorSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FString)                                   RightSide                                                   OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	SMember(FString)                                   LeftSide                                                    OFFSET(getStruct<T>, {0x38, 16, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        MirrorAxis                                                  OFFSET(get<T>, {0x48, 1, 0, 0})
	CMember(TEnumAsByte<EAxis>)                        AxisToFlip                                                  OFFSET(get<T>, {0x49, 1, 0, 0})
};

/// Class /Script/ControlRig.ControlRigPoseProjectSettings
/// Size: 0x0010 (0x000028 - 0x000038)
class UControlRigPoseProjectSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FDirectoryPath>)                    RootSaveDirs                                                OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/ControlRig.ControlRigSnapSettings
/// Size: 0x0008 (0x000028 - 0x000030)
class UControlRigSnapSettings : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      bKeepOffset                                                 OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bSnapPosition                                               OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bSnapRotation                                               OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(bool)                                      bSnapScale                                                  OFFSET(get<bool>, {0x2B, 1, 0, 0})
};

/// Class /Script/ControlRig.ControlRigWorkflowOptions
/// Size: 0x0018 (0x000098 - 0x0000B0)
class UControlRigWorkflowOptions : public URigVMUserWorkflowOptions
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(class URigHierarchy*)                      Hierarchy                                                   OFFSET(get<T>, {0x98, 8, 0, 0})
	CMember(TArray<FRigElementKey>)                    Selection                                                   OFFSET(get<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRigWorkflowOptions.EnsureAtLeastOneRigElementSelected
	// bool EnsureAtLeastOneRigElementSelected();                                                                               // [0x1711eb0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/ControlRig.ControlRigTransformWorkflowOptions
/// Size: 0x0008 (0x0000B0 - 0x0000B8)
class UControlRigTransformWorkflowOptions : public UControlRigWorkflowOptions
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TEnumAsByte<ERigTransformType>)            TransformType                                               OFFSET(get<T>, {0xB0, 1, 0, 0})


	/// Functions
	// Function /Script/ControlRig.ControlRigTransformWorkflowOptions.ProvideWorkflows
	// TArray<FRigVMUserWorkflow> ProvideWorkflows(class UObject* InSubject);                                                   // [0x1712090] Final|Native|Public  
};

/// Class /Script/ControlRig.ControlRigNumericalValidationPass
/// Size: 0x0098 (0x000028 - 0x0000C0)
class UControlRigNumericalValidationPass : public UControlRigValidationPass
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bCheckControls                                              OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bCheckBones                                                 OFFSET(get<bool>, {0x29, 1, 0, 0})
	DMember(bool)                                      bCheckCurves                                                OFFSET(get<bool>, {0x2A, 1, 0, 0})
	DMember(float)                                     TranslationPrecision                                        OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     RotationPrecision                                           OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     ScalePrecision                                              OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     CurvePrecision                                              OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FName)                                     EventNameA                                                  OFFSET(getStruct<T>, {0x3C, 8, 0, 0})
	SMember(FName)                                     EventNameB                                                  OFFSET(getStruct<T>, {0x44, 8, 0, 0})
	SMember(FRigPose)                                  Pose                                                        OFFSET(getStruct<T>, {0x50, 112, 0, 0})
};

/// Struct /Script/ControlRig.RigBaseElement
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FRigBaseElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FRigElementKey)                            Key                                                         OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FString)                                   NameString                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x28, 4, 0, 0})
	DMember(int32_t)                                   SubIndex                                                    OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	DMember(bool)                                      bSelected                                                   OFFSET(get<bool>, {0x30, 1, 0, 0})
	DMember(int32_t)                                   CreatedAtInstructionIndex                                   OFFSET(get<int32_t>, {0x34, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigComputedTransform
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigComputedTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigLocalAndGlobalTransform
/// Size: 0x0080 (0x000000 - 0x000080)
class FRigLocalAndGlobalTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FRigComputedTransform)                     Local                                                       OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	SMember(FRigComputedTransform)                     Global                                                      OFFSET(getStruct<T>, {0x40, 64, 0, 0})
};

/// Struct /Script/ControlRig.RigCurrentAndInitialTransform
/// Size: 0x0100 (0x000000 - 0x000100)
class FRigCurrentAndInitialTransform : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FRigLocalAndGlobalTransform)               Current                                                     OFFSET(getStruct<T>, {0x0, 128, 0, 0})
	SMember(FRigLocalAndGlobalTransform)               Initial                                                     OFFSET(getStruct<T>, {0x80, 128, 0, 0})
};

/// Struct /Script/ControlRig.RigTransformElement
/// Size: 0x0140 (0x0000F0 - 0x000230)
class FRigTransformElement : public FRigBaseElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FRigCurrentAndInitialTransform)            Pose                                                        OFFSET(getStruct<T>, {0xF0, 256, 0, 0})
};

/// Struct /Script/ControlRig.RigMultiParentElement
/// Size: 0x00D0 (0x000230 - 0x000300)
class FRigMultiParentElement : public FRigTransformElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
};

/// Struct /Script/ControlRig.RigControlLimitEnabled
/// Size: 0x0002 (0x000000 - 0x000002)
class FRigControlLimitEnabled : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bMinimum                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bMaximum                                                    OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigControlSettings
/// Size: 0x01B0 (0x000000 - 0x0001B0)
class FRigControlSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 432;

public:
	CMember(ERigControlAnimationType)                  AnimationType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ERigControlType)                           ControlType                                                 OFFSET(get<T>, {0x1, 1, 0, 0})
	SMember(FName)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	CMember(ERigControlAxis)                           PrimaryAxis                                                 OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(bool)                                      bIsCurve                                                    OFFSET(get<bool>, {0xD, 1, 0, 0})
	CMember(TArray<FRigControlLimitEnabled>)           LimitEnabled                                                OFFSET(get<T>, {0x10, 16, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FRigControlValue)                          MinimumValue                                                OFFSET(getStruct<T>, {0x24, 132, 0, 0})
	SMember(FRigControlValue)                          MaximumValue                                                OFFSET(getStruct<T>, {0xA8, 132, 0, 0})
	DMember(bool)                                      bShapeVisible                                               OFFSET(get<bool>, {0x12C, 1, 0, 0})
	CMember(ERigControlVisibility)                     ShapeVisibility                                             OFFSET(get<T>, {0x12D, 1, 0, 0})
	SMember(FName)                                     ShapeName                                                   OFFSET(getStruct<T>, {0x130, 8, 0, 0})
	SMember(FLinearColor)                              ShapeColor                                                  OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	DMember(bool)                                      bIsTransientControl                                         OFFSET(get<bool>, {0x148, 1, 0, 0})
	CMember(class UEnum*)                              ControlEnum                                                 OFFSET(get<T>, {0x150, 8, 0, 0})
	SMember(FRigControlElementCustomization)           Customization                                               OFFSET(getStruct<T>, {0x158, 32, 0, 0})
	CMember(TArray<FRigElementKey>)                    DrivenControls                                              OFFSET(get<T>, {0x178, 16, 0, 0})
	DMember(bool)                                      bGroupWithParentControl                                     OFFSET(get<bool>, {0x198, 1, 0, 0})
	DMember(bool)                                      bRestrictSpaceSwitching                                     OFFSET(get<bool>, {0x199, 1, 0, 0})
	CMember(TArray<ERigControlTransformChannel>)       FilteredChannels                                            OFFSET(get<T>, {0x1A0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigPreferredEulerAngles
/// Size: 0x001C (0x000000 - 0x00001C)
class FRigPreferredEulerAngles : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	CMember(EEulerRotationOrder)                       RotationOrder                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   Current                                                     OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FVector)                                   Initial                                                     OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigControlElement
/// Size: 0x03D0 (0x000300 - 0x0006D0)
class FRigControlElement : public FRigMultiParentElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1744;

public:
	SMember(FRigControlSettings)                       Settings                                                    OFFSET(getStruct<T>, {0x300, 432, 0, 0})
	SMember(FRigCurrentAndInitialTransform)            Offset                                                      OFFSET(getStruct<T>, {0x4B0, 256, 0, 0})
	SMember(FRigCurrentAndInitialTransform)            Shape                                                       OFFSET(getStruct<T>, {0x5B0, 256, 0, 0})
	SMember(FRigPreferredEulerAngles)                  PreferredEulerAngles                                        OFFSET(getStruct<T>, {0x6B0, 28, 0, 0})
};

/// Struct /Script/ControlRig.MovieSceneControlRigInstanceData
/// Size: 0x0140 (0x000008 - 0x000148)
class FMovieSceneControlRigInstanceData : public FMovieSceneSequenceInstanceData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 328;

public:
	DMember(bool)                                      bAdditive                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bApplyBoneFilter                                            OFFSET(get<bool>, {0x9, 1, 0, 0})
	SMember(FInputBlendPose)                           BoneFilter                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FMovieSceneFloatChannel)                   Weight                                                      OFFSET(getStruct<T>, {0x20, 272, 0, 0})
	SMember(FMovieSceneEvaluationOperand)              Operand                                                     OFFSET(getStruct<T>, {0x130, 20, 0, 0})
};

/// Struct /Script/ControlRig.RigTransformStackEntry
/// Size: 0x0090 (0x000000 - 0x000090)
class FRigTransformStackEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigElementKey)                            Key                                                         OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	CMember(TEnumAsByte<ERigTransformStackEntryType>)  EntryType                                                   OFFSET(get<T>, {0xC, 1, 0, 0})
	CMember(TEnumAsByte<ERigTransformType>)            TransformType                                               OFFSET(get<T>, {0xD, 1, 0, 0})
	SMember(FTransform)                                OldTransform                                                OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                NewTransform                                                OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	DMember(bool)                                      bAffectChildren                                             OFFSET(get<bool>, {0x70, 1, 0, 0})
	CMember(TArray<FString>)                           Callstack                                                   OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigSingleParentElement
/// Size: 0x0010 (0x000230 - 0x000240)
class FRigSingleParentElement : public FRigTransformElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
};

/// Struct /Script/ControlRig.RigElementWeight
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigElementWeight : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     Location                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Rotation                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigElementParentConstraint
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigElementParentConstraint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/ControlRig.RigBoneElement
/// Size: 0x0008 (0x000238 - 0x000240)
class FRigBoneElement : public FRigSingleParentElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	CMember(ERigBoneType)                              BoneType                                                    OFFSET(get<T>, {0x238, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigNullElement
/// Size: 0x0000 (0x000300 - 0x000300)
class FRigNullElement : public FRigMultiParentElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
};

/// Struct /Script/ControlRig.RigCurveElement
/// Size: 0x0008 (0x0000F0 - 0x0000F8)
class FRigCurveElement : public FRigBaseElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 248;

public:
};

/// Struct /Script/ControlRig.RigRigidBodySettings
/// Size: 0x0004 (0x000000 - 0x000004)
class FRigRigidBodySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x0, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigRigidBodyElement
/// Size: 0x0008 (0x000238 - 0x000240)
class FRigRigidBodyElement : public FRigSingleParentElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 576;

public:
	SMember(FRigRigidBodySettings)                     Settings                                                    OFFSET(getStruct<T>, {0x238, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigReferenceElement
/// Size: 0x0018 (0x000238 - 0x000250)
class FRigReferenceElement : public FRigSingleParentElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 592;

public:
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContentPerElement
/// Size: 0x0140 (0x000000 - 0x000140)
class FRigHierarchyCopyPasteContentPerElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FRigElementKey)                            Key                                                         OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FString)                                   Content                                                     OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	CMember(TArray<FRigElementKey>)                    Parents                                                     OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FRigElementWeight>)                 ParentWeights                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FRigCurrentAndInitialTransform)            Pose                                                        OFFSET(getStruct<T>, {0x40, 256, 0, 0})
};

/// Struct /Script/ControlRig.RigHierarchyCopyPasteContent
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigHierarchyCopyPasteContent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FRigHierarchyCopyPasteContentPerElement>) Elements                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<ERigElementType>)                   Types                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FString>)                           Contents                                                    OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FTransform>)                        LocalTransforms                                             OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FTransform>)                        GlobalTransforms                                            OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigExecuteContext
/// Size: 0x0030 (0x0000C0 - 0x0000F0)
class FControlRigExecuteContext : public FRigVMExecuteContext
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
};

/// Struct /Script/ControlRig.RigUnit
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit : public FRigVMStruct
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_HighlevelBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnitMutable
/// Size: 0x00F8 (0x000008 - 0x000100)
class FRigUnitMutable : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(getStruct<T>, {0x10, 240, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HighlevelBaseMutable
/// Size: 0x0000 (0x000100 - 0x000100)
class FRigUnit_HighlevelBaseMutable : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/ControlRig.StructReference
/// Size: 0x0008 (0x000000 - 0x000008)
class FStructReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.ControlRigIOSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FControlRigIOSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	DMember(bool)                                      bUpdatePose                                                 OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bUpdateCurves                                               OFFSET(get<bool>, {0x1, 1, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigAnimNodeEventName
/// Size: 0x0008 (0x000000 - 0x000008)
class FControlRigAnimNodeEventName : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	SMember(FName)                                     EventName                                                   OFFSET(getStruct<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/ControlRig.AnimNode_ControlRigBase
/// Size: 0x0218 (0x000058 - 0x000270)
class FAnimNode_ControlRigBase : public FAnimNode_CustomProperty
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 624;

public:
	SMember(FPoseLink)                                 Source                                                      OFFSET(getStruct<T>, {0x58, 16, 0, 0})
	DMember(bool)                                      bResetInputPoseToInitial                                    OFFSET(get<bool>, {0x68, 1, 0, 0})
	DMember(bool)                                      bTransferInputPose                                          OFFSET(get<bool>, {0x69, 1, 0, 0})
	DMember(bool)                                      bTransferInputCurves                                        OFFSET(get<bool>, {0x6A, 1, 0, 0})
	DMember(bool)                                      bTransferPoseInGlobalSpace                                  OFFSET(get<bool>, {0x6B, 1, 0, 0})
	CMember(TArray<FBoneReference>)                    InputBonesToTransfer                                        OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TWeakObjectPtr<class UNodeMappingContainer*>) NodeMappingContainer                                     OFFSET(get<T>, {0x240, 8, 0, 0})
	SMember(FControlRigIOSettings)                     InputSettings                                               OFFSET(getStruct<T>, {0x248, 2, 0, 0})
	SMember(FControlRigIOSettings)                     OutputSettings                                              OFFSET(getStruct<T>, {0x24A, 2, 0, 0})
	DMember(bool)                                      bExecute                                                    OFFSET(get<bool>, {0x24C, 1, 0, 0})
	CMember(TArray<FControlRigAnimNodeEventName>)      EventQueue                                                  OFFSET(get<T>, {0x258, 16, 0, 0})
};

/// Struct /Script/ControlRig.AnimNode_ControlRig
/// Size: 0x0200 (0x000270 - 0x000470)
class FAnimNode_ControlRig : public FAnimNode_ControlRigBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1136;

public:
	CMember(class UClass*)                             ControlRigClass                                             OFFSET(get<T>, {0x270, 8, 0, 0})
	CMember(class UControlRig*)                        ControlRig                                                  OFFSET(get<T>, {0x278, 8, 0, 0})
	DMember(float)                                     Alpha                                                       OFFSET(get<float>, {0x280, 4, 0, 0})
	CMember(EAnimAlphaInputType)                       AlphaInputType                                              OFFSET(get<T>, {0x284, 1, 0, 0})
	DMember(bool)                                      bAlphaBoolEnabled                                           OFFSET(get<bool>, {0x285, 1, 1, 0})
	DMember(bool)                                      bSetRefPoseFromSkeleton                                     OFFSET(get<bool>, {0x285, 1, 1, 1})
	SMember(FInputScaleBias)                           AlphaScaleBias                                              OFFSET(getStruct<T>, {0x288, 8, 0, 0})
	SMember(FInputAlphaBoolBlend)                      AlphaBoolBlend                                              OFFSET(getStruct<T>, {0x290, 72, 0, 0})
	SMember(FName)                                     AlphaCurveName                                              OFFSET(getStruct<T>, {0x2D8, 8, 0, 0})
	SMember(FInputScaleBiasClamp)                      AlphaScaleBiasClamp                                         OFFSET(getStruct<T>, {0x2E0, 48, 0, 0})
	CMember(TMap<FName, FName>)                        InputMapping                                                OFFSET(get<T>, {0x310, 80, 0, 0})
	CMember(TMap<FName, FName>)                        OutputMapping                                               OFFSET(get<T>, {0x360, 80, 0, 0})
	DMember(int32_t)                                   LODThreshold                                                OFFSET(get<int32_t>, {0x460, 4, 0, 0})
};

/// Struct /Script/ControlRig.AnimNode_ControlRig_ExternalSource
/// Size: 0x0008 (0x000270 - 0x000278)
class FAnimNode_ControlRig_ExternalSource : public FAnimNode_ControlRigBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 632;

public:
	CMember(TWeakObjectPtr<class UControlRig*>)        ControlRig                                                  OFFSET(get<T>, {0x270, 8, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigAnimInstanceProxy
/// Size: 0x00A8 (0x0006D8 - 0x000780)
class FControlRigAnimInstanceProxy : public FAnimInstanceProxy
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
};

/// Struct /Script/ControlRig.ControlRigComponentMappedComponent
/// Size: 0x0018 (0x000000 - 0x000018)
class FControlRigComponentMappedComponent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(class USceneComponent*)                    Component                                                   OFFSET(get<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     ElementName                                                 OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(EControlRigComponentMapDirection)          Direction                                                   OFFSET(get<T>, {0x11, 1, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigComponentMappedBone
/// Size: 0x0010 (0x000000 - 0x000010)
class FControlRigComponentMappedBone : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Source                                                      OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Target                                                      OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigComponentMappedCurve
/// Size: 0x0010 (0x000000 - 0x000010)
class FControlRigComponentMappedCurve : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Source                                                      OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FName)                                     Target                                                      OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ControlRig.ControlShapeActorCreationParam
/// Size: 0x0140 (0x000000 - 0x000140)
class FControlShapeActorCreationParam : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
};

/// Struct /Script/ControlRig.ControlRigValidationContext
/// Size: 0x0028 (0x000000 - 0x000028)
class FControlRigValidationContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ControlRig.CRSimContainer
/// Size: 0x0018 (0x000000 - 0x000018)
class FCRSimContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     TimeStep                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     AccumulatedTime                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     TimeLeftForStep                                             OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.CRSimLinearSpring
/// Size: 0x0010 (0x000000 - 0x000010)
class FCRSimLinearSpring : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(int32_t)                                   SubjectA                                                    OFFSET(get<int32_t>, {0x0, 4, 0, 0})
	DMember(int32_t)                                   SubjectB                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(float)                                     Coefficient                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Equilibrium                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.CRSimPointConstraint
/// Size: 0x0024 (0x000000 - 0x000024)
class FCRSimPointConstraint : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(ECRSimConstraintType)                      Type                                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(int32_t)                                   SubjectA                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   SubjectB                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	SMember(FVector)                                   DataA                                                       OFFSET(getStruct<T>, {0xC, 12, 0, 0})
	SMember(FVector)                                   DataB                                                       OFFSET(getStruct<T>, {0x18, 12, 0, 0})
};

/// Struct /Script/ControlRig.CRSimPointForce
/// Size: 0x0018 (0x000000 - 0x000018)
class FCRSimPointForce : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ECRSimPointForceType)                      ForceType                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	DMember(float)                                     Coefficient                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bNormalize                                                  OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/ControlRig.CRSimSoftCollision
/// Size: 0x0050 (0x000000 - 0x000050)
class FCRSimSoftCollision : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	CMember(ECRSimSoftCollisionType)                   ShapeType                                                   OFFSET(get<T>, {0x30, 1, 0, 0})
	DMember(float)                                     MinimumDistance                                             OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     MaximumDistance                                             OFFSET(get<float>, {0x38, 4, 0, 0})
	CMember(ERigVMAnimEasingType)                      FalloffType                                                 OFFSET(get<T>, {0x3C, 1, 0, 0})
	DMember(float)                                     Coefficient                                                 OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bInverted                                                   OFFSET(get<bool>, {0x44, 1, 0, 0})
};

/// Struct /Script/ControlRig.CRSimPointContainer
/// Size: 0x0060 (0x000018 - 0x000078)
class FCRSimPointContainer : public FCRSimContainer
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(TArray<FRigVMSimPoint>)                    Points                                                      OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FCRSimLinearSpring>)                Springs                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FCRSimPointForce>)                  Forces                                                      OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FCRSimSoftCollision>)               CollisionVolumes                                            OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<FCRSimPointConstraint>)             Constraints                                                 OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<FRigVMSimPoint>)                    PreviousStep                                                OFFSET(get<T>, {0x68, 16, 0, 0})
};

/// Struct /Script/ControlRig.ConstraintNodeData
/// Size: 0x00B0 (0x000000 - 0x0000B0)
class FConstraintNodeData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FTransform)                                RelativeParent                                              OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	SMember(FConstraintOffset)                         ConstraintOffset                                            OFFSET(getStruct<T>, {0x30, 96, 0, 0})
	SMember(FName)                                     LinkedNode                                                  OFFSET(getStruct<T>, {0x90, 8, 0, 0})
	CMember(TArray<FTransformConstraint>)              Constraints                                                 OFFSET(get<T>, {0x98, 16, 0, 0})
};

/// Struct /Script/ControlRig.AnimationHierarchy
/// Size: 0x0010 (0x000078 - 0x000088)
class FAnimationHierarchy : public FNodeHierarchyWithUserData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	CMember(TArray<FConstraintNodeData>)               UserData                                                    OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigElement
/// Size: 0x0018 (0x000000 - 0x000018)
class FRigElement : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigBone
/// Size: 0x00C8 (0x000018 - 0x0000E0)
class FRigBone : public FRigElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FName)                                     ParentName                                                  OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x20, 4, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FTransform)                                GlobalTransform                                             OFFSET(getStruct<T>, {0x60, 48, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	CMember(TArray<int32_t>)                           Dependents                                                  OFFSET(get<T>, {0xC0, 16, 0, 0})
	CMember(ERigBoneType)                              Type                                                        OFFSET(get<T>, {0xD0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigBoneHierarchy
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigBoneHierarchy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigBone>)                          Bones                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigControl
/// Size: 0x02E8 (0x000018 - 0x000300)
class FRigControl : public FRigElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 768;

public:
	CMember(ERigControlType)                           ControlType                                                 OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FName)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	SMember(FName)                                     ParentName                                                  OFFSET(getStruct<T>, {0x24, 8, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x2C, 4, 0, 0})
	SMember(FName)                                     SpaceName                                                   OFFSET(getStruct<T>, {0x30, 8, 0, 0})
	DMember(int32_t)                                   SpaceIndex                                                  OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	SMember(FTransform)                                OffsetTransform                                             OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	SMember(FRigControlValue)                          InitialValue                                                OFFSET(getStruct<T>, {0x70, 132, 0, 0})
	SMember(FRigControlValue)                          Value                                                       OFFSET(getStruct<T>, {0xF4, 132, 0, 0})
	CMember(ERigControlAxis)                           PrimaryAxis                                                 OFFSET(get<T>, {0x178, 1, 0, 0})
	DMember(bool)                                      bIsCurve                                                    OFFSET(get<bool>, {0x179, 1, 0, 0})
	DMember(bool)                                      bAnimatable                                                 OFFSET(get<bool>, {0x17A, 1, 0, 0})
	DMember(bool)                                      bLimitTranslation                                           OFFSET(get<bool>, {0x17B, 1, 0, 0})
	DMember(bool)                                      bLimitRotation                                              OFFSET(get<bool>, {0x17C, 1, 0, 0})
	DMember(bool)                                      bLimitScale                                                 OFFSET(get<bool>, {0x17D, 1, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 OFFSET(get<bool>, {0x17E, 1, 0, 0})
	SMember(FRigControlValue)                          MinimumValue                                                OFFSET(getStruct<T>, {0x180, 132, 0, 0})
	SMember(FRigControlValue)                          MaximumValue                                                OFFSET(getStruct<T>, {0x204, 132, 0, 0})
	DMember(bool)                                      bGizmoEnabled                                               OFFSET(get<bool>, {0x288, 1, 0, 0})
	DMember(bool)                                      bGizmoVisible                                               OFFSET(get<bool>, {0x289, 1, 0, 0})
	SMember(FName)                                     GizmoName                                                   OFFSET(getStruct<T>, {0x28C, 8, 0, 0})
	SMember(FTransform)                                GizmoTransform                                              OFFSET(getStruct<T>, {0x2A0, 48, 0, 0})
	SMember(FLinearColor)                              GizmoColor                                                  OFFSET(getStruct<T>, {0x2D0, 16, 0, 0})
	CMember(TArray<int32_t>)                           Dependents                                                  OFFSET(get<T>, {0x2E0, 16, 0, 0})
	DMember(bool)                                      bIsTransientControl                                         OFFSET(get<bool>, {0x2F0, 1, 0, 0})
	CMember(class UEnum*)                              ControlEnum                                                 OFFSET(get<T>, {0x2F8, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigControlHierarchy
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigControlHierarchy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigControl>)                       Controls                                                    OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigCurve
/// Size: 0x0008 (0x000018 - 0x000020)
class FRigCurve : public FRigElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x18, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigCurveContainer
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigCurveContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigCurve>)                         Curves                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigSpace
/// Size: 0x0078 (0x000018 - 0x000090)
class FRigSpace : public FRigElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	CMember(ERigSpaceType)                             SpaceType                                                   OFFSET(get<T>, {0x18, 1, 0, 0})
	SMember(FName)                                     ParentName                                                  OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x24, 4, 0, 0})
	SMember(FTransform)                                InitialTransform                                            OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x60, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigSpaceHierarchy
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigSpaceHierarchy : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigSpace>)                         Spaces                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigHierarchyContainer
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigHierarchyContainer : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigBoneHierarchy)                         BoneHierarchy                                               OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FRigSpaceHierarchy)                        SpaceHierarchy                                              OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FRigControlHierarchy)                      ControlHierarchy                                            OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FRigCurveContainer)                        CurveContainer                                              OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigHierarchyRef
/// Size: 0x0001 (0x000000 - 0x000001)
class FRigHierarchyRef : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1;

public:
};

/// Struct /Script/ControlRig.RigControlModifiedContext
/// Size: 0x0018 (0x000000 - 0x000018)
class FRigControlModifiedContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigElementKeyCollection
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigElementKeyCollection : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigElementKey>)                    Keys                                                        OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigEventContext
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigEventContext : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
};

/// Struct /Script/ControlRig.RigBaseMetadata
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigBaseMetadata : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	CMember(ERigMetadataType)                          Type                                                        OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigBoolMetadata
/// Size: 0x0008 (0x000028 - 0x000030)
class FRigBoolMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigBoolArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
class FRigBoolArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<bool>)                              Value                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigFloatMetadata
/// Size: 0x0008 (0x000028 - 0x000030)
class FRigFloatMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x28, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigFloatArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
class FRigFloatArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<float>)                             Value                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigInt32Metadata
/// Size: 0x0008 (0x000028 - 0x000030)
class FRigInt32Metadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigInt32ArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
class FRigInt32ArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<int32_t>)                           Value                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigNameMetadata
/// Size: 0x0008 (0x000028 - 0x000030)
class FRigNameMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Value                                                       OFFSET(getStruct<T>, {0x28, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigNameArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
class FRigNameArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FName>)                             Value                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigVectorMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
class FRigVectorMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x28, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigVectorArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
class FRigVectorArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FVector>)                           Value                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigRotatorMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
class FRigRotatorMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRotator)                                  Value                                                       OFFSET(getStruct<T>, {0x28, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigRotatorArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
class FRigRotatorArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FRotator>)                          Value                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigQuatMetadata
/// Size: 0x0018 (0x000028 - 0x000040)
class FRigQuatMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigQuatArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
class FRigQuatArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FQuat>)                             Value                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigTransformMetadata
/// Size: 0x0038 (0x000028 - 0x000060)
class FRigTransformMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigTransformArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
class FRigTransformArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FTransform>)                        Value                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigLinearColorMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
class FRigLinearColorMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FLinearColor)                              Value                                                       OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigLinearColorArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
class FRigLinearColorArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FLinearColor>)                      Value                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigElementKeyMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
class FRigElementKeyMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKey)                            Value                                                       OFFSET(getStruct<T>, {0x28, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigElementKeyArrayMetadata
/// Size: 0x0010 (0x000028 - 0x000038)
class FRigElementKeyArrayMetadata : public FRigBaseMetadata
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FRigElementKey>)                    Value                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigInfluenceEntryModifier
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigInfluenceEntryModifier : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FRigElementKey>)                    AffectedList                                                OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.AnimNode_ControlRigInputPose
/// Size: 0x0020 (0x000010 - 0x000030)
class FAnimNode_ControlRigInputPose : public FAnimNode_Base
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FPoseLink)                                 InputPose                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigLayerInstanceProxy
/// Size: 0x00A8 (0x0006D8 - 0x000780)
class FControlRigLayerInstanceProxy : public FAnimInstanceProxy
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1920;

public:
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReference
/// Size: 0x0008 (0x000000 - 0x000008)
class FControlRigSequenceObjectReference : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	CMember(class UClass*)                             ControlRigClass                                             OFFSET(get<T>, {0x0, 8, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferences
/// Size: 0x0010 (0x000000 - 0x000010)
class FControlRigSequenceObjectReferences : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FControlRigSequenceObjectReference>) Array                                                      OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigSequenceObjectReferenceMap
/// Size: 0x0020 (0x000000 - 0x000020)
class FControlRigSequenceObjectReferenceMap : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FGuid>)                             BindingIds                                                  OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FControlRigSequenceObjectReferences>) References                                                OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.MovieSceneControlRigParameterTemplate
/// Size: 0x0040 (0x000080 - 0x0000C0)
class FMovieSceneControlRigParameterTemplate : public FMovieSceneParameterSectionTemplate
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(TArray<FEnumParameterNameAndCurve>)        Enums                                                       OFFSET(get<T>, {0x80, 16, 0, 0})
	CMember(TArray<FIntegerParameterNameAndCurve>)     Integers                                                    OFFSET(get<T>, {0x90, 16, 0, 0})
	CMember(TArray<FSpaceControlNameAndChannel>)       Spaces                                                      OFFSET(get<T>, {0xA0, 16, 0, 0})
	CMember(TArray<FConstraintAndActiveChannel>)       Constraints                                                 OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/ControlRig.ControlRigSettingsPerPinBool
/// Size: 0x0050 (0x000000 - 0x000050)
class FControlRigSettingsPerPinBool : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TMap<FString, bool>)                       Values                                                      OFFSET(get<T>, {0x0, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigDispatchFactory
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigDispatchFactory : public FRigVMDispatchFactory
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigDispatch_AnimAttributeBase
/// Size: 0x0030 (0x000018 - 0x000048)
class FRigDispatch_AnimAttributeBase : public FRigDispatchFactory
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ControlRig.RigDispatch_GetAnimAttribute
/// Size: 0x0000 (0x000048 - 0x000048)
class FRigDispatch_GetAnimAttribute : public FRigDispatch_AnimAttributeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ControlRig.RigDispatch_SetAnimAttribute
/// Size: 0x0000 (0x000048 - 0x000048)
class FRigDispatch_SetAnimAttribute : public FRigDispatch_AnimAttributeBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceWorld
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigUnit_SphereTraceWorld : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector)                                   Start                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   End                                                         OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	CMember(TEnumAsByte<ECollisionChannel>)            Channel                                                     OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bHit                                                        OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FVector)                                   HitLocation                                                 OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	SMember(FVector)                                   HitNormal                                                   OFFSET(getStruct<T>, {0x38, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceByTraceChannel
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigUnit_SphereTraceByTraceChannel : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FVector)                                   Start                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   End                                                         OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	CMember(TEnumAsByte<ETraceTypeQuery>)              TraceChannel                                                OFFSET(get<T>, {0x20, 1, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(bool)                                      bHit                                                        OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FVector)                                   HitLocation                                                 OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	SMember(FVector)                                   HitNormal                                                   OFFSET(getStruct<T>, {0x38, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SphereTraceByObjectTypes
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_SphereTraceByObjectTypes : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Start                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   End                                                         OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	CMember(TArray<TEnumAsByte<EObjectTypeQuery>>)     ObjectTypes                                                 OFFSET(get<T>, {0x20, 16, 0, 0})
	DMember(float)                                     Radius                                                      OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      bHit                                                        OFFSET(get<bool>, {0x34, 1, 0, 0})
	SMember(FVector)                                   HitLocation                                                 OFFSET(getStruct<T>, {0x38, 12, 0, 0})
	SMember(FVector)                                   HitNormal                                                   OFFSET(getStruct<T>, {0x44, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Control
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigUnit_Control : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FEulerTransform)                           Transform                                                   OFFSET(getStruct<T>, {0x8, 36, 0, 0})
	SMember(FTransform)                                Base                                                        OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FTransform)                                InitTransform                                               OFFSET(getStruct<T>, {0x60, 48, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	SMember(FTransformFilter)                          Filter                                                      OFFSET(getStruct<T>, {0xC0, 9, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0xC9, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Control_StaticMesh
/// Size: 0x0030 (0x0000D0 - 0x000100)
class FRigUnit_Control_StaticMesh : public FRigUnit_Control
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FTransform)                                MeshTransform                                               OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugBezier
/// Size: 0x00A0 (0x0000D0 - 0x000170)
class FRigUnit_DebugBezier : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	DMember(float)                                     MinimumU                                                    OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     MaximumU                                                    OFFSET(get<float>, {0x104, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      OFFSET(get<int32_t>, {0x11C, 4, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x120, 8, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x130, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x160, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugBezierItemSpace
/// Size: 0x00A0 (0x0000D0 - 0x000170)
class FRigUnit_DebugBezierItemSpace : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(getStruct<T>, {0xD0, 48, 0, 0})
	DMember(float)                                     MinimumU                                                    OFFSET(get<float>, {0x100, 4, 0, 0})
	DMember(float)                                     MaximumU                                                    OFFSET(get<float>, {0x104, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(int32_t)                                   Detail                                                      OFFSET(get<int32_t>, {0x11C, 4, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(getStruct<T>, {0x120, 12, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x130, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x160, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugHierarchy
/// Size: 0x0158 (0x000008 - 0x000160)
class FRigUnit_DebugHierarchy : public FRigVMFunction_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(getStruct<T>, {0x10, 240, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x100, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x104, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x114, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x150, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DebugPose
/// Size: 0x01C8 (0x000008 - 0x0001D0)
class FRigUnit_DebugPose : public FRigVMFunction_DebugBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(getStruct<T>, {0x10, 240, 0, 0})
	SMember(FRigPose)                                  Pose                                                        OFFSET(getStruct<T>, {0x100, 112, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x170, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x174, 16, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x184, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x190, 48, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x1C0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_StartProfilingTimer
/// Size: 0x0000 (0x0000D0 - 0x0000D0)
class FRigUnit_StartProfilingTimer : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
};

/// Struct /Script/ControlRig.RigUnit_EndProfilingTimer
/// Size: 0x0030 (0x0000D0 - 0x000100)
class FRigUnit_EndProfilingTimer : public FRigVMFunction_DebugBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	DMember(int32_t)                                   NumberOfMeasurements                                        OFFSET(get<int32_t>, {0xD0, 4, 0, 0})
	SMember(FString)                                   Prefix                                                      OFFSET(getStruct<T>, {0xD8, 16, 0, 0})
	DMember(float)                                     AccumulatedTime                                             OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(int32_t)                                   MeasurementsLeft                                            OFFSET(get<int32_t>, {0xEC, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0xF0, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertTransform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_ConvertTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                Input                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FEulerTransform)                           Result                                                      OFFSET(getStruct<T>, {0x40, 36, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertEulerTransform
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigUnit_ConvertEulerTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FEulerTransform)                           Input                                                       OFFSET(getStruct<T>, {0x8, 36, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotation
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ConvertRotation : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRotator)                                  Input                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorRotation
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_ConvertVectorRotation : public FRigUnit_ConvertRotation
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternion
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ConvertQuaternion : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Input                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FRotator)                                  Result                                                      OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToRotation
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ConvertVectorToRotation : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Input                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRotator)                                  Result                                                      OFFSET(getStruct<T>, {0x14, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertVectorToQuaternion
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ConvertVectorToQuaternion : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Input                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertRotationToVector
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ConvertRotationToVector : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRotator)                                  Input                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x14, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ConvertQuaternionToVector
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ConvertQuaternionToVector : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Input                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToSwingAndTwist
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_ToSwingAndTwist : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FQuat)                                     Input                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FQuat)                                     Swing                                                       OFFSET(getStruct<T>, {0x30, 16, 0, 0})
	SMember(FQuat)                                     Twist                                                       OFFSET(getStruct<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BinaryFloatOp
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_BinaryFloatOp : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Argument0                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Argument1                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Multiply_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_Multiply_FloatFloat : public FRigUnit_BinaryFloatOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_Add_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_Add_FloatFloat : public FRigUnit_BinaryFloatOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_Subtract_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_Subtract_FloatFloat : public FRigUnit_BinaryFloatOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_Divide_FloatFloat
/// Size: 0x0000 (0x000018 - 0x000018)
class FRigUnit_Divide_FloatFloat : public FRigUnit_BinaryFloatOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
};

/// Struct /Script/ControlRig.RigUnit_Clamp_Float
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_Clamp_Float : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Min                                                         OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Max                                                         OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MapRange_Float
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_MapRange_Float : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     MinIn                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     MaxIn                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     MinOut                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     MaxOut                                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BinaryQuaternionOp
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_BinaryQuaternionOp : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FQuat)                                     Argument0                                                   OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     Argument1                                                   OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MultiplyQuaternion
/// Size: 0x0000 (0x000040 - 0x000040)
class FRigUnit_MultiplyQuaternion : public FRigUnit_BinaryQuaternionOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
};

/// Struct /Script/ControlRig.RigUnit_UnaryQuaternionOp
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_UnaryQuaternionOp : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Argument                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_InverseQuaterion
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_InverseQuaterion : public FRigUnit_UnaryQuaternionOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAxisAndAngle
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_QuaternionToAxisAndAngle : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Argument                                                    OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x2C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_QuaternionFromAxisAndAngle
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_QuaternionFromAxisAndAngle : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_QuaternionToAngle
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_QuaternionToAngle : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FQuat)                                     Argument                                                    OFFSET(getStruct<T>, {0x20, 16, 0, 0})
	DMember(float)                                     Angle                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BinaryTransformOp
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigUnit_BinaryTransformOp : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FTransform)                                Argument0                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                Argument1                                                   OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x70, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MultiplyTransform
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class FRigUnit_MultiplyTransform : public FRigUnit_BinaryTransformOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransform
/// Size: 0x0000 (0x0000A0 - 0x0000A0)
class FRigUnit_GetRelativeTransform : public FRigUnit_BinaryTransformOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
};

/// Struct /Script/ControlRig.RigUnit_BinaryVectorOp
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_BinaryVectorOp : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FVector)                                   Argument0                                                   OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Argument1                                                   OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Multiply_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_Multiply_VectorVector : public FRigUnit_BinaryVectorOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_Add_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_Add_VectorVector : public FRigUnit_BinaryVectorOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_Subtract_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_Subtract_VectorVector : public FRigUnit_BinaryVectorOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_Divide_VectorVector
/// Size: 0x0000 (0x000030 - 0x000030)
class FRigUnit_Divide_VectorVector : public FRigUnit_BinaryVectorOp
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
};

/// Struct /Script/ControlRig.RigUnit_Distance_VectorVector
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_Distance_VectorVector : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FVector)                                   Argument0                                                   OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Argument1                                                   OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorBezierFourPoint
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigUnit_MathVectorBezierFourPoint : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(getStruct<T>, {0x8, 48, 0, 0})
	DMember(float)                                     T                                                           OFFSET(get<float>, {0x38, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x3C, 12, 0, 0})
	SMember(FVector)                                   Tangent                                                     OFFSET(getStruct<T>, {0x48, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MathVectorMakeBezierFourPoint
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_MathVectorMakeBezierFourPoint : public FRigVMFunction_MathVectorBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(getStruct<T>, {0x8, 48, 0, 0})
};

/// Struct /Script/ControlRig.AimTarget
/// Size: 0x0050 (0x000000 - 0x000050)
class FAimTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FVector)                                   AlignVector                                                 OFFSET(getStruct<T>, {0x40, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_AimConstraint_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FConstraintData>)                   ConstraintData                                              OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint
/// Size: 0x0060 (0x000100 - 0x000160)
class FRigUnit_AimConstraint : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FName)                                     Joint                                                       OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	CMember(EAimMode)                                  AimMode                                                     OFFSET(get<T>, {0x108, 1, 0, 0})
	CMember(EAimMode)                                  UpMode                                                      OFFSET(get<T>, {0x109, 1, 0, 0})
	SMember(FVector)                                   AimVector                                                   OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
	SMember(FVector)                                   UpVector                                                    OFFSET(getStruct<T>, {0x118, 12, 0, 0})
	CMember(TArray<FAimTarget>)                        AimTargets                                                  OFFSET(get<T>, {0x128, 16, 0, 0})
	CMember(TArray<FAimTarget>)                        UpTargets                                                   OFFSET(get<T>, {0x138, 16, 0, 0})
	SMember(FRigUnit_AimConstraint_WorkData)           WorkData                                                    OFFSET(getStruct<T>, {0x148, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ApplyFK
/// Size: 0x0090 (0x000100 - 0x000190)
class FRigUnit_ApplyFK : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     Joint                                                       OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	SMember(FTransformFilter)                          Filter                                                      OFFSET(getStruct<T>, {0x140, 9, 0, 0})
	CMember(EApplyTransformMode)                       ApplyTransformMode                                          OFFSET(get<T>, {0x149, 1, 0, 0})
	CMember(ETransformSpaceMode)                       ApplyTransformSpace                                         OFFSET(get<T>, {0x14A, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               OFFSET(getStruct<T>, {0x150, 48, 0, 0})
	SMember(FName)                                     BaseJoint                                                   OFFSET(getStruct<T>, {0x180, 8, 0, 0})
};

/// Struct /Script/ControlRig.BlendTarget
/// Size: 0x0040 (0x000000 - 0x000040)
class FBlendTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BlendTransform
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_BlendTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FTransform)                                Source                                                      OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	CMember(TArray<FBlendTarget>)                      Targets                                                     OFFSET(get<T>, {0x40, 16, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x50, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetJointTransform
/// Size: 0x0080 (0x000100 - 0x000180)
class FRigUnit_GetJointTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FName)                                     Joint                                                       OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	CMember(ETransformGetterType)                      Type                                                        OFFSET(get<T>, {0x108, 1, 0, 0})
	CMember(ETransformSpaceMode)                       TransformSpace                                              OFFSET(get<T>, {0x109, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	SMember(FName)                                     BaseJoint                                                   OFFSET(getStruct<T>, {0x140, 8, 0, 0})
	SMember(FTransform)                                Output                                                      OFFSET(getStruct<T>, {0x150, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKFK
/// Size: 0x01B0 (0x000100 - 0x0002B0)
class FRigUnit_TwoBoneIKFK : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 688;

public:
	SMember(FName)                                     StartJoint                                                  OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FName)                                     EndJoint                                                    OFFSET(getStruct<T>, {0x108, 8, 0, 0})
	SMember(FVector)                                   PoleTarget                                                  OFFSET(getStruct<T>, {0x110, 12, 0, 0})
	DMember(float)                                     Spin                                                        OFFSET(get<float>, {0x11C, 4, 0, 0})
	SMember(FTransform)                                EndEffector                                                 OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	DMember(float)                                     IKBlend                                                     OFFSET(get<float>, {0x150, 4, 0, 0})
	SMember(FTransform)                                StartJointFKTransform                                       OFFSET(getStruct<T>, {0x160, 48, 0, 0})
	SMember(FTransform)                                MidJointFKTransform                                         OFFSET(getStruct<T>, {0x190, 48, 0, 0})
	SMember(FTransform)                                EndJointFKTransform                                         OFFSET(getStruct<T>, {0x1C0, 48, 0, 0})
	DMember(float)                                     PreviousFKIKBlend                                           OFFSET(get<float>, {0x1F0, 4, 0, 0})
	SMember(FTransform)                                StartJointIKTransform                                       OFFSET(getStruct<T>, {0x200, 48, 0, 0})
	SMember(FTransform)                                MidJointIKTransform                                         OFFSET(getStruct<T>, {0x230, 48, 0, 0})
	SMember(FTransform)                                EndJointIKTransform                                         OFFSET(getStruct<T>, {0x260, 48, 0, 0})
	DMember(int32_t)                                   StartJointIndex                                             OFFSET(get<int32_t>, {0x290, 4, 0, 0})
	DMember(int32_t)                                   MidJointIndex                                               OFFSET(get<int32_t>, {0x294, 4, 0, 0})
	DMember(int32_t)                                   EndJointIndex                                               OFFSET(get<int32_t>, {0x298, 4, 0, 0})
	DMember(float)                                     UpperLimbLength                                             OFFSET(get<float>, {0x29C, 4, 0, 0})
	DMember(float)                                     LowerLimbLength                                             OFFSET(get<float>, {0x2A0, 4, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x2A4, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerGetInstruction
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_DrawContainerGetInstruction : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FName)                                     InstructionName                                             OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetColor
/// Size: 0x0020 (0x000100 - 0x000120)
class FRigUnit_DrawContainerSetColor : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FName)                                     InstructionName                                             OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x108, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetThickness
/// Size: 0x0010 (0x000100 - 0x000110)
class FRigUnit_DrawContainerSetThickness : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FName)                                     InstructionName                                             OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	DMember(float)                                     Thickness                                                   OFFSET(get<float>, {0x108, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DrawContainerSetTransform
/// Size: 0x0040 (0x000100 - 0x000140)
class FRigUnit_DrawContainerSetTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FName)                                     InstructionName                                             OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x110, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BeginExecution
/// Size: 0x00F8 (0x000008 - 0x000100)
class FRigUnit_BeginExecution : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(getStruct<T>, {0x10, 240, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_CollectionBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_CollectionBaseMutable
/// Size: 0x0000 (0x000100 - 0x000100)
class FRigUnit_CollectionBaseMutable : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/ControlRig.RigUnit_CollectionChain
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionChain : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKey)                            FirstItem                                                   OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRigElementKey)                            LastItem                                                    OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(bool)                                      Reverse                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionChainArray
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionChainArray : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKey)                            FirstItem                                                   OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRigElementKey)                            LastItem                                                    OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(bool)                                      Reverse                                                     OFFSET(get<bool>, {0x20, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearch
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionNameSearch : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     PartialName                                                 OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(ERigElementType)                           TypeToSearch                                                OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionNameSearchArray
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionNameSearchArray : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     PartialName                                                 OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(ERigElementType)                           TypeToSearch                                                OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildren
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionChildren : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bIncludeParent                                              OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bRecursive                                                  OFFSET(get<bool>, {0x15, 1, 0, 0})
	CMember(ERigElementType)                           TypeToSearch                                                OFFSET(get<T>, {0x16, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionChildrenArray
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionChildrenArray : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bIncludeParent                                              OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bRecursive                                                  OFFSET(get<bool>, {0x15, 1, 0, 0})
	CMember(ERigElementType)                           TypeToSearch                                                OFFSET(get<T>, {0x16, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetAll
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_CollectionGetAll : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ERigElementType)                           TypeToSearch                                                OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItems
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_CollectionReplaceItems : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     Old                                                         OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     New                                                         OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      RemoveInvalidItems                                          OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bAllowDuplicates                                            OFFSET(get<bool>, {0x29, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionReplaceItemsArray
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_CollectionReplaceItemsArray : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	SMember(FName)                                     Old                                                         OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FName)                                     New                                                         OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      RemoveInvalidItems                                          OFFSET(get<bool>, {0x28, 1, 0, 0})
	DMember(bool)                                      bAllowDuplicates                                            OFFSET(get<bool>, {0x29, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Result                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionItems
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_CollectionItems : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	DMember(bool)                                      bAllowDuplicates                                            OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetItems
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionGetItems : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetParentIndices
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionGetParentIndices : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionGetParentIndicesItemArray
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionGetParentIndicesItemArray : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<int32_t>)                           ParentIndices                                               OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionUnion
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_CollectionUnion : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigElementKeyCollection)                  A                                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  B                                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      bAllowDuplicates                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionIntersection
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionIntersection : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKeyCollection)                  A                                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  B                                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionDifference
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionDifference : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKeyCollection)                  A                                                           OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  B                                                           OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionReverse
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionReverse : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Reversed                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionCount
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_CollectionCount : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionItemAtIndex
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_CollectionItemAtIndex : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionLoop
/// Size: 0x0120 (0x000100 - 0x000220)
class FRigUnit_CollectionLoop : public FRigUnit_CollectionBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FName)                                     BlockToRun                                                  OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x118, 12, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x124, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x128, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x12C, 4, 0, 0})
	SMember(FControlRigExecuteContext)                 Completed                                                   OFFSET(getStruct<T>, {0x130, 240, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CollectionAddItem
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_CollectionAddItem : public FRigUnit_CollectionBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKeyCollection)                  Collection                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	SMember(FRigElementKeyCollection)                  Result                                                      OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DynamicHierarchyBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_DynamicHierarchyBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_DynamicHierarchyBaseMutable
/// Size: 0x0000 (0x000100 - 0x000100)
class FRigUnit_DynamicHierarchyBaseMutable : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/ControlRig.RigUnit_AddParent
/// Size: 0x0020 (0x000100 - 0x000120)
class FRigUnit_AddParent : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetDefaultParent
/// Size: 0x0020 (0x000100 - 0x000120)
class FRigUnit_SetDefaultParent : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SwitchParent
/// Size: 0x0020 (0x000100 - 0x000120)
class FRigUnit_SwitchParent : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(ERigSwitchParentMode)                      Mode                                                        OFFSET(get<T>, {0x100, 1, 0, 0})
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x104, 12, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x110, 12, 0, 0})
	DMember(bool)                                      bMaintainGlobal                                             OFFSET(get<bool>, {0x11C, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentWeights
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_HierarchyGetParentWeights : public FRigUnit_DynamicHierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	CMember(TArray<FRigElementWeight>)                 Weights                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FRigElementKeyCollection)                  Parents                                                     OFFSET(getStruct<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentWeightsArray
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_HierarchyGetParentWeightsArray : public FRigUnit_DynamicHierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	CMember(TArray<FRigElementWeight>)                 Weights                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FRigElementKey>)                    Parents                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetParentWeights
/// Size: 0x0020 (0x000100 - 0x000120)
class FRigUnit_HierarchySetParentWeights : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	CMember(TArray<FRigElementWeight>)                 Weights                                                     OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyReset
/// Size: 0x0000 (0x000100 - 0x000100)
class FRigUnit_HierarchyReset : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/ControlRig.RigUnit_HierarchyImportFromSkeleton
/// Size: 0x0020 (0x000100 - 0x000120)
class FRigUnit_HierarchyImportFromSkeleton : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FName)                                     Namespace                                                   OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	DMember(bool)                                      bIncludeCurves                                              OFFSET(get<bool>, {0x108, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyRemoveElement
/// Size: 0x0010 (0x000100 - 0x000110)
class FRigUnit_HierarchyRemoveElement : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 272;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	DMember(bool)                                      bSuccess                                                    OFFSET(get<bool>, {0x10C, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddElement
/// Size: 0x0020 (0x000100 - 0x000120)
class FRigUnit_HierarchyAddElement : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x10C, 8, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x114, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddBone
/// Size: 0x0040 (0x000120 - 0x000160)
class FRigUnit_HierarchyAddBone : public FRigUnit_HierarchyAddElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x150, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddNull
/// Size: 0x0040 (0x000120 - 0x000160)
class FRigUnit_HierarchyAddNull : public FRigUnit_HierarchyAddElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x150, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_Settings
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_HierarchyAddControl_Settings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     DisplayName                                                 OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_ShapeSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigUnit_HierarchyAddControl_ShapeSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0xC, 16, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControl_ProxySettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigUnit_HierarchyAddControl_ProxySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bIsProxy                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    DrivenControls                                              OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(ERigControlVisibility)                     ShapeVisibility                                             OFFSET(get<T>, {0x18, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat_LimitSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_HierarchyAddControlFloat_LimitSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FRigControlLimitEnabled)                   Limit                                                       OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	DMember(float)                                     MinValue                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     MaxValue                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat_Settings
/// Size: 0x0090 (0x000010 - 0x0000A0)
class FRigUnit_HierarchyAddControlFloat_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(ERigControlAxis)                           PrimaryAxis                                                 OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControlFloat_LimitSettings) Limits                                                OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      OFFSET(getStruct<T>, {0x30, 80, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      OFFSET(getStruct<T>, {0x80, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlElement
/// Size: 0x0030 (0x000120 - 0x000150)
class FRigUnit_HierarchyAddControlElement : public FRigUnit_HierarchyAddElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FTransform)                                OffsetTransform                                             OFFSET(getStruct<T>, {0x120, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlFloat
/// Size: 0x00B0 (0x000150 - 0x000200)
class FRigUnit_HierarchyAddControlFloat : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(float)                                     InitialValue                                                OFFSET(get<float>, {0x150, 4, 0, 0})
	SMember(FRigUnit_HierarchyAddControlFloat_Settings) Settings                                                   OFFSET(getStruct<T>, {0x160, 160, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger_LimitSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_HierarchyAddControlInteger_LimitSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FRigControlLimitEnabled)                   Limit                                                       OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	DMember(int32_t)                                   MinValue                                                    OFFSET(get<int32_t>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   MaxValue                                                    OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger_Settings
/// Size: 0x0090 (0x000010 - 0x0000A0)
class FRigUnit_HierarchyAddControlInteger_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	CMember(ERigControlAxis)                           PrimaryAxis                                                 OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControlInteger_LimitSettings) Limits                                              OFFSET(getStruct<T>, {0x14, 16, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      OFFSET(getStruct<T>, {0x30, 80, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      OFFSET(getStruct<T>, {0x80, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlInteger
/// Size: 0x00B0 (0x000150 - 0x000200)
class FRigUnit_HierarchyAddControlInteger : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 512;

public:
	DMember(int32_t)                                   InitialValue                                                OFFSET(get<int32_t>, {0x150, 4, 0, 0})
	SMember(FRigUnit_HierarchyAddControlInteger_Settings) Settings                                                 OFFSET(getStruct<T>, {0x160, 160, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FRigUnit_HierarchyAddControlVector2D_LimitSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FRigControlLimitEnabled)                   LimitX                                                      OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	SMember(FRigControlLimitEnabled)                   LimitY                                                      OFFSET(getStruct<T>, {0x2, 2, 0, 0})
	SMember(FVector2D)                                 MinValue                                                    OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FVector2D)                                 MaxValue                                                    OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 OFFSET(get<bool>, {0x14, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
/// Size: 0x00A0 (0x000010 - 0x0000B0)
class FRigUnit_HierarchyAddControlVector2D_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	CMember(ERigControlAxis)                           PrimaryAxis                                                 OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControlVector2D_LimitSettings) Limits                                             OFFSET(getStruct<T>, {0x14, 24, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      OFFSET(getStruct<T>, {0x30, 80, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      OFFSET(getStruct<T>, {0x80, 32, 0, 0})
	CMember(TArray<ERigControlTransformChannel>)       FilteredChannels                                            OFFSET(get<T>, {0xA0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D
/// Size: 0x00C0 (0x000150 - 0x000210)
class FRigUnit_HierarchyAddControlVector2D : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FVector2D)                                 InitialValue                                                OFFSET(getStruct<T>, {0x150, 8, 0, 0})
	SMember(FRigUnit_HierarchyAddControlVector2D_Settings) Settings                                                OFFSET(getStruct<T>, {0x160, 176, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FRigUnit_HierarchyAddControlVector_LimitSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FRigControlLimitEnabled)                   LimitX                                                      OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	SMember(FRigControlLimitEnabled)                   LimitY                                                      OFFSET(getStruct<T>, {0x2, 2, 0, 0})
	SMember(FRigControlLimitEnabled)                   LimitZ                                                      OFFSET(getStruct<T>, {0x4, 2, 0, 0})
	SMember(FVector)                                   MinValue                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   MaxValue                                                    OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector_Settings
/// Size: 0x00B0 (0x000010 - 0x0000C0)
class FRigUnit_HierarchyAddControlVector_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	DMember(bool)                                      bIsPosition                                                 OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FRigUnit_HierarchyAddControlVector_LimitSettings) Limits                                               OFFSET(getStruct<T>, {0x14, 36, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      OFFSET(getStruct<T>, {0x40, 80, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      OFFSET(getStruct<T>, {0x90, 32, 0, 0})
	CMember(TArray<ERigControlTransformChannel>)       FilteredChannels                                            OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlVector
/// Size: 0x00D0 (0x000150 - 0x000220)
class FRigUnit_HierarchyAddControlVector : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FVector)                                   InitialValue                                                OFFSET(getStruct<T>, {0x150, 12, 0, 0})
	SMember(FRigUnit_HierarchyAddControlVector_Settings) Settings                                                  OFFSET(getStruct<T>, {0x160, 192, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator_LimitSettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FRigUnit_HierarchyAddControlRotator_LimitSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	SMember(FRigControlLimitEnabled)                   LimitPitch                                                  OFFSET(getStruct<T>, {0x0, 2, 0, 0})
	SMember(FRigControlLimitEnabled)                   LimitYaw                                                    OFFSET(getStruct<T>, {0x2, 2, 0, 0})
	SMember(FRigControlLimitEnabled)                   LimitRoll                                                   OFFSET(getStruct<T>, {0x4, 2, 0, 0})
	SMember(FRotator)                                  MinValue                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRotator)                                  MaxValue                                                    OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(bool)                                      bDrawLimits                                                 OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator_Settings
/// Size: 0x00B0 (0x000010 - 0x0000C0)
class FRigUnit_HierarchyAddControlRotator_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FRigUnit_HierarchyAddControlRotator_LimitSettings) Limits                                              OFFSET(getStruct<T>, {0x10, 36, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      OFFSET(getStruct<T>, {0x40, 80, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      OFFSET(getStruct<T>, {0x90, 32, 0, 0})
	CMember(TArray<ERigControlTransformChannel>)       FilteredChannels                                            OFFSET(get<T>, {0xB0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlRotator
/// Size: 0x00D0 (0x000150 - 0x000220)
class FRigUnit_HierarchyAddControlRotator : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FRotator)                                  InitialValue                                                OFFSET(getStruct<T>, {0x150, 12, 0, 0})
	SMember(FRigUnit_HierarchyAddControlRotator_Settings) Settings                                                 OFFSET(getStruct<T>, {0x160, 192, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlTransform_Settings
/// Size: 0x0080 (0x000010 - 0x000090)
class FRigUnit_HierarchyAddControlTransform_Settings : public FRigUnit_HierarchyAddControl_Settings
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Shape                                                      OFFSET(getStruct<T>, {0x10, 80, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ProxySettings) Proxy                                                      OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	CMember(TArray<ERigControlTransformChannel>)       FilteredChannels                                            OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddControlTransform
/// Size: 0x00C0 (0x000150 - 0x000210)
class FRigUnit_HierarchyAddControlTransform : public FRigUnit_HierarchyAddControlElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FTransform)                                InitialValue                                                OFFSET(getStruct<T>, {0x150, 48, 0, 0})
	SMember(FRigUnit_HierarchyAddControlTransform_Settings) Settings                                               OFFSET(getStruct<T>, {0x180, 144, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelBool
/// Size: 0x0010 (0x000120 - 0x000130)
class FRigUnit_HierarchyAddAnimationChannelBool : public FRigUnit_HierarchyAddElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(bool)                                      InitialValue                                                OFFSET(get<bool>, {0x120, 1, 0, 0})
	DMember(bool)                                      MinimumValue                                                OFFSET(get<bool>, {0x121, 1, 0, 0})
	DMember(bool)                                      MaximumValue                                                OFFSET(get<bool>, {0x122, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelFloat
/// Size: 0x0010 (0x000120 - 0x000130)
class FRigUnit_HierarchyAddAnimationChannelFloat : public FRigUnit_HierarchyAddElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(float)                                     InitialValue                                                OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     MinimumValue                                                OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(float)                                     MaximumValue                                                OFFSET(get<float>, {0x128, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelInteger
/// Size: 0x0010 (0x000120 - 0x000130)
class FRigUnit_HierarchyAddAnimationChannelInteger : public FRigUnit_HierarchyAddElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(int32_t)                                   InitialValue                                                OFFSET(get<int32_t>, {0x120, 4, 0, 0})
	DMember(int32_t)                                   MinimumValue                                                OFFSET(get<int32_t>, {0x124, 4, 0, 0})
	DMember(int32_t)                                   MaximumValue                                                OFFSET(get<int32_t>, {0x128, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVector2D
/// Size: 0x0020 (0x000120 - 0x000140)
class FRigUnit_HierarchyAddAnimationChannelVector2D : public FRigUnit_HierarchyAddElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FVector2D)                                 InitialValue                                                OFFSET(getStruct<T>, {0x120, 8, 0, 0})
	SMember(FVector2D)                                 MinimumValue                                                OFFSET(getStruct<T>, {0x128, 8, 0, 0})
	SMember(FVector2D)                                 MaximumValue                                                OFFSET(getStruct<T>, {0x130, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelVector
/// Size: 0x0030 (0x000120 - 0x000150)
class FRigUnit_HierarchyAddAnimationChannelVector : public FRigUnit_HierarchyAddElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FVector)                                   InitialValue                                                OFFSET(getStruct<T>, {0x120, 12, 0, 0})
	SMember(FVector)                                   MinimumValue                                                OFFSET(getStruct<T>, {0x12C, 12, 0, 0})
	SMember(FVector)                                   MaximumValue                                                OFFSET(getStruct<T>, {0x138, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyAddAnimationChannelRotator
/// Size: 0x0030 (0x000120 - 0x000150)
class FRigUnit_HierarchyAddAnimationChannelRotator : public FRigUnit_HierarchyAddElement
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FRotator)                                  InitialValue                                                OFFSET(getStruct<T>, {0x120, 12, 0, 0})
	SMember(FRotator)                                  MinimumValue                                                OFFSET(getStruct<T>, {0x12C, 12, 0, 0})
	SMember(FRotator)                                  MaximumValue                                                OFFSET(getStruct<T>, {0x138, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetShapeSettings
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_HierarchyGetShapeSettings : public FRigUnit_DynamicHierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Settings                                                   OFFSET(getStruct<T>, {0x20, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetShapeSettings
/// Size: 0x0060 (0x000100 - 0x000160)
class FRigUnit_HierarchySetShapeSettings : public FRigUnit_DynamicHierarchyBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FRigUnit_HierarchyAddControl_ShapeSettings) Settings                                                   OFFSET(getStruct<T>, {0x110, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_HierarchyBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_HierarchyBaseMutable
/// Size: 0x0000 (0x000100 - 0x000100)
class FRigUnit_HierarchyBaseMutable : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParent
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigUnit_HierarchyGetParent : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(getStruct<T>, {0x20, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParents
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigUnit_HierarchyGetParents : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bIncludeChild                                               OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x15, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Parents                                                     OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedParents                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetParentsItemArray
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigUnit_HierarchyGetParentsItemArray : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bIncludeChild                                               OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bReverse                                                    OFFSET(get<bool>, {0x15, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Parents                                                     OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedParents                                               OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetChildren
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigUnit_HierarchyGetChildren : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bIncludeParent                                              OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bRecursive                                                  OFFSET(get<bool>, {0x15, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Children                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedChildren                                              OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblings
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigUnit_HierarchyGetSiblings : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bIncludeItem                                                OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Siblings                                                    OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedItem                                                  OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedSiblings                                              OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetSiblingsItemArray
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigUnit_HierarchyGetSiblingsItemArray : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bIncludeItem                                                OFFSET(get<bool>, {0x14, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Siblings                                                    OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedItem                                                  OFFSET(getStruct<T>, {0x28, 32, 0, 0})
	SMember(FRigElementKeyCollection)                  CachedSiblings                                              OFFSET(getStruct<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetPose
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_HierarchyGetPose : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      Initial                                                     OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x9, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  ItemsToGet                                                  OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FRigPose)                                  Pose                                                        OFFSET(getStruct<T>, {0x20, 112, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchyGetPoseItemArray
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_HierarchyGetPoseItemArray : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	DMember(bool)                                      Initial                                                     OFFSET(get<bool>, {0x8, 1, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x9, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    ItemsToGet                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FRigPose)                                  Pose                                                        OFFSET(getStruct<T>, {0x20, 112, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetPose
/// Size: 0x0090 (0x000100 - 0x000190)
class FRigUnit_HierarchySetPose : public FRigUnit_HierarchyBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(getStruct<T>, {0x100, 112, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x170, 1, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x171, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  ItemsToSet                                                  OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x188, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HierarchySetPoseItemArray
/// Size: 0x0090 (0x000100 - 0x000190)
class FRigUnit_HierarchySetPoseItemArray : public FRigUnit_HierarchyBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(getStruct<T>, {0x100, 112, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x170, 1, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x171, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    ItemsToSet                                                  OFFSET(get<T>, {0x178, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x188, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseIsEmpty
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_PoseIsEmpty : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(getStruct<T>, {0x8, 112, 0, 0})
	DMember(bool)                                      IsEmpty                                                     OFFSET(get<bool>, {0x78, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetItems
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_PoseGetItems : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(getStruct<T>, {0x8, 112, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x78, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetItemsItemArray
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_PoseGetItemsItemArray : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(getStruct<T>, {0x8, 112, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0x78, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetDelta
/// Size: 0x0120 (0x000008 - 0x000128)
class FRigUnit_PoseGetDelta : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 296;

public:
	SMember(FRigPose)                                  PoseA                                                       OFFSET(getStruct<T>, {0x8, 112, 0, 0})
	SMember(FRigPose)                                  PoseB                                                       OFFSET(getStruct<T>, {0x78, 112, 0, 0})
	DMember(float)                                     PositionThreshold                                           OFFSET(get<float>, {0xE8, 4, 0, 0})
	DMember(float)                                     RotationThreshold                                           OFFSET(get<float>, {0xEC, 4, 0, 0})
	DMember(float)                                     ScaleThreshold                                              OFFSET(get<float>, {0xF0, 4, 0, 0})
	DMember(float)                                     CurveThreshold                                              OFFSET(get<float>, {0xF4, 4, 0, 0})
	CMember(ERigElementType)                           ElementType                                                 OFFSET(get<T>, {0xF8, 1, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0xF9, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  ItemsToCompare                                              OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	DMember(bool)                                      PosesAreEqual                                               OFFSET(get<bool>, {0x110, 1, 0, 0})
	SMember(FRigElementKeyCollection)                  ItemsWithDelta                                              OFFSET(getStruct<T>, {0x118, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetTransform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigUnit_PoseGetTransform : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(getStruct<T>, {0x8, 112, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x78, 12, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x84, 1, 0, 0})
	DMember(bool)                                      Valid                                                       OFFSET(get<bool>, {0x85, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x90, 48, 0, 0})
	DMember(float)                                     CurveValue                                                  OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(int32_t)                                   CachedPoseElementIndex                                      OFFSET(get<int32_t>, {0xC4, 4, 0, 0})
	DMember(int32_t)                                   CachedPoseHash                                              OFFSET(get<int32_t>, {0xC8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetTransformArray
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_PoseGetTransformArray : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(getStruct<T>, {0x8, 112, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x78, 1, 0, 0})
	DMember(bool)                                      Valid                                                       OFFSET(get<bool>, {0x79, 1, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseGetCurve
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_PoseGetCurve : public FRigUnit_HierarchyBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FRigPose)                                  Pose                                                        OFFSET(getStruct<T>, {0x8, 112, 0, 0})
	SMember(FName)                                     Curve                                                       OFFSET(getStruct<T>, {0x78, 8, 0, 0})
	DMember(bool)                                      Valid                                                       OFFSET(get<bool>, {0x80, 1, 0, 0})
	DMember(float)                                     CurveValue                                                  OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(int32_t)                                   CachedPoseElementIndex                                      OFFSET(get<int32_t>, {0x88, 4, 0, 0})
	DMember(int32_t)                                   CachedPoseHash                                              OFFSET(get<int32_t>, {0x8C, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PoseLoop
/// Size: 0x01F0 (0x000100 - 0x0002F0)
class FRigUnit_PoseLoop : public FRigUnit_HierarchyBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 752;

public:
	SMember(FName)                                     BlockToRun                                                  OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FRigPose)                                  Pose                                                        OFFSET(getStruct<T>, {0x108, 112, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x178, 12, 0, 0})
	SMember(FTransform)                                GlobalTransform                                             OFFSET(getStruct<T>, {0x190, 48, 0, 0})
	SMember(FTransform)                                LocalTransform                                              OFFSET(getStruct<T>, {0x1C0, 48, 0, 0})
	DMember(float)                                     CurveValue                                                  OFFSET(get<float>, {0x1F0, 4, 0, 0})
	DMember(int32_t)                                   Index                                                       OFFSET(get<int32_t>, {0x1F4, 4, 0, 0})
	DMember(int32_t)                                   Count                                                       OFFSET(get<int32_t>, {0x1F8, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x1FC, 4, 0, 0})
	SMember(FControlRigExecuteContext)                 Completed                                                   OFFSET(getStruct<T>, {0x200, 240, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_InteractionExecution
/// Size: 0x00F8 (0x000008 - 0x000100)
class FRigUnit_InteractionExecution : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(getStruct<T>, {0x10, 240, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_InverseExecution
/// Size: 0x00F8 (0x000008 - 0x000100)
class FRigUnit_InverseExecution : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(getStruct<T>, {0x10, 240, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_IsInteracting
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_IsInteracting : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(bool)                                      bIsInteracting                                              OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bIsTranslating                                              OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bIsRotating                                                 OFFSET(get<bool>, {0xA, 1, 0, 0})
	DMember(bool)                                      bIsScaling                                                  OFFSET(get<bool>, {0xB, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemBase
/// Size: 0x0000 (0x000008 - 0x000008)
class FRigUnit_ItemBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
};

/// Struct /Script/ControlRig.RigUnit_ItemBaseMutable
/// Size: 0x0000 (0x000100 - 0x000100)
class FRigUnit_ItemBaseMutable : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
};

/// Struct /Script/ControlRig.RigUnit_ItemExists
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_ItemExists : public FRigUnit_ItemBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      Exists                                                      OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemReplace
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ItemReplace : public FRigUnit_ItemBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FName)                                     Old                                                         OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	SMember(FName)                                     New                                                         OFFSET(getStruct<T>, {0x1C, 8, 0, 0})
	SMember(FRigElementKey)                            Result                                                      OFFSET(getStruct<T>, {0x24, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemEquals
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_ItemEquals : public FRigUnit_ItemBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKey)                            A                                                           OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRigElementKey)                            B                                                           OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemNotEquals
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_ItemNotEquals : public FRigUnit_ItemBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKey)                            A                                                           OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRigElementKey)                            B                                                           OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemTypeEquals
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_ItemTypeEquals : public FRigUnit_ItemBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKey)                            A                                                           OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRigElementKey)                            B                                                           OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemTypeNotEquals
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_ItemTypeNotEquals : public FRigUnit_ItemBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FRigElementKey)                            A                                                           OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FRigElementKey)                            B                                                           OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(bool)                                      Result                                                      OFFSET(get<bool>, {0x20, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemToName
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ItemToName : public FRigUnit_ItemBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FRigElementKey)                            Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FName)                                     Result                                                      OFFSET(getStruct<T>, {0x14, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PrepareForExecution
/// Size: 0x00F8 (0x000008 - 0x000100)
class FRigUnit_PrepareForExecution : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(getStruct<T>, {0x10, 240, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SequenceExecution
/// Size: 0x04B8 (0x000008 - 0x0004C0)
class FRigUnit_SequenceExecution : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 1216;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(getStruct<T>, {0x10, 240, 0, 0})
	SMember(FControlRigExecuteContext)                 A                                                           OFFSET(getStruct<T>, {0x100, 240, 0, 0})
	SMember(FControlRigExecuteContext)                 B                                                           OFFSET(getStruct<T>, {0x1F0, 240, 0, 0})
	SMember(FControlRigExecuteContext)                 C                                                           OFFSET(getStruct<T>, {0x2E0, 240, 0, 0})
	SMember(FControlRigExecuteContext)                 D                                                           OFFSET(getStruct<T>, {0x3D0, 240, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SequenceAggregate
/// Size: 0x02D8 (0x000008 - 0x0002E0)
class FRigUnit_SequenceAggregate : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 736;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(getStruct<T>, {0x10, 240, 0, 0})
	SMember(FControlRigExecuteContext)                 A                                                           OFFSET(getStruct<T>, {0x100, 240, 0, 0})
	SMember(FControlRigExecuteContext)                 B                                                           OFFSET(getStruct<T>, {0x1F0, 240, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AddBoneTransform
/// Size: 0x0070 (0x000100 - 0x000170)
class FRigUnit_AddBoneTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(bool)                                      bPostMultiply                                               OFFSET(get<bool>, {0x144, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x145, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0x148, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Item
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_Item : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemArray
/// Size: 0x0010 (0x000008 - 0x000018)
class FRigUnit_ItemArray : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneName
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_BoneName : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpaceName
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_SpaceName : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ControlName
/// Size: 0x0008 (0x000008 - 0x000010)
class FRigUnit_ControlName : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetAnimationChannelBase
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_GetAnimationChannelBase : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Channel                                                     OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x18, 1, 0, 0})
	SMember(FRigElementKey)                            CachedChannelKey                                            OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	DMember(int32_t)                                   CachedChannelHash                                           OFFSET(get<int32_t>, {0x28, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetBoolAnimationChannel
/// Size: 0x0008 (0x000030 - 0x000038)
class FRigUnit_GetBoolAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x30, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetFloatAnimationChannel
/// Size: 0x0008 (0x000030 - 0x000038)
class FRigUnit_GetFloatAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x30, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetIntAnimationChannel
/// Size: 0x0008 (0x000030 - 0x000038)
class FRigUnit_GetIntAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x30, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetVector2DAnimationChannel
/// Size: 0x0008 (0x000030 - 0x000038)
class FRigUnit_GetVector2DAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FVector2D)                                 Value                                                       OFFSET(getStruct<T>, {0x30, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetVectorAnimationChannel
/// Size: 0x0010 (0x000030 - 0x000040)
class FRigUnit_GetVectorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x30, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetRotatorAnimationChannel
/// Size: 0x0010 (0x000030 - 0x000040)
class FRigUnit_GetRotatorAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRotator)                                  Value                                                       OFFSET(getStruct<T>, {0x30, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetTransformAnimationChannel
/// Size: 0x0030 (0x000030 - 0x000060)
class FRigUnit_GetTransformAnimationChannel : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetAnimationChannelBase
/// Size: 0x00F0 (0x000030 - 0x000120)
class FRigUnit_SetAnimationChannelBase : public FRigUnit_GetAnimationChannelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	SMember(FControlRigExecuteContext)                 ExecuteContext                                              OFFSET(getStruct<T>, {0x30, 240, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoolAnimationChannel
/// Size: 0x0010 (0x000120 - 0x000130)
class FRigUnit_SetBoolAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(bool)                                      Value                                                       OFFSET(get<bool>, {0x120, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetFloatAnimationChannel
/// Size: 0x0010 (0x000120 - 0x000130)
class FRigUnit_SetFloatAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x120, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetIntAnimationChannel
/// Size: 0x0010 (0x000120 - 0x000130)
class FRigUnit_SetIntAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	DMember(int32_t)                                   Value                                                       OFFSET(get<int32_t>, {0x120, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetVector2DAnimationChannel
/// Size: 0x0010 (0x000120 - 0x000130)
class FRigUnit_SetVector2DAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FVector2D)                                 Value                                                       OFFSET(getStruct<T>, {0x120, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetVectorAnimationChannel
/// Size: 0x0010 (0x000120 - 0x000130)
class FRigUnit_SetVectorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x120, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRotatorAnimationChannel
/// Size: 0x0010 (0x000120 - 0x000130)
class FRigUnit_SetRotatorAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FRotator)                                  Value                                                       OFFSET(getStruct<T>, {0x120, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTransformAnimationChannel
/// Size: 0x0030 (0x000120 - 0x000150)
class FRigUnit_SetTransformAnimationChannel : public FRigUnit_SetAnimationChannelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x120, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetBoneTransform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_GetBoneTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlInitialTransform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_GetControlInitialTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlBool
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_GetControlBool : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      BoolValue                                                   OFFSET(get<bool>, {0x10, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlFloat
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_GetControlFloat : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlInteger
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_GetControlInteger : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(int32_t)                                   IntegerValue                                                OFFSET(get<int32_t>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   Minimum                                                     OFFSET(get<int32_t>, {0x14, 4, 0, 0})
	DMember(int32_t)                                   Maximum                                                     OFFSET(get<int32_t>, {0x18, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector2D
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigUnit_GetControlVector2D : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FVector2D)                                 Vector                                                      OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FVector2D)                                 Minimum                                                     OFFSET(getStruct<T>, {0x18, 8, 0, 0})
	SMember(FVector2D)                                 Maximum                                                     OFFSET(getStruct<T>, {0x20, 8, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlVector
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigUnit_GetControlVector : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   Minimum                                                     OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FVector)                                   Maximum                                                     OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x38, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlRotator
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigUnit_GetControlRotator : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FRotator)                                  Rotator                                                     OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FRotator)                                  Minimum                                                     OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	SMember(FRotator)                                  Maximum                                                     OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x38, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlTransform
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigUnit_GetControlTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FTransform)                                Minimum                                                     OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	SMember(FTransform)                                Maximum                                                     OFFSET(getStruct<T>, {0x80, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetCurveValue
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_GetCurveValue : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FName)                                     Curve                                                       OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	DMember(bool)                                      Valid                                                       OFFSET(get<bool>, {0x10, 1, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedCurveIndex                                            OFFSET(getStruct<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetInitialBoneTransform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_GetInitialBoneTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeBoneTransform
/// Size: 0x0088 (0x000008 - 0x000090)
class FRigUnit_GetRelativeBoneTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x10, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0x50, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedSpace                                                 OFFSET(getStruct<T>, {0x70, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetRelativeTransformForItem
/// Size: 0x0098 (0x000008 - 0x0000A0)
class FRigUnit_GetRelativeTransformForItem : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bChildInitial                                               OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(bool)                                      bParentInitial                                              OFFSET(get<bool>, {0x24, 1, 0, 0})
	SMember(FTransform)                                RelativeTransform                                           OFFSET(getStruct<T>, {0x30, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(getStruct<T>, {0x60, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(getStruct<T>, {0x80, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetSpaceTransform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_GetSpaceTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(ERigVMTransformSpace)                      SpaceType                                                   OFFSET(get<T>, {0x10, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetTransform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_GetTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x15, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x20, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x50, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetTransformArray
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_GetTransformArray : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x19, 1, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedIndex                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetTransformItemArray
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_GetTransformItemArray : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x18, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x19, 1, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedIndex                                                 OFFSET(get<T>, {0x30, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigDispatch_MetadataBase
/// Size: 0x0030 (0x000018 - 0x000048)
class FRigDispatch_MetadataBase : public FRigDispatchFactory
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ControlRig.RigDispatch_GetMetadata
/// Size: 0x0000 (0x000048 - 0x000048)
class FRigDispatch_GetMetadata : public FRigDispatch_MetadataBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ControlRig.RigDispatch_SetMetadata
/// Size: 0x0000 (0x000048 - 0x000048)
class FRigDispatch_SetMetadata : public FRigDispatch_MetadataBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
};

/// Struct /Script/ControlRig.RigUnit_RemoveMetadata
/// Size: 0x0040 (0x000100 - 0x000140)
class FRigUnit_RemoveMetadata : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x10C, 8, 0, 0})
	DMember(bool)                                      Removed                                                     OFFSET(get<bool>, {0x114, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x118, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RemoveAllMetadata
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_RemoveAllMetadata : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	DMember(bool)                                      Removed                                                     OFFSET(get<bool>, {0x10C, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x110, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HasMetadata
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_HasMetadata : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	CMember(ERigMetadataType)                          Type                                                        OFFSET(get<T>, {0x1C, 1, 0, 0})
	DMember(bool)                                      Found                                                       OFFSET(get<bool>, {0x1D, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadata
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_FindItemsWithMetadata : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	SMember(FName)                                     Name                                                        OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(ERigMetadataType)                          Type                                                        OFFSET(get<T>, {0x10, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetMetadataTags
/// Size: 0x0040 (0x000008 - 0x000048)
class FRigUnit_GetMetadataTags : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x18, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x28, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMetadataTag
/// Size: 0x0040 (0x000100 - 0x000140)
class FRigUnit_SetMetadataTag : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FName)                                     Tag                                                         OFFSET(getStruct<T>, {0x10C, 8, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x118, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMetadataTagArray
/// Size: 0x0040 (0x000100 - 0x000140)
class FRigUnit_SetMetadataTagArray : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x120, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RemoveMetadataTag
/// Size: 0x0040 (0x000100 - 0x000140)
class FRigUnit_RemoveMetadataTag : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FName)                                     Tag                                                         OFFSET(getStruct<T>, {0x10C, 8, 0, 0})
	DMember(bool)                                      Removed                                                     OFFSET(get<bool>, {0x114, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x118, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HasMetadataTag
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_HasMetadataTag : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FName)                                     Tag                                                         OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	DMember(bool)                                      Found                                                       OFFSET(get<bool>, {0x1C, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_HasMetadataTagArray
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_HasMetadataTagArray : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      Found                                                       OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x30, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadataTag
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_FindItemsWithMetadataTag : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FName)                                     Tag                                                         OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FindItemsWithMetadataTagArray
/// Size: 0x0020 (0x000008 - 0x000028)
class FRigUnit_FindItemsWithMetadataTagArray : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x18, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FilterItemsByMetadataTags
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_FilterItemsByMetadataTags : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FName>)                             Tags                                                        OFFSET(get<T>, {0x18, 16, 0, 0})
	DMember(bool)                                      Inclusive                                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
	CMember(TArray<FRigElementKey>)                    Result                                                      OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedIndices                                               OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_OffsetTransformForItem
/// Size: 0x0070 (0x000100 - 0x000170)
class FRigUnit_OffsetTransformForItem : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FTransform)                                OffsetTransform                                             OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x144, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x148, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraint
/// Size: 0x0110 (0x000100 - 0x000210)
class FRigUnit_ParentSwitchConstraint : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FRigElementKey)                            Subject                                                     OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x10C, 4, 0, 0})
	SMember(FRigElementKeyCollection)                  Parents                                                     OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	SMember(FTransform)                                InitialGlobalTransform                                      OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x150, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x160, 48, 0, 0})
	DMember(bool)                                      Switched                                                    OFFSET(get<bool>, {0x190, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedSubject                                               OFFSET(getStruct<T>, {0x198, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(getStruct<T>, {0x1B8, 32, 0, 0})
	SMember(FTransform)                                RelativeOffset                                              OFFSET(getStruct<T>, {0x1E0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ParentSwitchConstraintArray
/// Size: 0x0110 (0x000100 - 0x000210)
class FRigUnit_ParentSwitchConstraintArray : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FRigElementKey)                            Subject                                                     OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	DMember(int32_t)                                   ParentIndex                                                 OFFSET(get<int32_t>, {0x10C, 4, 0, 0})
	CMember(TArray<FRigElementKey>)                    Parents                                                     OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FTransform)                                InitialGlobalTransform                                      OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x150, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x160, 48, 0, 0})
	DMember(bool)                                      Switched                                                    OFFSET(get<bool>, {0x190, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedSubject                                               OFFSET(getStruct<T>, {0x198, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(getStruct<T>, {0x1B8, 32, 0, 0})
	SMember(FTransform)                                RelativeOffset                                              OFFSET(getStruct<T>, {0x1E0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ProjectTransformToNewParent
/// Size: 0x00C8 (0x000008 - 0x0000D0)
class FRigUnit_ProjectTransformToNewParent : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bChildInitial                                               OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FRigElementKey)                            OldParent                                                   OFFSET(getStruct<T>, {0x18, 12, 0, 0})
	DMember(bool)                                      bOldParentInitial                                           OFFSET(get<bool>, {0x24, 1, 0, 0})
	SMember(FRigElementKey)                            NewParent                                                   OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	DMember(bool)                                      bNewParentInitial                                           OFFSET(get<bool>, {0x34, 1, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x40, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(getStruct<T>, {0x70, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedOldParent                                             OFFSET(getStruct<T>, {0x90, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedNewParent                                             OFFSET(getStruct<T>, {0xB0, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PropagateTransform
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_PropagateTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	DMember(bool)                                      bRecomputeGlobal                                            OFFSET(get<bool>, {0x10C, 1, 0, 0})
	DMember(bool)                                      bApplyToChildren                                            OFFSET(get<bool>, {0x10D, 1, 0, 0})
	DMember(bool)                                      bRecursive                                                  OFFSET(get<bool>, {0x10E, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x110, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SendEvent
/// Size: 0x0020 (0x000100 - 0x000120)
class FRigUnit_SendEvent : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(ERigEvent)                                 Event                                                       OFFSET(get<T>, {0x100, 1, 0, 0})
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x104, 12, 0, 0})
	DMember(float)                                     OffsetInSeconds                                             OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(bool)                                      bEnable                                                     OFFSET(get<bool>, {0x114, 1, 0, 0})
	DMember(bool)                                      bOnlyDuringInteraction                                      OFFSET(get<bool>, {0x115, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneInitialTransform
/// Size: 0x00A0 (0x000100 - 0x0001A0)
class FRigUnit_SetBoneInitialTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x140, 48, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x170, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x171, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0x178, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneRotation
/// Size: 0x0050 (0x000100 - 0x000150)
class FRigUnit_SetBoneRotation : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x120, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x128, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0x130, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTransform
/// Size: 0x00A0 (0x000100 - 0x0001A0)
class FRigUnit_SetBoneTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x140, 48, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x170, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x174, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x178, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0x180, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetBoneTranslation
/// Size: 0x0040 (0x000100 - 0x000140)
class FRigUnit_SetBoneTranslation : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FVector)                                   Translation                                                 OFFSET(getStruct<T>, {0x108, 12, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x114, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x11C, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0x120, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlColor
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_GetControlColor : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlColor
/// Size: 0x0040 (0x000100 - 0x000140)
class FRigUnit_SetControlColor : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x108, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x118, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlDrivenList
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_GetControlDrivenList : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	CMember(TArray<FRigElementKey>)                    Driven                                                      OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlDrivenList
/// Size: 0x0040 (0x000100 - 0x000140)
class FRigUnit_SetControlDrivenList : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	CMember(TArray<FRigElementKey>)                    Driven                                                      OFFSET(get<T>, {0x108, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x118, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlOffset
/// Size: 0x0070 (0x000100 - 0x000170)
class FRigUnit_SetControlOffset : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FTransform)                                Offset                                                      OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x140, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x148, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetShapeTransform
/// Size: 0x0058 (0x000008 - 0x000060)
class FRigUnit_GetShapeTransform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x8, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetShapeTransform
/// Size: 0x0060 (0x000100 - 0x000160)
class FRigUnit_SetShapeTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x140, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlBool
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_SetControlBool : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	DMember(bool)                                      BoolValue                                                   OFFSET(get<bool>, {0x108, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x110, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool_Entry
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigUnit_SetMultiControlBool_Entry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(bool)                                      BoolValue                                                   OFFSET(get<bool>, {0x8, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlBool
/// Size: 0x0020 (0x000100 - 0x000120)
class FRigUnit_SetMultiControlBool : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 288;

public:
	CMember(TArray<FRigUnit_SetMultiControlBool_Entry>) Entries                                                    OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x110, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlFloat
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_SetControlFloat : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x108, 4, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x10C, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x110, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat_Entry
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigUnit_SetMultiControlFloat_Entry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     FloatValue                                                  OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlFloat
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_SetMultiControlFloat : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FRigUnit_SetMultiControlFloat_Entry>) Entries                                                   OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x110, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlInteger
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_SetControlInteger : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	DMember(int32_t)                                   Weight                                                      OFFSET(get<int32_t>, {0x108, 4, 0, 0})
	DMember(int32_t)                                   IntegerValue                                                OFFSET(get<int32_t>, {0x10C, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x110, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger_Entry
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigUnit_SetMultiControlInteger_Entry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   IntegerValue                                                OFFSET(get<int32_t>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlInteger
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_SetMultiControlInteger : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FRigUnit_SetMultiControlInteger_Entry>) Entries                                                 OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x110, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector2D
/// Size: 0x0040 (0x000100 - 0x000140)
class FRigUnit_SetControlVector2D : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x108, 4, 0, 0})
	SMember(FVector2D)                                 Vector                                                      OFFSET(getStruct<T>, {0x10C, 8, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x118, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D_Entry
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_SetMultiControlVector2D_Entry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector2D)                                 Vector                                                      OFFSET(getStruct<T>, {0x8, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlVector2D
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_SetMultiControlVector2D : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FRigUnit_SetMultiControlVector2D_Entry>) Entries                                                OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x110, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlVector
/// Size: 0x0040 (0x000100 - 0x000140)
class FRigUnit_SetControlVector : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x108, 4, 0, 0})
	SMember(FVector)                                   Vector                                                      OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x118, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x120, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlRotator
/// Size: 0x0040 (0x000100 - 0x000140)
class FRigUnit_SetControlRotator : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x108, 4, 0, 0})
	SMember(FRotator)                                  Rotator                                                     OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x118, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x120, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator_Entry
/// Size: 0x0018 (0x000000 - 0x000018)
class FRigUnit_SetMultiControlRotator_Entry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FRotator)                                  Rotator                                                     OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x14, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetMultiControlRotator
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_SetMultiControlRotator : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FRigUnit_SetMultiControlRotator_Entry>) Entries                                                 OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x110, 4, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x118, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlTransform
/// Size: 0x0070 (0x000100 - 0x000170)
class FRigUnit_SetControlTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FName)                                     Control                                                     OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x108, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x140, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x148, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_GetControlVisibility
/// Size: 0x0030 (0x000008 - 0x000038)
class FRigUnit_GetControlVisibility : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x14, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedControlIndex                                          OFFSET(getStruct<T>, {0x18, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetControlVisibility
/// Size: 0x0040 (0x000100 - 0x000140)
class FRigUnit_SetControlVisibility : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FString)                                   Pattern                                                     OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	DMember(bool)                                      bVisible                                                    OFFSET(get<bool>, {0x120, 1, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedControlIndices                                        OFFSET(get<T>, {0x128, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetCurveValue
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_SetCurveValue : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FName)                                     Curve                                                       OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x108, 4, 0, 0})
	SMember(FCachedRigElement)                         CachedCurveIndex                                            OFFSET(getStruct<T>, {0x110, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeBoneTransform
/// Size: 0x0090 (0x000100 - 0x000190)
class FRigUnit_SetRelativeBoneTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x108, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x144, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedBone                                                  OFFSET(getStruct<T>, {0x148, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            OFFSET(getStruct<T>, {0x168, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTransformForItem
/// Size: 0x00A0 (0x000100 - 0x0001A0)
class FRigUnit_SetRelativeTransformForItem : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
	DMember(bool)                                      bParentInitial                                              OFFSET(get<bool>, {0x118, 1, 0, 0})
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x154, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(getStruct<T>, {0x158, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(getStruct<T>, {0x178, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeTranslationForItem
/// Size: 0x0070 (0x000100 - 0x000170)
class FRigUnit_SetRelativeTranslationForItem : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
	DMember(bool)                                      bParentInitial                                              OFFSET(get<bool>, {0x118, 1, 0, 0})
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x11C, 12, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x12C, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(getStruct<T>, {0x130, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(getStruct<T>, {0x150, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRelativeRotationForItem
/// Size: 0x0080 (0x000100 - 0x000180)
class FRigUnit_SetRelativeRotationForItem : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FRigElementKey)                            Parent                                                      OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
	DMember(bool)                                      bParentInitial                                              OFFSET(get<bool>, {0x118, 1, 0, 0})
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x120, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x134, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedChild                                                 OFFSET(getStruct<T>, {0x138, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedParent                                                OFFSET(getStruct<T>, {0x158, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceInitialTransform
/// Size: 0x00A0 (0x000100 - 0x0001A0)
class FRigUnit_SetSpaceInitialTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FName)                                     SpaceName                                                   OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0x140, 48, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x170, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            OFFSET(getStruct<T>, {0x178, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetSpaceTransform
/// Size: 0x0070 (0x000100 - 0x000170)
class FRigUnit_SetSpaceTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x108, 4, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	CMember(ERigVMTransformSpace)                      SpaceType                                                   OFFSET(get<T>, {0x140, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedSpaceIndex                                            OFFSET(getStruct<T>, {0x148, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTransform
/// Size: 0x0070 (0x000100 - 0x000170)
class FRigUnit_SetTransform : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x10C, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x10D, 1, 0, 0})
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x144, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x148, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTranslation
/// Size: 0x0050 (0x000100 - 0x000150)
class FRigUnit_SetTranslation : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x10C, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x10D, 1, 0, 0})
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x110, 12, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x120, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x128, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetRotation
/// Size: 0x0050 (0x000100 - 0x000150)
class FRigUnit_SetRotation : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x10C, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x10D, 1, 0, 0})
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x110, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x124, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x128, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetScale
/// Size: 0x0050 (0x000100 - 0x000150)
class FRigUnit_SetScale : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x10C, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x10D, 1, 0, 0})
	SMember(FVector)                                   Scale                                                       OFFSET(getStruct<T>, {0x110, 12, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x120, 1, 0, 0})
	SMember(FCachedRigElement)                         CachedIndex                                                 OFFSET(getStruct<T>, {0x128, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTransformArray
/// Size: 0x0040 (0x000100 - 0x000140)
class FRigUnit_SetTransformArray : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x110, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x111, 1, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x118, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x12C, 1, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedIndex                                                 OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SetTransformItemArray
/// Size: 0x0040 (0x000100 - 0x000140)
class FRigUnit_SetTransformItemArray : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 320;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(ERigVMTransformSpace)                      Space                                                       OFFSET(get<T>, {0x110, 1, 0, 0})
	DMember(bool)                                      bInitial                                                    OFFSET(get<bool>, {0x111, 1, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x118, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x128, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x12C, 1, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedIndex                                                 OFFSET(get<T>, {0x130, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_UnsetCurveValue
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_UnsetCurveValue : public FRigUnitMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FName)                                     Curve                                                       OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FCachedRigElement)                         CachedCurveIndex                                            OFFSET(getStruct<T>, {0x108, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Transform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_ToWorldSpace_Transform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                World                                                       OFFSET(getStruct<T>, {0x40, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Transform
/// Size: 0x0068 (0x000008 - 0x000070)
class FRigUnit_ToRigSpace_Transform : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 112;

public:
	SMember(FTransform)                                Value                                                       OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FTransform)                                Global                                                      OFFSET(getStruct<T>, {0x40, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Location
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ToWorldSpace_Location : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   World                                                       OFFSET(getStruct<T>, {0x14, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Location
/// Size: 0x0018 (0x000008 - 0x000020)
class FRigUnit_ToRigSpace_Location : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FVector)                                   Value                                                       OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Global                                                      OFFSET(getStruct<T>, {0x14, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToWorldSpace_Rotation
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ToWorldSpace_Rotation : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     World                                                       OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ToRigSpace_Rotation
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_ToRigSpace_Rotation : public FRigUnit
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	SMember(FQuat)                                     Value                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FQuat)                                     Global                                                      OFFSET(getStruct<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_BoneTarget
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigUnit_BoneHarmonics_BoneTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_Harmonics_TargetItem
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_Harmonics_TargetItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics_WorkData
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigUnit_BoneHarmonics_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FVector)                                   WaveTime                                                    OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_BoneHarmonics
/// Size: 0x0080 (0x000100 - 0x000180)
class FRigUnit_BoneHarmonics : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(TArray<FRigUnit_BoneHarmonics_BoneTarget>) Bones                                                       OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FVector)                                   WaveSpeed                                                   OFFSET(getStruct<T>, {0x110, 12, 0, 0})
	SMember(FVector)                                   WaveFrequency                                               OFFSET(getStruct<T>, {0x11C, 12, 0, 0})
	SMember(FVector)                                   WaveAmplitude                                               OFFSET(getStruct<T>, {0x128, 12, 0, 0})
	SMember(FVector)                                   WaveOffset                                                  OFFSET(getStruct<T>, {0x134, 12, 0, 0})
	SMember(FVector)                                   WaveNoise                                                   OFFSET(getStruct<T>, {0x140, 12, 0, 0})
	CMember(ERigVMAnimEasingType)                      WaveEase                                                    OFFSET(get<T>, {0x14C, 1, 0, 0})
	DMember(float)                                     WaveMinimum                                                 OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     WaveMaximum                                                 OFFSET(get<float>, {0x154, 4, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrder                                               OFFSET(get<T>, {0x158, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x159, 1, 0, 0})
	SMember(FRigUnit_BoneHarmonics_WorkData)           WorkData                                                    OFFSET(getStruct<T>, {0x160, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ItemHarmonics
/// Size: 0x0080 (0x000100 - 0x000180)
class FRigUnit_ItemHarmonics : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(TArray<FRigUnit_Harmonics_TargetItem>)     Targets                                                     OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FVector)                                   WaveSpeed                                                   OFFSET(getStruct<T>, {0x110, 12, 0, 0})
	SMember(FVector)                                   WaveFrequency                                               OFFSET(getStruct<T>, {0x11C, 12, 0, 0})
	SMember(FVector)                                   WaveAmplitude                                               OFFSET(getStruct<T>, {0x128, 12, 0, 0})
	SMember(FVector)                                   WaveOffset                                                  OFFSET(getStruct<T>, {0x134, 12, 0, 0})
	SMember(FVector)                                   WaveNoise                                                   OFFSET(getStruct<T>, {0x140, 12, 0, 0})
	CMember(ERigVMAnimEasingType)                      WaveEase                                                    OFFSET(get<T>, {0x14C, 1, 0, 0})
	DMember(float)                                     WaveMinimum                                                 OFFSET(get<float>, {0x150, 4, 0, 0})
	DMember(float)                                     WaveMaximum                                                 OFFSET(get<float>, {0x154, 4, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrder                                               OFFSET(get<T>, {0x158, 1, 0, 0})
	SMember(FRigUnit_BoneHarmonics_WorkData)           WorkData                                                    OFFSET(getStruct<T>, {0x160, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Reach
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigUnit_ChainHarmonics_Reach : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector)                                   ReachTarget                                                 OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FVector)                                   ReachAxis                                                   OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	DMember(float)                                     ReachMinimum                                                OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     ReachMaximum                                                OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(ERigVMAnimEasingType)                      ReachEase                                                   OFFSET(get<T>, {0x24, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Wave
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_ChainHarmonics_Wave : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	SMember(FVector)                                   WaveFrequency                                               OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FVector)                                   WaveAmplitude                                               OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	SMember(FVector)                                   WaveOffset                                                  OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	SMember(FVector)                                   WaveNoise                                                   OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	DMember(float)                                     WaveMinimum                                                 OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     WaveMaximum                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	CMember(ERigVMAnimEasingType)                      WaveEase                                                    OFFSET(get<T>, {0x3C, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_Pendulum
/// Size: 0x003C (0x000000 - 0x00003C)
class FRigUnit_ChainHarmonics_Pendulum : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 60;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     PendulumStiffness                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FVector)                                   PendulumGravity                                             OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     PendulumBlend                                               OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     PendulumDrag                                                OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     PendulumMinimum                                             OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     PendulumMaximum                                             OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(ERigVMAnimEasingType)                      PendulumEase                                                OFFSET(get<T>, {0x24, 1, 0, 0})
	SMember(FVector)                                   UnwindAxis                                                  OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	DMember(float)                                     UnwindMinimum                                               OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     UnwindMaximum                                               OFFSET(get<float>, {0x38, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics_WorkData
/// Size: 0x0090 (0x000000 - 0x000090)
class FRigUnit_ChainHarmonics_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 144;

public:
	SMember(FVector)                                   Time                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	CMember(TArray<FCachedRigElement>)                 Items                                                       OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<float>)                             Ratio                                                       OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<FVector>)                           LocalTip                                                    OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FVector>)                           PendulumTip                                                 OFFSET(get<T>, {0x40, 16, 0, 0})
	CMember(TArray<FVector>)                           PendulumPosition                                            OFFSET(get<T>, {0x50, 16, 0, 0})
	CMember(TArray<FVector>)                           PendulumVelocity                                            OFFSET(get<T>, {0x60, 16, 0, 0})
	CMember(TArray<FVector>)                           HierarchyLine                                               OFFSET(get<T>, {0x70, 16, 0, 0})
	CMember(TArray<FVector>)                           VelocityLines                                               OFFSET(get<T>, {0x80, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonics
/// Size: 0x0210 (0x000100 - 0x000310)
class FRigUnit_ChainHarmonics : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FName)                                     ChainRoot                                                   OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FVector)                                   Speed                                                       OFFSET(getStruct<T>, {0x108, 12, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Reach)             Reach                                                       OFFSET(getStruct<T>, {0x114, 40, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Wave)              Wave                                                        OFFSET(getStruct<T>, {0x13C, 64, 0, 0})
	SMember(FRuntimeFloatCurve)                        WaveCurve                                                   OFFSET(getStruct<T>, {0x180, 136, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Pendulum)          Pendulum                                                    OFFSET(getStruct<T>, {0x208, 60, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0x244, 1, 0, 0})
	SMember(FTransform)                                DrawWorldOffset                                             OFFSET(getStruct<T>, {0x250, 48, 0, 0})
	SMember(FRigUnit_ChainHarmonics_WorkData)          WorkData                                                    OFFSET(getStruct<T>, {0x280, 144, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ChainHarmonicsPerItem
/// Size: 0x0210 (0x000100 - 0x000310)
class FRigUnit_ChainHarmonicsPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 784;

public:
	SMember(FRigElementKey)                            ChainRoot                                                   OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FVector)                                   Speed                                                       OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Reach)             Reach                                                       OFFSET(getStruct<T>, {0x118, 40, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Wave)              Wave                                                        OFFSET(getStruct<T>, {0x140, 64, 0, 0})
	SMember(FRuntimeFloatCurve)                        WaveCurve                                                   OFFSET(getStruct<T>, {0x180, 136, 0, 0})
	SMember(FRigUnit_ChainHarmonics_Pendulum)          Pendulum                                                    OFFSET(getStruct<T>, {0x208, 60, 0, 0})
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0x244, 1, 0, 0})
	SMember(FTransform)                                DrawWorldOffset                                             OFFSET(getStruct<T>, {0x250, 48, 0, 0})
	SMember(FRigUnit_ChainHarmonics_WorkData)          WorkData                                                    OFFSET(getStruct<T>, {0x280, 144, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimBone_Target
/// Size: 0x0028 (0x000000 - 0x000028)
class FRigUnit_AimBone_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	CMember(EControlRigVectorKind)                     Kind                                                        OFFSET(get<T>, {0x1C, 1, 0, 0})
	SMember(FName)                                     Space                                                       OFFSET(getStruct<T>, {0x20, 8, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimItem_Target
/// Size: 0x002C (0x000000 - 0x00002C)
class FRigUnit_AimItem_Target : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 44;

public:
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FVector)                                   Axis                                                        OFFSET(getStruct<T>, {0x4, 12, 0, 0})
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x10, 12, 0, 0})
	CMember(EControlRigVectorKind)                     Kind                                                        OFFSET(get<T>, {0x1C, 1, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimBone_DebugSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_AimBone_DebugSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimBoneMath
/// Size: 0x0158 (0x000008 - 0x000160)
class FRigUnit_AimBoneMath : public FRigUnit_HighlevelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FTransform)                                InputTransform                                              OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Primary                                                     OFFSET(getStruct<T>, {0x40, 44, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Secondary                                                   OFFSET(getStruct<T>, {0x6C, 44, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x98, 4, 0, 0})
	SMember(FTransform)                                Result                                                      OFFSET(getStruct<T>, {0xA0, 48, 0, 0})
	SMember(FRigUnit_AimBone_DebugSettings)            DebugSettings                                               OFFSET(getStruct<T>, {0xD0, 64, 0, 0})
	SMember(FCachedRigElement)                         PrimaryCachedSpace                                          OFFSET(getStruct<T>, {0x110, 32, 0, 0})
	SMember(FCachedRigElement)                         SecondaryCachedSpace                                        OFFSET(getStruct<T>, {0x130, 32, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x150, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimBone
/// Size: 0x0110 (0x000100 - 0x000210)
class FRigUnit_AimBone : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FRigUnit_AimBone_Target)                   Primary                                                     OFFSET(getStruct<T>, {0x108, 40, 0, 0})
	SMember(FRigUnit_AimBone_Target)                   Secondary                                                   OFFSET(getStruct<T>, {0x130, 40, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x158, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x15C, 1, 0, 0})
	SMember(FRigUnit_AimBone_DebugSettings)            DebugSettings                                               OFFSET(getStruct<T>, {0x160, 64, 0, 0})
	SMember(FCachedRigElement)                         CachedBoneIndex                                             OFFSET(getStruct<T>, {0x1A0, 32, 0, 0})
	SMember(FCachedRigElement)                         PrimaryCachedSpace                                          OFFSET(getStruct<T>, {0x1C0, 32, 0, 0})
	SMember(FCachedRigElement)                         SecondaryCachedSpace                                        OFFSET(getStruct<T>, {0x1E0, 32, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x200, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimItem
/// Size: 0x0120 (0x000100 - 0x000220)
class FRigUnit_AimItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 544;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Primary                                                     OFFSET(getStruct<T>, {0x10C, 44, 0, 0})
	SMember(FRigUnit_AimItem_Target)                   Secondary                                                   OFFSET(getStruct<T>, {0x138, 44, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x164, 4, 0, 0})
	SMember(FRigUnit_AimBone_DebugSettings)            DebugSettings                                               OFFSET(getStruct<T>, {0x170, 64, 0, 0})
	SMember(FCachedRigElement)                         CachedItem                                                  OFFSET(getStruct<T>, {0x1B0, 32, 0, 0})
	SMember(FCachedRigElement)                         PrimaryCachedSpace                                          OFFSET(getStruct<T>, {0x1D0, 32, 0, 0})
	SMember(FCachedRigElement)                         SecondaryCachedSpace                                        OFFSET(getStruct<T>, {0x1F0, 32, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x210, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_WorldUp
/// Size: 0x001C (0x000000 - 0x00001C)
class FRigUnit_AimConstraint_WorldUp : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 28;

public:
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	CMember(EControlRigVectorKind)                     Kind                                                        OFFSET(get<T>, {0xC, 1, 0, 0})
	SMember(FRigElementKey)                            Space                                                       OFFSET(getStruct<T>, {0x10, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraint_AdvancedSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigUnit_AimConstraint_AdvancedSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FRigUnit_AimBone_DebugSettings)            DebugSettings                                               OFFSET(getStruct<T>, {0x0, 64, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrderForFilter                                      OFFSET(get<T>, {0x40, 1, 0, 0})
};

/// Struct /Script/ControlRig.ConstraintParent
/// Size: 0x0010 (0x000000 - 0x000010)
class FConstraintParent : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_AimConstraintLocalSpaceOffset
/// Size: 0x0110 (0x000100 - 0x000210)
class FRigUnit_AimConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 528;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x10C, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      OFFSET(getStruct<T>, {0x10D, 3, 0, 0})
	SMember(FVector)                                   AimAxis                                                     OFFSET(getStruct<T>, {0x110, 12, 0, 0})
	SMember(FVector)                                   UpAxis                                                      OFFSET(getStruct<T>, {0x11C, 12, 0, 0})
	SMember(FRigUnit_AimConstraint_WorldUp)            WorldUp                                                     OFFSET(getStruct<T>, {0x128, 28, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x148, 16, 0, 0})
	SMember(FRigUnit_AimConstraint_AdvancedSettings)   AdvancedSettings                                            OFFSET(getStruct<T>, {0x160, 80, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1B0, 4, 0, 0})
	SMember(FCachedRigElement)                         WorldUpSpaceCache                                           OFFSET(getStruct<T>, {0x1B8, 32, 0, 0})
	SMember(FCachedRigElement)                         ChildCache                                                  OFFSET(getStruct<T>, {0x1D8, 32, 0, 0})
	CMember(TArray<FCachedRigElement>)                 ParentCaches                                                OFFSET(get<T>, {0x1F8, 16, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x208, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimit
/// Size: 0x000C (0x000000 - 0x00000C)
class FRigUnit_CCDIK_RotationLimit : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(float)                                     Limit                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_RotationLimitPerItem
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_CCDIK_RotationLimitPerItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	DMember(float)                                     Limit                                                       OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK_WorkData
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigUnit_CCDIK_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FCCDIKChainLink>)                   Chain                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           RotationLimitIndex                                          OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             RotationLimitsPerItem                                       OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedEffector                                              OFFSET(getStruct<T>, {0x40, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIK
/// Size: 0x00D0 (0x000100 - 0x0001D0)
class FRigUnit_CCDIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FName)                                     EffectorBone                                                OFFSET(getStruct<T>, {0x108, 8, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x148, 4, 0, 0})
	DMember(bool)                                      bStartFromTail                                              OFFSET(get<bool>, {0x14C, 1, 0, 0})
	DMember(float)                                     BaseRotationLimit                                           OFFSET(get<float>, {0x150, 4, 0, 0})
	CMember(TArray<FRigUnit_CCDIK_RotationLimit>)      RotationLimits                                              OFFSET(get<T>, {0x158, 16, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FRigUnit_CCDIK_WorkData)                   WorkData                                                    OFFSET(getStruct<T>, {0x170, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIKPerItem
/// Size: 0x00D0 (0x000100 - 0x0001D0)
class FRigUnit_CCDIKPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x148, 4, 0, 0})
	DMember(bool)                                      bStartFromTail                                              OFFSET(get<bool>, {0x14C, 1, 0, 0})
	DMember(float)                                     BaseRotationLimit                                           OFFSET(get<float>, {0x150, 4, 0, 0})
	CMember(TArray<FRigUnit_CCDIK_RotationLimitPerItem>) RotationLimits                                            OFFSET(get<T>, {0x158, 16, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FRigUnit_CCDIK_WorkData)                   WorkData                                                    OFFSET(getStruct<T>, {0x170, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_CCDIKItemArray
/// Size: 0x00D0 (0x000100 - 0x0001D0)
class FRigUnit_CCDIKItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x148, 4, 0, 0})
	DMember(bool)                                      bStartFromTail                                              OFFSET(get<bool>, {0x14C, 1, 0, 0})
	DMember(float)                                     BaseRotationLimit                                           OFFSET(get<float>, {0x150, 4, 0, 0})
	CMember(TArray<FRigUnit_CCDIK_RotationLimitPerItem>) RotationLimits                                            OFFSET(get<T>, {0x158, 16, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x168, 1, 0, 0})
	SMember(FRigUnit_CCDIK_WorkData)                   WorkData                                                    OFFSET(getStruct<T>, {0x170, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_Rotation
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigUnit_DistributeRotation_Rotation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation_WorkData
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigUnit_DistributeRotation_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationA                                               OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationB                                               OFFSET(get<T>, {0x20, 16, 0, 0})
	CMember(TArray<float>)                             ItemRotationT                                               OFFSET(get<T>, {0x30, 16, 0, 0})
	CMember(TArray<FTransform>)                        ItemLocalTransforms                                         OFFSET(get<T>, {0x40, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotation
/// Size: 0x0080 (0x000100 - 0x000180)
class FRigUnit_DistributeRotation : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(getStruct<T>, {0x108, 8, 0, 0})
	CMember(TArray<FRigUnit_DistributeRotation_Rotation>) Rotations                                                OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x120, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x124, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x128, 1, 0, 0})
	SMember(FRigUnit_DistributeRotation_WorkData)      WorkData                                                    OFFSET(getStruct<T>, {0x130, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForCollection
/// Size: 0x0080 (0x000100 - 0x000180)
class FRigUnit_DistributeRotationForCollection : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	CMember(TArray<FRigUnit_DistributeRotation_Rotation>) Rotations                                                OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x120, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x124, 4, 0, 0})
	SMember(FRigUnit_DistributeRotation_WorkData)      WorkData                                                    OFFSET(getStruct<T>, {0x128, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_DistributeRotationForItemArray
/// Size: 0x0080 (0x000100 - 0x000180)
class FRigUnit_DistributeRotationForItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x100, 16, 0, 0})
	CMember(TArray<FRigUnit_DistributeRotation_Rotation>) Rotations                                                OFFSET(get<T>, {0x110, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x120, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x124, 4, 0, 0})
	SMember(FRigUnit_DistributeRotation_WorkData)      WorkData                                                    OFFSET(getStruct<T>, {0x128, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FABRIK_WorkData
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_FABRIK_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	CMember(TArray<FFABRIKChainLink>)                  Chain                                                       OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x10, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedEffector                                              OFFSET(getStruct<T>, {0x20, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FABRIK
/// Size: 0x00A0 (0x000100 - 0x0001A0)
class FRigUnit_FABRIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FName)                                     EffectorBone                                                OFFSET(getStruct<T>, {0x108, 8, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x148, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	SMember(FRigUnit_FABRIK_WorkData)                  WorkData                                                    OFFSET(getStruct<T>, {0x150, 64, 0, 0})
	DMember(bool)                                      bSetEffectorTransform                                       OFFSET(get<bool>, {0x190, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FABRIKPerItem
/// Size: 0x00A0 (0x000100 - 0x0001A0)
class FRigUnit_FABRIKPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x148, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	SMember(FRigUnit_FABRIK_WorkData)                  WorkData                                                    OFFSET(getStruct<T>, {0x150, 64, 0, 0})
	DMember(bool)                                      bSetEffectorTransform                                       OFFSET(get<bool>, {0x190, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FABRIKItemArray
/// Size: 0x00A0 (0x000100 - 0x0001A0)
class FRigUnit_FABRIKItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 416;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FTransform)                                EffectorTransform                                           OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x140, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x148, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	SMember(FRigUnit_FABRIK_WorkData)                  WorkData                                                    OFFSET(getStruct<T>, {0x150, 64, 0, 0})
	DMember(bool)                                      bSetEffectorTransform                                       OFFSET(get<bool>, {0x190, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_Rotation
/// Size: 0x0020 (0x000000 - 0x000020)
class FRigUnit_FitChainToCurve_Rotation : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	SMember(FQuat)                                     Rotation                                                    OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_DebugSettings
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigUnit_FitChainToCurve_DebugSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FLinearColor)                              CurveColor                                                  OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FLinearColor)                              SegmentsColor                                               OFFSET(getStruct<T>, {0x18, 16, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x30, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve_WorkData
/// Size: 0x0098 (0x000000 - 0x000098)
class FRigUnit_FitChainToCurve_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 152;

public:
	DMember(float)                                     ChainLength                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<FVector>)                           ItemPositions                                               OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<float>)                             ItemSegments                                                OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FVector>)                           CurvePositions                                              OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<float>)                             CurveSegments                                               OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x48, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationA                                               OFFSET(get<T>, {0x58, 16, 0, 0})
	CMember(TArray<int32_t>)                           ItemRotationB                                               OFFSET(get<T>, {0x68, 16, 0, 0})
	CMember(TArray<float>)                             ItemRotationT                                               OFFSET(get<T>, {0x78, 16, 0, 0})
	CMember(TArray<FTransform>)                        ItemLocalTransforms                                         OFFSET(get<T>, {0x88, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurve
/// Size: 0x01A0 (0x000100 - 0x0002A0)
class FRigUnit_FitChainToCurve : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(getStruct<T>, {0x108, 8, 0, 0})
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   OFFSET(get<T>, {0x140, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(int32_t)                                   SamplingPrecision                                           OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(getStruct<T>, {0x150, 12, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(getStruct<T>, {0x15C, 12, 0, 0})
	SMember(FVector)                                   PoleVectorPosition                                          OFFSET(getStruct<T>, {0x168, 12, 0, 0})
	CMember(TArray<FRigUnit_FitChainToCurve_Rotation>) Rotations                                                   OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x188, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x190, 1, 0, 0})
	SMember(FRigUnit_FitChainToCurve_DebugSettings)    DebugSettings                                               OFFSET(getStruct<T>, {0x1A0, 96, 0, 0})
	SMember(FRigUnit_FitChainToCurve_WorkData)         WorkData                                                    OFFSET(getStruct<T>, {0x200, 152, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurvePerItem
/// Size: 0x01A0 (0x000100 - 0x0002A0)
class FRigUnit_FitChainToCurvePerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   OFFSET(get<T>, {0x140, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(int32_t)                                   SamplingPrecision                                           OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(getStruct<T>, {0x150, 12, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(getStruct<T>, {0x15C, 12, 0, 0})
	SMember(FVector)                                   PoleVectorPosition                                          OFFSET(getStruct<T>, {0x168, 12, 0, 0})
	CMember(TArray<FRigUnit_FitChainToCurve_Rotation>) Rotations                                                   OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x188, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x190, 1, 0, 0})
	SMember(FRigUnit_FitChainToCurve_DebugSettings)    DebugSettings                                               OFFSET(getStruct<T>, {0x1A0, 96, 0, 0})
	SMember(FRigUnit_FitChainToCurve_WorkData)         WorkData                                                    OFFSET(getStruct<T>, {0x200, 152, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_FitChainToCurveItemArray
/// Size: 0x01A0 (0x000100 - 0x0002A0)
class FRigUnit_FitChainToCurveItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 672;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x100, 16, 0, 0})
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	CMember(EControlRigCurveAlignment)                 Alignment                                                   OFFSET(get<T>, {0x140, 1, 0, 0})
	DMember(float)                                     Minimum                                                     OFFSET(get<float>, {0x144, 4, 0, 0})
	DMember(float)                                     Maximum                                                     OFFSET(get<float>, {0x148, 4, 0, 0})
	DMember(int32_t)                                   SamplingPrecision                                           OFFSET(get<int32_t>, {0x14C, 4, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(getStruct<T>, {0x150, 12, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(getStruct<T>, {0x15C, 12, 0, 0})
	SMember(FVector)                                   PoleVectorPosition                                          OFFSET(getStruct<T>, {0x168, 12, 0, 0})
	CMember(TArray<FRigUnit_FitChainToCurve_Rotation>) Rotations                                                   OFFSET(get<T>, {0x178, 16, 0, 0})
	CMember(ERigVMAnimEasingType)                      RotationEaseType                                            OFFSET(get<T>, {0x188, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x190, 1, 0, 0})
	SMember(FRigUnit_FitChainToCurve_DebugSettings)    DebugSettings                                               OFFSET(getStruct<T>, {0x1A0, 96, 0, 0})
	SMember(FRigUnit_FitChainToCurve_WorkData)         WorkData                                                    OFFSET(getStruct<T>, {0x200, 152, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_PerBone
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_ModifyBoneTransforms_PerBone : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_WorkData
/// Size: 0x0010 (0x000000 - 0x000010)
class FRigUnit_ModifyTransforms_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms_WorkData
/// Size: 0x0000 (0x000010 - 0x000010)
class FRigUnit_ModifyBoneTransforms_WorkData : public FRigUnit_ModifyTransforms_WorkData
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
};

/// Struct /Script/ControlRig.RigUnit_ModifyBoneTransforms
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_ModifyBoneTransforms : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FRigUnit_ModifyBoneTransforms_PerBone>) BoneToModify                                            OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     WeightMinimum                                               OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     WeightMaximum                                               OFFSET(get<float>, {0x118, 4, 0, 0})
	CMember(EControlRigModifyBoneMode)                 Mode                                                        OFFSET(get<T>, {0x11C, 1, 0, 0})
	SMember(FRigUnit_ModifyBoneTransforms_WorkData)    WorkData                                                    OFFSET(getStruct<T>, {0x120, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms_PerItem
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_ModifyTransforms_PerItem : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x0, 12, 0, 0})
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ModifyTransforms
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_ModifyTransforms : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	CMember(TArray<FRigUnit_ModifyTransforms_PerItem>) ItemToModify                                                OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     WeightMinimum                                               OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     WeightMaximum                                               OFFSET(get<float>, {0x118, 4, 0, 0})
	CMember(EControlRigModifyBoneMode)                 Mode                                                        OFFSET(get<T>, {0x11C, 1, 0, 0})
	SMember(FRigUnit_ModifyTransforms_WorkData)        WorkData                                                    OFFSET(getStruct<T>, {0x120, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_WorkData
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigUnit_MultiFABRIK_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK_EndEffector
/// Size: 0x0014 (0x000000 - 0x000014)
class FRigUnit_MultiFABRIK_EndEffector : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	SMember(FVector)                                   Location                                                    OFFSET(getStruct<T>, {0x8, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_MultiFABRIK
/// Size: 0x0090 (0x000100 - 0x000190)
class FRigUnit_MultiFABRIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 400;

public:
	SMember(FName)                                     RootBone                                                    OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	CMember(TArray<FRigUnit_MultiFABRIK_EndEffector>)  Effectors                                                   OFFSET(get<T>, {0x108, 16, 0, 0})
	DMember(float)                                     Precision                                                   OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x11C, 1, 0, 0})
	DMember(int32_t)                                   MaxIterations                                               OFFSET(get<int32_t>, {0x120, 4, 0, 0})
	SMember(FRigUnit_MultiFABRIK_WorkData)             WorkData                                                    OFFSET(getStruct<T>, {0x128, 96, 0, 0})
	DMember(bool)                                      bIsInitialized                                              OFFSET(get<bool>, {0x188, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SlideChain_WorkData
/// Size: 0x0048 (0x000000 - 0x000048)
class FRigUnit_SlideChain_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 72;

public:
	DMember(float)                                     ChainLength                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(TArray<float>)                             ItemSegments                                                OFFSET(get<T>, {0x8, 16, 0, 0})
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x18, 16, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FTransform>)                        BlendedTransforms                                           OFFSET(get<T>, {0x38, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SlideChain
/// Size: 0x0060 (0x000100 - 0x000160)
class FRigUnit_SlideChain : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(getStruct<T>, {0x108, 8, 0, 0})
	DMember(float)                                     SlideAmount                                                 OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x114, 1, 0, 0})
	SMember(FRigUnit_SlideChain_WorkData)              WorkData                                                    OFFSET(getStruct<T>, {0x118, 72, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SlideChainPerItem
/// Size: 0x0060 (0x000100 - 0x000160)
class FRigUnit_SlideChainPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	DMember(float)                                     SlideAmount                                                 OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x114, 1, 0, 0})
	SMember(FRigUnit_SlideChain_WorkData)              WorkData                                                    OFFSET(getStruct<T>, {0x118, 72, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SlideChainItemArray
/// Size: 0x0060 (0x000100 - 0x000160)
class FRigUnit_SlideChainItemArray : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	CMember(TArray<FRigElementKey>)                    Items                                                       OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     SlideAmount                                                 OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x114, 1, 0, 0})
	SMember(FRigUnit_SlideChain_WorkData)              WorkData                                                    OFFSET(getStruct<T>, {0x118, 72, 0, 0})
};

/// Struct /Script/ControlRig.RegionScaleFactors
/// Size: 0x0010 (0x000000 - 0x000010)
class FRegionScaleFactors : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     PositiveWidth                                               OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     NegativeWidth                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     PositiveHeight                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     NegativeHeight                                              OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.SphericalRegion
/// Size: 0x0014 (0x000000 - 0x000014)
class FSphericalRegion : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
};

/// Struct /Script/ControlRig.SphericalPoseReaderDebugSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSphericalPoseReaderDebugSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(bool)                                      bDrawDebug                                                  OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(bool)                                      bDraw2D                                                     OFFSET(get<bool>, {0x1, 1, 0, 0})
	DMember(bool)                                      bDrawLocalAxes                                              OFFSET(get<bool>, {0x2, 1, 0, 0})
	DMember(float)                                     DebugScale                                                  OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(int32_t)                                   DebugSegments                                               OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(float)                                     DebugThickness                                              OFFSET(get<float>, {0xC, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SphericalPoseReader
/// Size: 0x0130 (0x000100 - 0x000230)
class FRigUnit_SphericalPoseReader : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	DMember(float)                                     OutputParam                                                 OFFSET(get<float>, {0x100, 4, 0, 0})
	SMember(FRigElementKey)                            DriverItem                                                  OFFSET(getStruct<T>, {0x104, 12, 0, 0})
	SMember(FVector)                                   DriverAxis                                                  OFFSET(getStruct<T>, {0x110, 12, 0, 0})
	SMember(FVector)                                   RotationOffset                                              OFFSET(getStruct<T>, {0x11C, 12, 0, 0})
	DMember(float)                                     ActiveRegionSize                                            OFFSET(get<float>, {0x128, 4, 0, 0})
	SMember(FRegionScaleFactors)                       ActiveRegionScaleFactors                                    OFFSET(getStruct<T>, {0x12C, 16, 0, 0})
	DMember(float)                                     FalloffSize                                                 OFFSET(get<float>, {0x13C, 4, 0, 0})
	SMember(FRegionScaleFactors)                       FalloffRegionScaleFactors                                   OFFSET(getStruct<T>, {0x140, 16, 0, 0})
	DMember(bool)                                      FlipWidthScaling                                            OFFSET(get<bool>, {0x150, 1, 0, 0})
	DMember(bool)                                      FlipHeightScaling                                           OFFSET(get<bool>, {0x151, 1, 0, 0})
	SMember(FRigElementKey)                            OptionalParentItem                                          OFFSET(getStruct<T>, {0x154, 12, 0, 0})
	SMember(FSphericalPoseReaderDebugSettings)         Debug                                                       OFFSET(getStruct<T>, {0x160, 16, 0, 0})
	SMember(FSphericalRegion)                          InnerRegion                                                 OFFSET(getStruct<T>, {0x170, 20, 0, 0})
	SMember(FSphericalRegion)                          OuterRegion                                                 OFFSET(getStruct<T>, {0x184, 20, 0, 0})
	SMember(FVector)                                   DriverNormal                                                OFFSET(getStruct<T>, {0x198, 12, 0, 0})
	SMember(FVector)                                   Driver2D                                                    OFFSET(getStruct<T>, {0x1A4, 12, 0, 0})
	SMember(FCachedRigElement)                         DriverCache                                                 OFFSET(getStruct<T>, {0x1B0, 32, 0, 0})
	SMember(FCachedRigElement)                         OptionalParentCache                                         OFFSET(getStruct<T>, {0x1D0, 32, 0, 0})
	SMember(FTransform)                                LocalDriverTransformInit                                    OFFSET(getStruct<T>, {0x1F0, 48, 0, 0})
	SMember(FVector)                                   CachedRotationOffset                                        OFFSET(getStruct<T>, {0x220, 12, 0, 0})
	DMember(bool)                                      bCachedInitTransforms                                       OFFSET(get<bool>, {0x22C, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_DebugSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigUnit_SpringIK_DebugSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x8, 16, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringIK_WorkData
/// Size: 0x00B8 (0x000000 - 0x0000B8)
class FRigUnit_SpringIK_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	CMember(TArray<FCachedRigElement>)                 CachedBones                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	SMember(FCachedRigElement)                         CachedPoleVector                                            OFFSET(getStruct<T>, {0x10, 32, 0, 0})
	CMember(TArray<FTransform>)                        Transforms                                                  OFFSET(get<T>, {0x30, 16, 0, 0})
	SMember(FCRSimPointContainer)                      Simulation                                                  OFFSET(getStruct<T>, {0x40, 120, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringIK
/// Size: 0x0180 (0x000100 - 0x000280)
class FRigUnit_SpringIK : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(getStruct<T>, {0x108, 8, 0, 0})
	DMember(float)                                     HierarchyStrength                                           OFFSET(get<float>, {0x110, 4, 0, 0})
	DMember(float)                                     EffectorStrength                                            OFFSET(get<float>, {0x114, 4, 0, 0})
	DMember(float)                                     EffectorRatio                                               OFFSET(get<float>, {0x118, 4, 0, 0})
	DMember(float)                                     RootStrength                                                OFFSET(get<float>, {0x11C, 4, 0, 0})
	DMember(float)                                     RootRatio                                                   OFFSET(get<float>, {0x120, 4, 0, 0})
	DMember(float)                                     Damping                                                     OFFSET(get<float>, {0x124, 4, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(getStruct<T>, {0x128, 12, 0, 0})
	DMember(bool)                                      bFlipPolePlane                                              OFFSET(get<bool>, {0x134, 1, 0, 0})
	CMember(EControlRigVectorKind)                     PoleVectorKind                                              OFFSET(get<T>, {0x135, 1, 0, 0})
	SMember(FName)                                     PoleVectorSpace                                             OFFSET(getStruct<T>, {0x138, 8, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(getStruct<T>, {0x140, 12, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(getStruct<T>, {0x14C, 12, 0, 0})
	DMember(bool)                                      bLiveSimulation                                             OFFSET(get<bool>, {0x158, 1, 0, 0})
	DMember(int32_t)                                   Iterations                                                  OFFSET(get<int32_t>, {0x15C, 4, 0, 0})
	DMember(bool)                                      bLimitLocalPosition                                         OFFSET(get<bool>, {0x160, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x161, 1, 0, 0})
	SMember(FRigUnit_SpringIK_DebugSettings)           DebugSettings                                               OFFSET(getStruct<T>, {0x170, 80, 0, 0})
	SMember(FRigUnit_SpringIK_WorkData)                WorkData                                                    OFFSET(getStruct<T>, {0x1C0, 184, 0, 0})
};

/// Struct /Script/ControlRig.ConstraintTarget
/// Size: 0x0040 (0x000000 - 0x000040)
class FConstraintTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	SMember(FTransform)                                Transform                                                   OFFSET(getStruct<T>, {0x0, 48, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x34, 1, 0, 0})
	SMember(FTransformFilter)                          Filter                                                      OFFSET(getStruct<T>, {0x35, 9, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint_WorkData
/// Size: 0x0060 (0x000000 - 0x000060)
class FRigUnit_TransformConstraint_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 96;

public:
	CMember(TArray<FConstraintData>)                   ConstraintData                                              OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TMap<int32_t, int32_t>)                    ConstraintDataToTargets                                     OFFSET(get<T>, {0x10, 80, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraint
/// Size: 0x00C0 (0x000100 - 0x0001C0)
class FRigUnit_TransformConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 448;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	CMember(ETransformSpaceMode)                       BaseTransformSpace                                          OFFSET(get<T>, {0x108, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	SMember(FName)                                     BaseBone                                                    OFFSET(getStruct<T>, {0x140, 8, 0, 0})
	CMember(TArray<FConstraintTarget>)                 Targets                                                     OFFSET(get<T>, {0x148, 16, 0, 0})
	DMember(bool)                                      bUseInitialTransforms                                       OFFSET(get<bool>, {0x158, 1, 0, 0})
	SMember(FRigUnit_TransformConstraint_WorkData)     WorkData                                                    OFFSET(getStruct<T>, {0x160, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TransformConstraintPerItem
/// Size: 0x00D0 (0x000100 - 0x0001D0)
class FRigUnit_TransformConstraintPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 464;

public:
	SMember(FRigElementKey)                            Item                                                        OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	CMember(ETransformSpaceMode)                       BaseTransformSpace                                          OFFSET(get<T>, {0x10C, 1, 0, 0})
	SMember(FTransform)                                BaseTransform                                               OFFSET(getStruct<T>, {0x110, 48, 0, 0})
	SMember(FRigElementKey)                            BaseItem                                                    OFFSET(getStruct<T>, {0x140, 12, 0, 0})
	CMember(TArray<FConstraintTarget>)                 Targets                                                     OFFSET(get<T>, {0x150, 16, 0, 0})
	DMember(bool)                                      bUseInitialTransforms                                       OFFSET(get<bool>, {0x160, 1, 0, 0})
	SMember(FRigUnit_TransformConstraint_WorkData)     WorkData                                                    OFFSET(getStruct<T>, {0x168, 96, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ParentConstraint_AdvancedSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FRigUnit_ParentConstraint_AdvancedSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EConstraintInterpType)                     InterpolationType                                           OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrderForFilter                                      OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ParentConstraint
/// Size: 0x0060 (0x000100 - 0x000160)
class FRigUnit_ParentConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x10C, 1, 0, 0})
	SMember(FTransformFilter)                          Filter                                                      OFFSET(getStruct<T>, {0x10D, 9, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x118, 16, 0, 0})
	SMember(FRigUnit_ParentConstraint_AdvancedSettings) AdvancedSettings                                           OFFSET(getStruct<T>, {0x128, 2, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x12C, 4, 0, 0})
	SMember(FCachedRigElement)                         ChildCache                                                  OFFSET(getStruct<T>, {0x130, 32, 0, 0})
	CMember(TArray<FCachedRigElement>)                 ParentCaches                                                OFFSET(get<T>, {0x150, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PositionConstraint
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_PositionConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x10C, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      OFFSET(getStruct<T>, {0x10D, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x110, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x120, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PositionConstraintLocalSpaceOffset
/// Size: 0x0060 (0x000100 - 0x000160)
class FRigUnit_PositionConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x10C, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      OFFSET(getStruct<T>, {0x10D, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x110, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x120, 4, 0, 0})
	SMember(FCachedRigElement)                         ChildCache                                                  OFFSET(getStruct<T>, {0x128, 32, 0, 0})
	CMember(TArray<FCachedRigElement>)                 ParentCaches                                                OFFSET(get<T>, {0x148, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraint_AdvancedSettings
/// Size: 0x0002 (0x000000 - 0x000002)
class FRigUnit_RotationConstraint_AdvancedSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 2;

public:
	CMember(EConstraintInterpType)                     InterpolationType                                           OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(EEulerRotationOrder)                       RotationOrderForFilter                                      OFFSET(get<T>, {0x1, 1, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraint
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_RotationConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x10C, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      OFFSET(getStruct<T>, {0x10D, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FRigUnit_RotationConstraint_AdvancedSettings) AdvancedSettings                                         OFFSET(getStruct<T>, {0x120, 2, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x124, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_RotationConstraintLocalSpaceOffset
/// Size: 0x0060 (0x000100 - 0x000160)
class FRigUnit_RotationConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x10C, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      OFFSET(getStruct<T>, {0x10D, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x110, 16, 0, 0})
	SMember(FRigUnit_RotationConstraint_AdvancedSettings) AdvancedSettings                                         OFFSET(getStruct<T>, {0x120, 2, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x124, 4, 0, 0})
	SMember(FCachedRigElement)                         ChildCache                                                  OFFSET(getStruct<T>, {0x128, 32, 0, 0})
	CMember(TArray<FCachedRigElement>)                 ParentCaches                                                OFFSET(get<T>, {0x148, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ScaleConstraint
/// Size: 0x0030 (0x000100 - 0x000130)
class FRigUnit_ScaleConstraint : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 304;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x10C, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      OFFSET(getStruct<T>, {0x10D, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x110, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x120, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_ScaleConstraintLocalSpaceOffset
/// Size: 0x0060 (0x000100 - 0x000160)
class FRigUnit_ScaleConstraintLocalSpaceOffset : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 352;

public:
	SMember(FRigElementKey)                            Child                                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	DMember(bool)                                      bMaintainOffset                                             OFFSET(get<bool>, {0x10C, 1, 0, 0})
	SMember(FFilterOptionPerAxis)                      Filter                                                      OFFSET(getStruct<T>, {0x10D, 3, 0, 0})
	CMember(TArray<FConstraintParent>)                 Parents                                                     OFFSET(get<T>, {0x110, 16, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x120, 4, 0, 0})
	SMember(FCachedRigElement)                         ChildCache                                                  OFFSET(getStruct<T>, {0x128, 32, 0, 0})
	CMember(TArray<FCachedRigElement>)                 ParentCaches                                                OFFSET(get<T>, {0x148, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwistBones_WorkData
/// Size: 0x0030 (0x000000 - 0x000030)
class FRigUnit_TwistBones_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	CMember(TArray<FCachedRigElement>)                 CachedItems                                                 OFFSET(get<T>, {0x0, 16, 0, 0})
	CMember(TArray<float>)                             ItemRatios                                                  OFFSET(get<T>, {0x10, 16, 0, 0})
	CMember(TArray<FTransform>)                        ItemTransforms                                              OFFSET(get<T>, {0x20, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwistBones
/// Size: 0x0070 (0x000100 - 0x000170)
class FRigUnit_TwistBones : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FName)                                     StartBone                                                   OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FName)                                     EndBone                                                     OFFSET(getStruct<T>, {0x108, 8, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(getStruct<T>, {0x110, 12, 0, 0})
	SMember(FVector)                                   PoleAxis                                                    OFFSET(getStruct<T>, {0x11C, 12, 0, 0})
	CMember(ERigVMAnimEasingType)                      TwistEaseType                                               OFFSET(get<T>, {0x128, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x130, 1, 0, 0})
	SMember(FRigUnit_TwistBones_WorkData)              WorkData                                                    OFFSET(getStruct<T>, {0x138, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwistBonesPerItem
/// Size: 0x0070 (0x000100 - 0x000170)
class FRigUnit_TwistBonesPerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FRigElementKeyCollection)                  Items                                                       OFFSET(getStruct<T>, {0x100, 16, 0, 0})
	SMember(FVector)                                   TwistAxis                                                   OFFSET(getStruct<T>, {0x110, 12, 0, 0})
	SMember(FVector)                                   PoleAxis                                                    OFFSET(getStruct<T>, {0x11C, 12, 0, 0})
	CMember(ERigVMAnimEasingType)                      TwistEaseType                                               OFFSET(get<T>, {0x128, 1, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x12C, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x130, 1, 0, 0})
	SMember(FRigUnit_TwistBones_WorkData)              WorkData                                                    OFFSET(getStruct<T>, {0x138, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple_DebugSettings
/// Size: 0x0040 (0x000000 - 0x000040)
class FRigUnit_TwoBoneIKSimple_DebugSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x10, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimple
/// Size: 0x0160 (0x000100 - 0x000260)
class FRigUnit_TwoBoneIKSimple : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	SMember(FName)                                     BoneA                                                       OFFSET(getStruct<T>, {0x100, 8, 0, 0})
	SMember(FName)                                     BoneB                                                       OFFSET(getStruct<T>, {0x108, 8, 0, 0})
	SMember(FName)                                     EffectorBone                                                OFFSET(getStruct<T>, {0x110, 8, 0, 0})
	SMember(FTransform)                                Effector                                                    OFFSET(getStruct<T>, {0x120, 48, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(getStruct<T>, {0x150, 12, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(getStruct<T>, {0x15C, 12, 0, 0})
	DMember(float)                                     SecondaryAxisWeight                                         OFFSET(get<float>, {0x168, 4, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(getStruct<T>, {0x16C, 12, 0, 0})
	CMember(EControlRigVectorKind)                     PoleVectorKind                                              OFFSET(get<T>, {0x178, 1, 0, 0})
	SMember(FName)                                     PoleVectorSpace                                             OFFSET(getStruct<T>, {0x17C, 8, 0, 0})
	DMember(bool)                                      bEnableStretch                                              OFFSET(get<bool>, {0x184, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           OFFSET(get<float>, {0x188, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         OFFSET(get<float>, {0x18C, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x190, 4, 0, 0})
	DMember(float)                                     BoneALength                                                 OFFSET(get<float>, {0x194, 4, 0, 0})
	DMember(float)                                     BoneBLength                                                 OFFSET(get<float>, {0x198, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x19C, 1, 0, 0})
	SMember(FRigUnit_TwoBoneIKSimple_DebugSettings)    DebugSettings                                               OFFSET(getStruct<T>, {0x1A0, 64, 0, 0})
	SMember(FCachedRigElement)                         CachedBoneAIndex                                            OFFSET(getStruct<T>, {0x1E0, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedBoneBIndex                                            OFFSET(getStruct<T>, {0x200, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedEffectorBoneIndex                                     OFFSET(getStruct<T>, {0x220, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedPoleVectorSpaceIndex                                  OFFSET(getStruct<T>, {0x240, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimplePerItem
/// Size: 0x0180 (0x000100 - 0x000280)
class FRigUnit_TwoBoneIKSimplePerItem : public FRigUnit_HighlevelBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 640;

public:
	SMember(FRigElementKey)                            ItemA                                                       OFFSET(getStruct<T>, {0x100, 12, 0, 0})
	SMember(FRigElementKey)                            ItemB                                                       OFFSET(getStruct<T>, {0x10C, 12, 0, 0})
	SMember(FRigElementKey)                            EffectorItem                                                OFFSET(getStruct<T>, {0x118, 12, 0, 0})
	SMember(FTransform)                                Effector                                                    OFFSET(getStruct<T>, {0x130, 48, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(getStruct<T>, {0x160, 12, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(getStruct<T>, {0x16C, 12, 0, 0})
	DMember(float)                                     SecondaryAxisWeight                                         OFFSET(get<float>, {0x178, 4, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(getStruct<T>, {0x17C, 12, 0, 0})
	CMember(EControlRigVectorKind)                     PoleVectorKind                                              OFFSET(get<T>, {0x188, 1, 0, 0})
	SMember(FRigElementKey)                            PoleVectorSpace                                             OFFSET(getStruct<T>, {0x18C, 12, 0, 0})
	DMember(bool)                                      bEnableStretch                                              OFFSET(get<bool>, {0x198, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           OFFSET(get<float>, {0x19C, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         OFFSET(get<float>, {0x1A0, 4, 0, 0})
	DMember(float)                                     Weight                                                      OFFSET(get<float>, {0x1A4, 4, 0, 0})
	DMember(float)                                     ItemALength                                                 OFFSET(get<float>, {0x1A8, 4, 0, 0})
	DMember(float)                                     ItemBLength                                                 OFFSET(get<float>, {0x1AC, 4, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x1B0, 1, 0, 0})
	SMember(FRigUnit_TwoBoneIKSimple_DebugSettings)    DebugSettings                                               OFFSET(getStruct<T>, {0x1C0, 64, 0, 0})
	SMember(FCachedRigElement)                         CachedItemAIndex                                            OFFSET(getStruct<T>, {0x200, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedItemBIndex                                            OFFSET(getStruct<T>, {0x220, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedEffectorItemIndex                                     OFFSET(getStruct<T>, {0x240, 32, 0, 0})
	SMember(FCachedRigElement)                         CachedPoleVectorSpaceIndex                                  OFFSET(getStruct<T>, {0x260, 32, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleVectors
/// Size: 0x0048 (0x000008 - 0x000050)
class FRigUnit_TwoBoneIKSimpleVectors : public FRigUnit_HighlevelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	SMember(FVector)                                   Root                                                        OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	SMember(FVector)                                   Effector                                                    OFFSET(getStruct<T>, {0x20, 12, 0, 0})
	DMember(bool)                                      bEnableStretch                                              OFFSET(get<bool>, {0x2C, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     BoneALength                                                 OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     BoneBLength                                                 OFFSET(get<float>, {0x3C, 4, 0, 0})
	SMember(FVector)                                   Elbow                                                       OFFSET(getStruct<T>, {0x40, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_TwoBoneIKSimpleTransforms
/// Size: 0x00D8 (0x000008 - 0x0000E0)
class FRigUnit_TwoBoneIKSimpleTransforms : public FRigUnit_HighlevelBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FTransform)                                Root                                                        OFFSET(getStruct<T>, {0x10, 48, 0, 0})
	SMember(FVector)                                   PoleVector                                                  OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FTransform)                                Effector                                                    OFFSET(getStruct<T>, {0x50, 48, 0, 0})
	SMember(FVector)                                   PrimaryAxis                                                 OFFSET(getStruct<T>, {0x80, 12, 0, 0})
	SMember(FVector)                                   SecondaryAxis                                               OFFSET(getStruct<T>, {0x8C, 12, 0, 0})
	DMember(float)                                     SecondaryAxisWeight                                         OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(bool)                                      bEnableStretch                                              OFFSET(get<bool>, {0x9C, 1, 0, 0})
	DMember(float)                                     StretchStartRatio                                           OFFSET(get<float>, {0xA0, 4, 0, 0})
	DMember(float)                                     StretchMaximumRatio                                         OFFSET(get<float>, {0xA4, 4, 0, 0})
	DMember(float)                                     BoneALength                                                 OFFSET(get<float>, {0xA8, 4, 0, 0})
	DMember(float)                                     BoneBLength                                                 OFFSET(get<float>, {0xAC, 4, 0, 0})
	SMember(FTransform)                                Elbow                                                       OFFSET(getStruct<T>, {0xB0, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_DebugSettings
/// Size: 0x0050 (0x000000 - 0x000050)
class FRigUnit_PointSimulation_DebugSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 80;

public:
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     Scale                                                       OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     CollisionScale                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bDrawPointsAsSpheres                                        OFFSET(get<bool>, {0xC, 1, 0, 0})
	SMember(FLinearColor)                              Color                                                       OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	SMember(FTransform)                                WorldOffset                                                 OFFSET(getStruct<T>, {0x20, 48, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_BoneTarget
/// Size: 0x0014 (0x000000 - 0x000014)
class FRigUnit_PointSimulation_BoneTarget : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 20;

public:
	SMember(FName)                                     bone                                                        OFFSET(getStruct<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   TranslationPoint                                            OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   PrimaryAimPoint                                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(int32_t)                                   SecondaryAimPoint                                           OFFSET(get<int32_t>, {0x10, 4, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation_WorkData
/// Size: 0x0088 (0x000000 - 0x000088)
class FRigUnit_PointSimulation_WorkData : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 136;

public:
	SMember(FCRSimPointContainer)                      Simulation                                                  OFFSET(getStruct<T>, {0x0, 120, 0, 0})
	CMember(TArray<FCachedRigElement>)                 BoneIndices                                                 OFFSET(get<T>, {0x78, 16, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_PointSimulation
/// Size: 0x0190 (0x0000D0 - 0x000260)
class FRigUnit_PointSimulation : public FRigVMFunction_SimBaseMutable
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 608;

public:
	CMember(TArray<FRigVMSimPoint>)                    Points                                                      OFFSET(get<T>, {0xD0, 16, 0, 0})
	CMember(TArray<FCRSimLinearSpring>)                Links                                                       OFFSET(get<T>, {0xE0, 16, 0, 0})
	CMember(TArray<FCRSimPointForce>)                  Forces                                                      OFFSET(get<T>, {0xF0, 16, 0, 0})
	CMember(TArray<FCRSimSoftCollision>)               CollisionVolumes                                            OFFSET(get<T>, {0x100, 16, 0, 0})
	DMember(float)                                     SimulatedStepsPerSecond                                     OFFSET(get<float>, {0x110, 4, 0, 0})
	CMember(ERigVMSimPointIntegrateType)               IntegratorType                                              OFFSET(get<T>, {0x114, 1, 0, 0})
	DMember(float)                                     VerletBlend                                                 OFFSET(get<float>, {0x118, 4, 0, 0})
	CMember(TArray<FRigUnit_PointSimulation_BoneTarget>) BoneTargets                                               OFFSET(get<T>, {0x120, 16, 0, 0})
	DMember(bool)                                      bLimitLocalPosition                                         OFFSET(get<bool>, {0x130, 1, 0, 0})
	DMember(bool)                                      bPropagateToChildren                                        OFFSET(get<bool>, {0x131, 1, 0, 0})
	SMember(FVector)                                   PrimaryAimAxis                                              OFFSET(getStruct<T>, {0x134, 12, 0, 0})
	SMember(FVector)                                   SecondaryAimAxis                                            OFFSET(getStruct<T>, {0x140, 12, 0, 0})
	SMember(FRigUnit_PointSimulation_DebugSettings)    DebugSettings                                               OFFSET(getStruct<T>, {0x150, 80, 0, 0})
	SMember(FRigVMFourPointBezier)                     Bezier                                                      OFFSET(getStruct<T>, {0x1A0, 48, 0, 0})
	SMember(FRigUnit_PointSimulation_WorkData)         WorkData                                                    OFFSET(getStruct<T>, {0x1D0, 136, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringInterp
/// Size: 0x0028 (0x000008 - 0x000030)
class FRigUnit_SpringInterp : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     Current                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Target                                                      OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     CriticalDamping                                             OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	SMember(FFloatSpringState)                         SpringState                                                 OFFSET(getStruct<T>, {0x20, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpVector
/// Size: 0x0050 (0x000008 - 0x000058)
class FRigUnit_SpringInterpVector : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	SMember(FVector)                                   Current                                                     OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	DMember(float)                                     Stiffness                                                   OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     CriticalDamping                                             OFFSET(get<float>, {0x24, 4, 0, 0})
	DMember(float)                                     Mass                                                        OFFSET(get<float>, {0x28, 4, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	SMember(FVectorSpringState)                        SpringState                                                 OFFSET(getStruct<T>, {0x38, 28, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpV2
/// Size: 0x0038 (0x000008 - 0x000040)
class FRigUnit_SpringInterpV2 : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 64;

public:
	DMember(float)                                     Target                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     CriticalDamping                                             OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Force                                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bUseCurrentInput                                            OFFSET(get<bool>, {0x18, 1, 0, 0})
	DMember(float)                                     Current                                                     OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     TargetVelocityAmount                                        OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bInitializeFromTarget                                       OFFSET(get<bool>, {0x24, 1, 0, 0})
	DMember(float)                                     Result                                                      OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Velocity                                                    OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     SimulatedResult                                             OFFSET(get<float>, {0x30, 4, 0, 0})
	SMember(FFloatSpringState)                         SpringState                                                 OFFSET(getStruct<T>, {0x34, 12, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpVectorV2
/// Size: 0x0078 (0x000008 - 0x000080)
class FRigUnit_SpringInterpVectorV2 : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 128;

public:
	SMember(FVector)                                   Target                                                      OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     CriticalDamping                                             OFFSET(get<float>, {0x18, 4, 0, 0})
	SMember(FVector)                                   Force                                                       OFFSET(getStruct<T>, {0x1C, 12, 0, 0})
	DMember(bool)                                      bUseCurrentInput                                            OFFSET(get<bool>, {0x28, 1, 0, 0})
	SMember(FVector)                                   Current                                                     OFFSET(getStruct<T>, {0x2C, 12, 0, 0})
	DMember(float)                                     TargetVelocityAmount                                        OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(bool)                                      bInitializeFromTarget                                       OFFSET(get<bool>, {0x3C, 1, 0, 0})
	SMember(FVector)                                   Result                                                      OFFSET(getStruct<T>, {0x40, 12, 0, 0})
	SMember(FVector)                                   Velocity                                                    OFFSET(getStruct<T>, {0x4C, 12, 0, 0})
	SMember(FVector)                                   SimulatedResult                                             OFFSET(getStruct<T>, {0x58, 12, 0, 0})
	SMember(FVectorSpringState)                        SpringState                                                 OFFSET(getStruct<T>, {0x64, 28, 0, 0})
};

/// Struct /Script/ControlRig.RigUnit_SpringInterpQuaternionV2
/// Size: 0x00A8 (0x000008 - 0x0000B0)
class FRigUnit_SpringInterpQuaternionV2 : public FRigVMFunction_SimBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FQuat)                                     Target                                                      OFFSET(getStruct<T>, {0x10, 16, 0, 0})
	DMember(float)                                     Strength                                                    OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     CriticalDamping                                             OFFSET(get<float>, {0x24, 4, 0, 0})
	SMember(FVector)                                   Torque                                                      OFFSET(getStruct<T>, {0x28, 12, 0, 0})
	DMember(bool)                                      bUseCurrentInput                                            OFFSET(get<bool>, {0x34, 1, 0, 0})
	SMember(FQuat)                                     Current                                                     OFFSET(getStruct<T>, {0x40, 16, 0, 0})
	DMember(float)                                     TargetVelocityAmount                                        OFFSET(get<float>, {0x50, 4, 0, 0})
	DMember(bool)                                      bInitializeFromTarget                                       OFFSET(get<bool>, {0x54, 1, 0, 0})
	SMember(FQuat)                                     Result                                                      OFFSET(getStruct<T>, {0x60, 16, 0, 0})
	SMember(FVector)                                   AngularVelocity                                             OFFSET(getStruct<T>, {0x70, 12, 0, 0})
	SMember(FQuat)                                     SimulatedResult                                             OFFSET(getStruct<T>, {0x80, 16, 0, 0})
	SMember(FQuaternionSpringState)                    SpringState                                                 OFFSET(getStruct<T>, {0x90, 32, 0, 0})
};

/// Enum /Script/ControlRig.ERigElementType
/// Size: 0x11
enum class ERigElementType : uint8_t
{
	ERigElementType__None                                                            = 0,
	ERigElementType__Bone                                                            = 1,
	ERigElementType__Null                                                            = 2,
	ERigElementType__Space                                                           = 2,
	ERigElementType__Control                                                         = 4,
	ERigElementType__Curve                                                           = 8,
	ERigElementType__RigidBody                                                       = 16,
	ERigElementType__Reference                                                       = 32,
	ERigElementType__Last                                                            = 64,
	ERigElementType__All                                                             = 63,
	ERigElementType__ToResetAfterConstructionEvent                                   = 13
};

/// Enum /Script/ControlRig.ERigControlTransformChannel
/// Size: 0x09
enum class ERigControlTransformChannel : uint8_t
{
	ERigControlTransformChannel__TranslationX                                        = 0,
	ERigControlTransformChannel__TranslationY                                        = 1,
	ERigControlTransformChannel__TranslationZ                                        = 2,
	ERigControlTransformChannel__Pitch                                               = 3,
	ERigControlTransformChannel__Yaw                                                 = 4,
	ERigControlTransformChannel__Roll                                                = 5,
	ERigControlTransformChannel__ScaleX                                              = 6,
	ERigControlTransformChannel__ScaleY                                              = 7,
	ERigControlTransformChannel__ScaleZ                                              = 8
};

/// Enum /Script/ControlRig.ERigControlVisibility
/// Size: 0x02
enum class ERigControlVisibility : uint8_t
{
	ERigControlVisibility__UserDefined                                               = 0,
	ERigControlVisibility__BasedOnSelection                                          = 1
};

/// Enum /Script/ControlRig.ERigControlAxis
/// Size: 0x03
enum class ERigControlAxis : uint8_t
{
	ERigControlAxis__X                                                               = 0,
	ERigControlAxis__Y                                                               = 1,
	ERigControlAxis__Z                                                               = 2
};

/// Enum /Script/ControlRig.ERigControlType
/// Size: 0x10
enum class ERigControlType : uint8_t
{
	ERigControlType__Bool                                                            = 0,
	ERigControlType__Float                                                           = 1,
	ERigControlType__Integer                                                         = 2,
	ERigControlType__Vector2D                                                        = 3,
	ERigControlType__Position                                                        = 4,
	ERigControlType__Scale                                                           = 5,
	ERigControlType__Rotator                                                         = 6,
	ERigControlType__Transform                                                       = 7,
	ERigControlType__TransformNoScale                                                = 8,
	ERigControlType__EulerTransform                                                  = 9
};

/// Enum /Script/ControlRig.ERigControlAnimationType
/// Size: 0x04
enum class ERigControlAnimationType : uint8_t
{
	ERigControlAnimationType__AnimationControl                                       = 0,
	ERigControlAnimationType__AnimationChannel                                       = 1,
	ERigControlAnimationType__ProxyControl                                           = 2,
	ERigControlAnimationType__VisualCue                                              = 3
};

/// Enum /Script/ControlRig.ERigExecutionType
/// Size: 0x03
enum class ERigExecutionType : uint8_t
{
	ERigExecutionType__Runtime                                                       = 0,
	ERigExecutionType__Editing                                                       = 1,
	ERigExecutionType__Max                                                           = 2
};

/// Enum /Script/ControlRig.ERigTransformStackEntryType
/// Size: 0x04
enum class ERigTransformStackEntryType : uint8_t
{
	TransformPose                                                                    = 0,
	ControlOffset                                                                    = 1,
	ControlShape                                                                     = 2,
	CurveValue                                                                       = 3
};

/// Enum /Script/ControlRig.ERigTransformType
/// Size: 0x05
enum class ERigTransformType : uint8_t
{
	ERigTransformType__InitialLocal                                                  = 0,
	ERigTransformType__CurrentLocal                                                  = 1,
	ERigTransformType__InitialGlobal                                                 = 2,
	ERigTransformType__CurrentGlobal                                                 = 3,
	ERigTransformType__NumTransformTypes                                             = 4
};

/// Enum /Script/ControlRig.EControlRigInteractionType
/// Size: 0x05
enum class EControlRigInteractionType : uint8_t
{
	EControlRigInteractionType__None                                                 = 0,
	EControlRigInteractionType__Translate                                            = 1,
	EControlRigInteractionType__Rotate                                               = 2,
	EControlRigInteractionType__Scale                                                = 4,
	EControlRigInteractionType__All                                                  = 7
};

/// Enum /Script/ControlRig.EControlRigVectorKind
/// Size: 0x02
enum class EControlRigVectorKind : uint8_t
{
	EControlRigVectorKind__Direction                                                 = 0,
	EControlRigVectorKind__Location                                                  = 1
};

/// Enum /Script/ControlRig.EControlRigComponentSpace
/// Size: 0x06
enum class EControlRigComponentSpace : uint8_t
{
	EControlRigComponentSpace__WorldSpace                                            = 0,
	EControlRigComponentSpace__ActorSpace                                            = 1,
	EControlRigComponentSpace__ComponentSpace                                        = 2,
	EControlRigComponentSpace__RigSpace                                              = 3,
	EControlRigComponentSpace__LocalSpace                                            = 4,
	EControlRigComponentSpace__Max                                                   = 5
};

/// Enum /Script/ControlRig.EControlRigComponentMapDirection
/// Size: 0x02
enum class EControlRigComponentMapDirection : uint8_t
{
	EControlRigComponentMapDirection__Input                                          = 0,
	EControlRigComponentMapDirection__Output                                         = 1
};

/// Enum /Script/ControlRig.ETransformSpaceMode
/// Size: 0x05
enum class ETransformSpaceMode : uint8_t
{
	ETransformSpaceMode__LocalSpace                                                  = 0,
	ETransformSpaceMode__GlobalSpace                                                 = 1,
	ETransformSpaceMode__BaseSpace                                                   = 2,
	ETransformSpaceMode__BaseJoint                                                   = 3,
	ETransformSpaceMode__Max                                                         = 4
};

/// Enum /Script/ControlRig.ETransformGetterType
/// Size: 0x03
enum class ETransformGetterType : uint8_t
{
	ETransformGetterType__Initial                                                    = 0,
	ETransformGetterType__Current                                                    = 1,
	ETransformGetterType__Max                                                        = 2
};

/// Enum /Script/ControlRig.EControlRigTestDataPlaybackMode
/// Size: 0x04
enum class EControlRigTestDataPlaybackMode : uint8_t
{
	EControlRigTestDataPlaybackMode__Live                                            = 0,
	EControlRigTestDataPlaybackMode__ReplayInputs                                    = 1,
	EControlRigTestDataPlaybackMode__GroundTruth                                     = 2,
	EControlRigTestDataPlaybackMode__Max                                             = 3
};

/// Enum /Script/ControlRig.ECRSimConstraintType
/// Size: 0x04
enum class ECRSimConstraintType : uint8_t
{
	ECRSimConstraintType__Distance                                                   = 0,
	ECRSimConstraintType__DistanceFromA                                              = 1,
	ECRSimConstraintType__DistanceFromB                                              = 2,
	ECRSimConstraintType__Plane                                                      = 3
};

/// Enum /Script/ControlRig.ECRSimPointForceType
/// Size: 0x01
enum class ECRSimPointForceType : uint8_t
{
	ECRSimPointForceType__Direction                                                  = 0
};

/// Enum /Script/ControlRig.ECRSimSoftCollisionType
/// Size: 0x03
enum class ECRSimSoftCollisionType : uint8_t
{
	ECRSimSoftCollisionType__Plane                                                   = 0,
	ECRSimSoftCollisionType__Sphere                                                  = 1,
	ECRSimSoftCollisionType__Cone                                                    = 2
};

/// Enum /Script/ControlRig.EControlRigFKRigExecuteMode
/// Size: 0x04
enum class EControlRigFKRigExecuteMode : uint8_t
{
	EControlRigFKRigExecuteMode__Replace                                             = 0,
	EControlRigFKRigExecuteMode__Additive                                            = 1,
	EControlRigFKRigExecuteMode__Direct                                              = 2,
	EControlRigFKRigExecuteMode__Max                                                 = 3
};

/// Enum /Script/ControlRig.ERigBoneType
/// Size: 0x02
enum class ERigBoneType : uint8_t
{
	ERigBoneType__Imported                                                           = 0,
	ERigBoneType__User                                                               = 1
};

/// Enum /Script/ControlRig.ERigMetadataType
/// Size: 0x21
enum class ERigMetadataType : uint8_t
{
	ERigMetadataType__Bool                                                           = 0,
	ERigMetadataType__BoolArray                                                      = 1,
	ERigMetadataType__Float                                                          = 2,
	ERigMetadataType__FloatArray                                                     = 3,
	ERigMetadataType__Int32                                                          = 4,
	ERigMetadataType__Int32Array                                                     = 5,
	ERigMetadataType__Name                                                           = 6,
	ERigMetadataType__NameArray                                                      = 7,
	ERigMetadataType__Vector                                                         = 8,
	ERigMetadataType__VectorArray                                                    = 9,
	ERigMetadataType__Rotator                                                        = 10,
	ERigMetadataType__RotatorArray                                                   = 11,
	ERigMetadataType__Quat                                                           = 12,
	ERigMetadataType__QuatArray                                                      = 13,
	ERigMetadataType__Transform                                                      = 14,
	ERigMetadataType__TransformArray                                                 = 15,
	ERigMetadataType__LinearColor                                                    = 16,
	ERigMetadataType__LinearColorArray                                               = 17,
	ERigMetadataType__RigElementKey                                                  = 18,
	ERigMetadataType__RigElementKeyArray                                             = 19,
	ERigMetadataType__Invalid                                                        = 20
};

/// Enum /Script/ControlRig.ERigHierarchyNotification
/// Size: 0x16
enum class ERigHierarchyNotification : uint8_t
{
	ERigHierarchyNotification__ElementAdded                                          = 0,
	ERigHierarchyNotification__ElementRemoved                                        = 1,
	ERigHierarchyNotification__ElementRenamed                                        = 2,
	ERigHierarchyNotification__ElementSelected                                       = 3,
	ERigHierarchyNotification__ElementDeselected                                     = 4,
	ERigHierarchyNotification__ParentChanged                                         = 5,
	ERigHierarchyNotification__HierarchyReset                                        = 6,
	ERigHierarchyNotification__ControlSettingChanged                                 = 7,
	ERigHierarchyNotification__ControlVisibilityChanged                              = 8,
	ERigHierarchyNotification__ControlDrivenListChanged                              = 9,
	ERigHierarchyNotification__ControlShapeTransformChanged                          = 10,
	ERigHierarchyNotification__ParentWeightsChanged                                  = 11,
	ERigHierarchyNotification__InteractionBracketOpened                              = 12,
	ERigHierarchyNotification__InteractionBracketClosed                              = 13,
	ERigHierarchyNotification__ElementReordered                                      = 14,
	ERigHierarchyNotification__Max                                                   = 15
};

/// Enum /Script/ControlRig.ERigEvent
/// Size: 0x05
enum class ERigEvent : uint8_t
{
	ERigEvent__None                                                                  = 0,
	ERigEvent__RequestAutoKey                                                        = 1,
	ERigEvent__OpenUndoBracket                                                       = 2,
	ERigEvent__CloseUndoBracket                                                      = 3,
	ERigEvent__Max                                                                   = 4
};

/// Enum /Script/ControlRig.EControlRigSetKey
/// Size: 0x03
enum class EControlRigSetKey : uint8_t
{
	EControlRigSetKey__DoNotCare                                                     = 0,
	EControlRigSetKey__Always                                                        = 1,
	EControlRigSetKey__Never                                                         = 2
};

/// Enum /Script/ControlRig.ERigControlValueType
/// Size: 0x04
enum class ERigControlValueType : uint8_t
{
	ERigControlValueType__Initial                                                    = 0,
	ERigControlValueType__Current                                                    = 1,
	ERigControlValueType__Minimum                                                    = 2,
	ERigControlValueType__Maximum                                                    = 3
};

/// Enum /Script/ControlRig.ERigSpaceType
/// Size: 0x04
enum class ERigSpaceType : uint8_t
{
	ERigSpaceType__Global                                                            = 0,
	ERigSpaceType__Bone                                                              = 1,
	ERigSpaceType__Control                                                           = 2,
	ERigSpaceType__Space                                                             = 3
};

/// Enum /Script/ControlRig.EMovieSceneControlRigSpaceType
/// Size: 0x03
enum class EMovieSceneControlRigSpaceType : uint8_t
{
	EMovieSceneControlRigSpaceType__Parent                                           = 0,
	EMovieSceneControlRigSpaceType__World                                            = 1,
	EMovieSceneControlRigSpaceType__ControlRig                                       = 2
};

/// Enum /Script/ControlRig.EControlRigDrawHierarchyMode
/// Size: 0x02
enum class EControlRigDrawHierarchyMode : uint8_t
{
	EControlRigDrawHierarchyMode__Axes                                               = 0,
	EControlRigDrawHierarchyMode__Max                                                = 1
};

/// Enum /Script/ControlRig.EAimMode
/// Size: 0x02
enum class EAimMode : uint8_t
{
	EAimMode__AimAtTarget                                                            = 0,
	EAimMode__OrientToTarget                                                         = 1
};

/// Enum /Script/ControlRig.EApplyTransformMode
/// Size: 0x03
enum class EApplyTransformMode : uint8_t
{
	EApplyTransformMode__Override                                                    = 0,
	EApplyTransformMode__Additive                                                    = 1,
	EApplyTransformMode__Max                                                         = 2
};

/// Enum /Script/ControlRig.ERigSwitchParentMode
/// Size: 0x03
enum class ERigSwitchParentMode : uint8_t
{
	ERigSwitchParentMode__World                                                      = 0,
	ERigSwitchParentMode__DefaultParent                                              = 1,
	ERigSwitchParentMode__ParentItem                                                 = 2
};

/// Enum /Script/ControlRig.EControlRigCurveAlignment
/// Size: 0x02
enum class EControlRigCurveAlignment : uint8_t
{
	EControlRigCurveAlignment__Front                                                 = 0,
	EControlRigCurveAlignment__Stretched                                             = 1
};

/// Enum /Script/ControlRig.EControlRigModifyBoneMode
/// Size: 0x05
enum class EControlRigModifyBoneMode : uint8_t
{
	EControlRigModifyBoneMode__OverrideLocal                                         = 0,
	EControlRigModifyBoneMode__OverrideGlobal                                        = 1,
	EControlRigModifyBoneMode__AdditiveLocal                                         = 2,
	EControlRigModifyBoneMode__AdditiveGlobal                                        = 3,
	EControlRigModifyBoneMode__Max                                                   = 4
};

/// Enum /Script/ControlRig.EConstraintInterpType
/// Size: 0x03
enum class EConstraintInterpType : uint8_t
{
	EConstraintInterpType__Average                                                   = 0,
	EConstraintInterpType__Shortest                                                  = 1,
	EConstraintInterpType__Max                                                       = 2
};

