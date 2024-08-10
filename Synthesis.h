
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: AudioExtensions
/// dependency: AudioMixer
/// dependency: CoreUObject
/// dependency: Engine
/// dependency: SlateCore
/// dependency: UMG

/// Class /Script/Synthesis.AudioImpulseResponse
/// Size: 0x0030 (0x000028 - 0x000058)
class UAudioImpulseResponse : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 88;

public:
	CMember(TArray<float>)                             ImpulseResponse                                             OFFSET(get<T>, {0x28, 16, 0, 0})
	DMember(int32_t)                                   NumChannels                                                 OFFSET(get<int32_t>, {0x38, 4, 0, 0})
	DMember(int32_t)                                   SampleRate                                                  OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(float)                                     NormalizationVolumeDb                                       OFFSET(get<float>, {0x40, 4, 0, 0})
	DMember(bool)                                      bTrueStereo                                                 OFFSET(get<bool>, {0x44, 1, 0, 0})
	CMember(TArray<float>)                             IRData                                                      OFFSET(get<T>, {0x48, 16, 0, 0})
};

/// Struct /Script/Synthesis.Synth1PatchCable
/// Size: 0x0008 (0x000000 - 0x000008)
class FSynth1PatchCable : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(ESynth1PatchDestination)                   Destination                                                 OFFSET(get<T>, {0x4, 1, 0, 0})
};

/// Struct /Script/Synthesis.EpicSynth1Patch
/// Size: 0x0018 (0x000000 - 0x000018)
class FEpicSynth1Patch : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ESynth1PatchSource)                        PatchSource                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(TArray<FSynth1PatchCable>)                 PatchCables                                                 OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Struct /Script/Synthesis.ModularSynthPreset
/// Size: 0x00D8 (0x000008 - 0x0000E0)
class FModularSynthPreset : public FTableRowBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	DMember(bool)                                      bEnablePolyphony                                            OFFSET(get<bool>, {0x8, 1, 1, 0})
	CMember(ESynth1OscType)                            Osc1Type                                                    OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(float)                                     Osc1Gain                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Osc1Octave                                                  OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     Osc1Semitones                                               OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     Osc1Cents                                                   OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     Osc1PulseWidth                                              OFFSET(get<float>, {0x20, 4, 0, 0})
	CMember(ESynth1OscType)                            Osc2Type                                                    OFFSET(get<T>, {0x24, 1, 0, 0})
	DMember(float)                                     Osc2Gain                                                    OFFSET(get<float>, {0x28, 4, 0, 0})
	DMember(float)                                     Osc2Octave                                                  OFFSET(get<float>, {0x2C, 4, 0, 0})
	DMember(float)                                     Osc2Semitones                                               OFFSET(get<float>, {0x30, 4, 0, 0})
	DMember(float)                                     Osc2Cents                                                   OFFSET(get<float>, {0x34, 4, 0, 0})
	DMember(float)                                     Osc2PulseWidth                                              OFFSET(get<float>, {0x38, 4, 0, 0})
	DMember(float)                                     Portamento                                                  OFFSET(get<float>, {0x3C, 4, 0, 0})
	DMember(bool)                                      bEnableUnison                                               OFFSET(get<bool>, {0x40, 1, 1, 0})
	DMember(bool)                                      bEnableOscillatorSync                                       OFFSET(get<bool>, {0x40, 1, 1, 1})
	DMember(float)                                     Spread                                                      OFFSET(get<float>, {0x44, 4, 0, 0})
	DMember(float)                                     Pan                                                         OFFSET(get<float>, {0x48, 4, 0, 0})
	DMember(float)                                     LFO1Frequency                                               OFFSET(get<float>, {0x4C, 4, 0, 0})
	DMember(float)                                     LFO1Gain                                                    OFFSET(get<float>, {0x50, 4, 0, 0})
	CMember(ESynthLFOType)                             LFO1Type                                                    OFFSET(get<T>, {0x54, 1, 0, 0})
	CMember(ESynthLFOMode)                             LFO1Mode                                                    OFFSET(get<T>, {0x55, 1, 0, 0})
	CMember(ESynthLFOPatchType)                        LFO1PatchType                                               OFFSET(get<T>, {0x56, 1, 0, 0})
	DMember(float)                                     LFO2Frequency                                               OFFSET(get<float>, {0x58, 4, 0, 0})
	DMember(float)                                     LFO2Gain                                                    OFFSET(get<float>, {0x5C, 4, 0, 0})
	CMember(ESynthLFOType)                             LFO2Type                                                    OFFSET(get<T>, {0x60, 1, 0, 0})
	CMember(ESynthLFOMode)                             LFO2Mode                                                    OFFSET(get<T>, {0x61, 1, 0, 0})
	CMember(ESynthLFOPatchType)                        LFO2PatchType                                               OFFSET(get<T>, {0x62, 1, 0, 0})
	DMember(float)                                     GainDb                                                      OFFSET(get<float>, {0x64, 4, 0, 0})
	DMember(float)                                     AttackTime                                                  OFFSET(get<float>, {0x68, 4, 0, 0})
	DMember(float)                                     DecayTime                                                   OFFSET(get<float>, {0x6C, 4, 0, 0})
	DMember(float)                                     SustainGain                                                 OFFSET(get<float>, {0x70, 4, 0, 0})
	DMember(float)                                     ReleaseTime                                                 OFFSET(get<float>, {0x74, 4, 0, 0})
	CMember(ESynthModEnvPatch)                         ModEnvPatchType                                             OFFSET(get<T>, {0x78, 1, 0, 0})
	CMember(ESynthModEnvBiasPatch)                     ModEnvBiasPatchType                                         OFFSET(get<T>, {0x79, 1, 0, 0})
	DMember(bool)                                      bInvertModulationEnvelope                                   OFFSET(get<bool>, {0x7C, 1, 1, 0})
	DMember(bool)                                      bInvertModulationEnvelopeBias                               OFFSET(get<bool>, {0x7C, 1, 1, 1})
	DMember(float)                                     ModulationEnvelopeDepth                                     OFFSET(get<float>, {0x80, 4, 0, 0})
	DMember(float)                                     ModulationEnvelopeAttackTime                                OFFSET(get<float>, {0x84, 4, 0, 0})
	DMember(float)                                     ModulationEnvelopeDecayTime                                 OFFSET(get<float>, {0x88, 4, 0, 0})
	DMember(float)                                     ModulationEnvelopeSustainGain                               OFFSET(get<float>, {0x8C, 4, 0, 0})
	DMember(float)                                     ModulationEnvelopeReleaseTime                               OFFSET(get<float>, {0x90, 4, 0, 0})
	DMember(bool)                                      bLegato                                                     OFFSET(get<bool>, {0x94, 1, 1, 0})
	DMember(bool)                                      bRetrigger                                                  OFFSET(get<bool>, {0x94, 1, 1, 1})
	DMember(float)                                     FilterFrequency                                             OFFSET(get<float>, {0x98, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     OFFSET(get<float>, {0x9C, 4, 0, 0})
	CMember(ESynthFilterType)                          FilterType                                                  OFFSET(get<T>, {0xA0, 1, 0, 0})
	CMember(ESynthFilterAlgorithm)                     FilterAlgorithm                                             OFFSET(get<T>, {0xA1, 1, 0, 0})
	DMember(bool)                                      bStereoDelayEnabled                                         OFFSET(get<bool>, {0xA4, 1, 1, 0})
	CMember(ESynthStereoDelayMode)                     StereoDelayMode                                             OFFSET(get<T>, {0xA8, 1, 0, 0})
	DMember(float)                                     StereoDelayTime                                             OFFSET(get<float>, {0xAC, 4, 0, 0})
	DMember(float)                                     StereoDelayFeedback                                         OFFSET(get<float>, {0xB0, 4, 0, 0})
	DMember(float)                                     StereoDelayWetlevel                                         OFFSET(get<float>, {0xB4, 4, 0, 0})
	DMember(float)                                     StereoDelayRatio                                            OFFSET(get<float>, {0xB8, 4, 0, 0})
	DMember(bool)                                      bChorusEnabled                                              OFFSET(get<bool>, {0xBC, 1, 1, 0})
	DMember(float)                                     ChorusDepth                                                 OFFSET(get<float>, {0xC0, 4, 0, 0})
	DMember(float)                                     ChorusFeedback                                              OFFSET(get<float>, {0xC4, 4, 0, 0})
	DMember(float)                                     ChorusFrequency                                             OFFSET(get<float>, {0xC8, 4, 0, 0})
	CMember(TArray<FEpicSynth1Patch>)                  Patches                                                     OFFSET(get<T>, {0xD0, 16, 0, 0})
};

/// Struct /Script/Synthesis.ModularSynthPresetBankEntry
/// Size: 0x00F0 (0x000000 - 0x0000F0)
class FModularSynthPresetBankEntry : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 240;

public:
	SMember(FString)                                   PresetName                                                  OFFSET(getStruct<T>, {0x0, 16, 0, 0})
	SMember(FModularSynthPreset)                       Preset                                                      OFFSET(getStruct<T>, {0x10, 224, 0, 0})
};

/// Class /Script/Synthesis.ModularSynthPresetBank
/// Size: 0x0010 (0x000028 - 0x000038)
class UModularSynthPresetBank : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(TArray<FModularSynthPresetBankEntry>)      Presets                                                     OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Synthesis.ModularSynthLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class UModularSynthLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset
	// void AddModularSynthPresetToBankAsset(class UModularSynthPresetBank* InBank, FModularSynthPreset& Preset, FString PresetName); // [0x297d760] Final|Native|Static|Private|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.ModularSynthComponent
/// Size: 0x06D0 (0x0006E0 - 0x000DB0)
class UModularSynthComponent : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3504;

public:
	DMember(int32_t)                                   VoiceCount                                                  OFFSET(get<int32_t>, {0x6E0, 4, 0, 0})


	/// Functions
	// Function /Script/Synthesis.ModularSynthComponent.SetSynthPreset
	// void SetSynthPreset(FModularSynthPreset& SynthPreset);                                                                   // [0x297df60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSustainGain
	// void SetSustainGain(float SustainGain);                                                                                  // [0x29802b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayWetlevel
	// void SetStereoDelayWetlevel(float DelayWetlevel);                                                                        // [0x297e770] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayTime
	// void SetStereoDelayTime(float DelayTimeMsec);                                                                            // [0x297e950] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayRatio
	// void SetStereoDelayRatio(float DelayRatio);                                                                              // [0x297e680] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayMode
	// void SetStereoDelayMode(ESynthStereoDelayMode StereoDelayMode);                                                          // [0x297eab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled
	// void SetStereoDelayIsEnabled(bool StereoDelayEnabled);                                                                   // [0x297eba0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetStereoDelayFeedback
	// void SetStereoDelayFeedback(float DelayFeedback);                                                                        // [0x297e860] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetSpread
	// void SetSpread(float Spread);                                                                                            // [0x2981550] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetReleaseTime
	// void SetReleaseTime(float ReleaseTimeMsec);                                                                              // [0x29801c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPortamento
	// void SetPortamento(float Portamento);                                                                                    // [0x2981b70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPitchBend
	// void SetPitchBend(float PitchBend);                                                                                      // [0x2981cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetPan
	// void SetPan(float Pan);                                                                                                  // [0x2981640] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscType
	// void SetOscType(int32_t OscIndex, ESynth1OscType OscType);                                                               // [0x29823f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSync
	// void SetOscSync(bool bIsSynced);                                                                                         // [0x29817a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscSemitones
	// void SetOscSemitones(int32_t OscIndex, float Semitones);                                                                 // [0x2981fb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscPulsewidth
	// void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth);                                                               // [0x29819f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscOctave
	// void SetOscOctave(int32_t OscIndex, float Octave);                                                                       // [0x29821d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGainMod
	// void SetOscGainMod(int32_t OscIndex, float OscGainMod);                                                                  // [0x2982790] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscGain
	// void SetOscGain(int32_t OscIndex, float OscGain);                                                                        // [0x29829b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscFrequencyMod
	// void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod);                                                             // [0x2982570] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetOscCents
	// void SetOscCents(int32_t OscIndex, float Cents);                                                                         // [0x2981e30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvSustainGain
	// void SetModEnvSustainGain(float SustainGain);                                                                            // [0x297f6c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvReleaseTime
	// void SetModEnvReleaseTime(float Release);                                                                                // [0x297f560] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvPatch
	// void SetModEnvPatch(ESynthModEnvPatch InPatchType);                                                                      // [0x2980060] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvInvert
	// void SetModEnvInvert(bool bInvert);                                                                                      // [0x297fda0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDepth
	// void SetModEnvDepth(float Depth);                                                                                        // [0x297fae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvDecayTime
	// void SetModEnvDecayTime(float DecayTimeMsec);                                                                            // [0x297f820] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasPatch
	// void SetModEnvBiasPatch(ESynthModEnvBiasPatch InPatchType);                                                              // [0x297ff00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvBiasInvert
	// void SetModEnvBiasInvert(bool bInvert);                                                                                  // [0x297fc40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetModEnvAttackTime
	// void SetModEnvAttackTime(float AttackTimeMsec);                                                                          // [0x297f980] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOType
	// void SetLFOType(int32_t LFOIndex, ESynthLFOType LFOType);                                                                // [0x2980ab0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOPatch
	// void SetLFOPatch(int32_t LFOIndex, ESynthLFOPatchType LFOPatchType);                                                     // [0x2980670] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOMode
	// void SetLFOMode(int32_t LFOIndex, ESynthLFOMode LFOMode);                                                                // [0x2980890] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGainMod
	// void SetLFOGainMod(int32_t LFOIndex, float GainMod);                                                                     // [0x2980cd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOGain
	// void SetLFOGain(int32_t LFOIndex, float Gain);                                                                           // [0x2980ef0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequencyMod
	// void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz);                                                         // [0x2981110] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetLFOFrequency
	// void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz);                                                               // [0x2981330] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetGainDb
	// void SetGainDb(float GainDb);                                                                                            // [0x2980580] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterType
	// void SetFilterType(ESynthFilterType FilterType);                                                                         // [0x297ed80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQMod
	// void SetFilterQMod(float FilterQ);                                                                                       // [0x297eee0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterQ
	// void SetFilterQ(float FilterQ);                                                                                          // [0x297f040] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequencyMod
	// void SetFilterFrequencyMod(float FilterFrequencyHz);                                                                     // [0x297f130] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterFrequency
	// void SetFilterFrequency(float FilterFrequencyHz);                                                                        // [0x297f290] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetFilterAlgorithm
	// void SetFilterAlgorithm(ESynthFilterAlgorithm FilterAlgorithm);                                                          // [0x297ec90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableUnison
	// void SetEnableUnison(bool EnableUnison);                                                                                 // [0x2981900] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableRetrigger
	// void SetEnableRetrigger(bool RetriggerEnabled);                                                                          // [0x297f380] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePolyphony
	// void SetEnablePolyphony(bool bEnablePolyphony);                                                                          // [0x2982bd0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnablePatch
	// bool SetEnablePatch(FPatchId PatchId, bool bIsEnabled);                                                                  // [0x297da60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetEnableLegato
	// void SetEnableLegato(bool LegatoEnabled);                                                                                // [0x297f470] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetDecayTime
	// void SetDecayTime(float DecayTimeMsec);                                                                                  // [0x29803a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFrequency
	// void SetChorusFrequency(float Frequency);                                                                                // [0x297e170] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusFeedback
	// void SetChorusFeedback(float Feedback);                                                                                  // [0x297e2d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusEnabled
	// void SetChorusEnabled(bool EnableChorus);                                                                                // [0x297e590] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetChorusDepth
	// void SetChorusDepth(float Depth);                                                                                        // [0x297e430] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.SetAttackTime
	// void SetAttackTime(float AttackTimeMsec);                                                                                // [0x2980490] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOn
	// void NoteOn(float Note, int32_t Velocity, float Duration);                                                               // [0x2982f60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.NoteOff
	// void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes);                                                         // [0x2982cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.ModularSynthComponent.CreatePatch
	// FPatchId CreatePatch(ESynth1PatchSource PatchSource, TArray<FSynth1PatchCable>& PatchCables, bool bEnableByDefault);     // [0x297dca0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherSettings
/// Size: 0x00D0 (0x000000 - 0x0000D0)
class FSourceEffectBitCrusherSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	DMember(float)                                     CrushedSampleRate                                           OFFSET(get<float>, {0x0, 4, 0, 0})
	SMember(FSoundModulationDestinationSettings)       SampleRateModulation                                        OFFSET(getStruct<T>, {0x8, 96, 0, 0})
	DMember(float)                                     CrushedBits                                                 OFFSET(get<float>, {0x68, 4, 0, 0})
	SMember(FSoundModulationDestinationSettings)       BitModulation                                               OFFSET(getStruct<T>, {0x70, 96, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectBitCrusherPreset
/// Size: 0x01C8 (0x000068 - 0x000230)
class USourceEffectBitCrusherPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 560;

public:
	SMember(FSourceEffectBitCrusherSettings)           Settings                                                    OFFSET(getStruct<T>, {0x160, 208, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSettings
	// void SetSettings(FSourceEffectBitCrusherBaseSettings& Settings);                                                         // [0x29883f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulators
	// void SetSampleRateModulators(TSet<USoundModulatorBase*>& InModulators);                                                  // [0x2988530] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRateModulator
	// void SetSampleRateModulator(class USoundModulatorBase* Modulator);                                                       // [0x29886f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetSampleRate
	// void SetSampleRate(float SampleRate);                                                                                    // [0x2988800] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetModulationSettings
	// void SetModulationSettings(FSourceEffectBitCrusherSettings& ModulationSettings);                                         // [0x2988150] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBits
	// void SetBits(float Bits);                                                                                                // [0x2988be0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulators
	// void SetBitModulators(TSet<USoundModulatorBase*>& InModulators);                                                         // [0x2988910] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectBitCrusherPreset.SetBitModulator
	// void SetBitModulator(class USoundModulatorBase* Modulator);                                                              // [0x2988ad0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectChorusSettings
/// Size: 0x0258 (0x000000 - 0x000258)
class FSourceEffectChorusSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 600;

public:
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Feedback                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Spread                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
	SMember(FSoundModulationDestinationSettings)       DepthModulation                                             OFFSET(getStruct<T>, {0x18, 96, 0, 0})
	SMember(FSoundModulationDestinationSettings)       FrequencyModulation                                         OFFSET(getStruct<T>, {0x78, 96, 0, 0})
	SMember(FSoundModulationDestinationSettings)       FeedbackModulation                                          OFFSET(getStruct<T>, {0xD8, 96, 0, 0})
	SMember(FSoundModulationDestinationSettings)       WetModulation                                               OFFSET(getStruct<T>, {0x138, 96, 0, 0})
	SMember(FSoundModulationDestinationSettings)       DryModulation                                               OFFSET(getStruct<T>, {0x198, 96, 0, 0})
	SMember(FSoundModulationDestinationSettings)       SpreadModulation                                            OFFSET(getStruct<T>, {0x1F8, 96, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectChorusPreset
/// Size: 0x04D8 (0x000068 - 0x000540)
class USourceEffectChorusPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1344;

public:
	SMember(FSourceEffectChorusSettings)               Settings                                                    OFFSET(getStruct<T>, {0x2E8, 600, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulators
	// void SetWetModulators(TSet<USoundModulatorBase*>& Modulators);                                                           // [0x298b550] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWetModulator
	// void SetWetModulator(class USoundModulatorBase* Modulator);                                                              // [0x298b710] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetWet
	// void SetWet(float WetAmount);                                                                                            // [0x298b820] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulators
	// void SetSpreadModulators(TSet<USoundModulatorBase*>& Modulators);                                                        // [0x298ad90] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpreadModulator
	// void SetSpreadModulator(class USoundModulatorBase* Modulator);                                                           // [0x298af50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSpread
	// void SetSpread(float Spread);                                                                                            // [0x298b060] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetSettings
	// void SetSettings(FSourceEffectChorusBaseSettings& Settings);                                                             // [0x298ac40] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetModulationSettings
	// void SetModulationSettings(FSourceEffectChorusSettings& ModulationSettings);                                             // [0x298aae0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulators
	// void SetFrequencyModulators(TSet<USoundModulatorBase*>& Modulators);                                                     // [0x298b930] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequencyModulator
	// void SetFrequencyModulator(class USoundModulatorBase* Modulator);                                                        // [0x298baf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFrequency
	// void SetFrequency(float Frequency);                                                                                      // [0x298bc00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulators
	// void SetFeedbackModulators(TSet<USoundModulatorBase*>& Modulators);                                                      // [0x298bd10] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedbackModulator
	// void SetFeedbackModulator(class USoundModulatorBase* Modulator);                                                         // [0x298bed0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetFeedback
	// void SetFeedback(float Feedback);                                                                                        // [0x298bfe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulators
	// void SetDryModulators(TSet<USoundModulatorBase*>& Modulators);                                                           // [0x298b170] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDryModulator
	// void SetDryModulator(class USoundModulatorBase* Modulator);                                                              // [0x298b330] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDry
	// void SetDry(float DryAmount);                                                                                            // [0x298b440] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulators
	// void SetDepthModulators(TSet<USoundModulatorBase*>& Modulators);                                                         // [0x298c0f0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepthModulator
	// void SetDepthModulator(class USoundModulatorBase* Modulator);                                                            // [0x298c2b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectChorusPreset.SetDepth
	// void SetDepth(float Depth);                                                                                              // [0x298c3c0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectConvolutionReverbSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSourceEffectConvolutionReverbSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     NormalizationVolumeDb                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     WetVolumeDb                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DryVolumeDb                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0xC, 1, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectConvolutionReverbPreset
/// Size: 0x0058 (0x000068 - 0x0000C0)
class USourceEffectConvolutionReverbPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	CMember(class UAudioImpulseResponse*)              ImpulseResponse                                             OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FSourceEffectConvolutionReverbSettings)    Settings                                                    OFFSET(getStruct<T>, {0x70, 16, 0, 0})
	CMember(ESubmixEffectConvolutionReverbBlockSize)   BlockSize                                                   OFFSET(get<T>, {0x80, 1, 0, 0})
	DMember(bool)                                      bEnableHardwareAcceleration                                 OFFSET(get<bool>, {0x81, 1, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectConvolutionReverbPreset.SetSettings
	// void SetSettings(FSourceEffectConvolutionReverbSettings& InSettings);                                                    // [0x298dee0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectConvolutionReverbPreset.SetImpulseResponse
	// void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);                                                 // [0x298dd00] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectDynamicsProcessorSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FSourceEffectDynamicsProcessorSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(ESourceEffectDynamicsProcessorType)        DynamicsProcessorType                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESourceEffectDynamicsPeakMode)             PeakMode                                                    OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     LookAheadMsec                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     AttackTimeMsec                                              OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ReleaseTimeMsec                                             OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     ThresholdDb                                                 OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     KneeBandwidthDb                                             OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     InputGainDb                                                 OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bStereoLinked                                               OFFSET(get<bool>, {0x24, 1, 1, 0})
	DMember(bool)                                      bAnalogMode                                                 OFFSET(get<bool>, {0x24, 1, 1, 1})
};

/// Class /Script/Synthesis.SourceEffectDynamicsProcessorPreset
/// Size: 0x0078 (0x000068 - 0x0000E0)
class USourceEffectDynamicsProcessorPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 224;

public:
	SMember(FSourceEffectDynamicsProcessorSettings)    Settings                                                    OFFSET(getStruct<T>, {0xB8, 40, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings
	// void SetSettings(FSourceEffectDynamicsProcessorSettings& InSettings);                                                    // [0x298f280] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.EnvelopeFollowerListener
/// Size: 0x0020 (0x0000A8 - 0x0000C8)
class UEnvelopeFollowerListener : public UActorComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 200;

public:
	SMember(FMulticastInlineDelegate)                  OnEnvelopeFollowerUpdate                                    OFFSET(getStruct<T>, {0xA8, 16, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectEnvelopeFollowerSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSourceEffectEnvelopeFollowerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     AttackTime                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ReleaseTime                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(EEnvelopeFollowerPeakMode)                 PeakMode                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	DMember(bool)                                      bIsAnalogMode                                               OFFSET(get<bool>, {0x9, 1, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectEnvelopeFollowerPreset
/// Size: 0x0040 (0x000068 - 0x0000A8)
class USourceEffectEnvelopeFollowerPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSourceEffectEnvelopeFollowerSettings)     Settings                                                    OFFSET(getStruct<T>, {0x9C, 12, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener
	// void UnregisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);                      // [0x29901b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings
	// void SetSettings(FSourceEffectEnvelopeFollowerSettings& InSettings);                                                     // [0x29903b0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener
	// void RegisterEnvelopeFollowerListener(class UEnvelopeFollowerListener* EnvelopeFollowerListener);                        // [0x29902b0] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectEQBand
/// Size: 0x0010 (0x000000 - 0x000010)
class FSourceEffectEQBand : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Bandwidth                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     GainDb                                                      OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bEnabled                                                    OFFSET(get<bool>, {0xC, 1, 1, 0})
};

/// Struct /Script/Synthesis.SourceEffectEQSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSourceEffectEQSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(TArray<FSourceEffectEQBand>)               EQBands                                                     OFFSET(get<T>, {0x0, 16, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectEQPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USourceEffectEQPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSourceEffectEQSettings)                   Settings                                                    OFFSET(getStruct<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectEQPreset.SetSettings
	// void SetSettings(FSourceEffectEQSettings& InSettings);                                                                   // [0x2992060] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectFilterAudioBusModulationSettings
/// Size: 0x0028 (0x000000 - 0x000028)
class FSourceEffectFilterAudioBusModulationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:
	CMember(class UAudioBus*)                          AudioBus                                                    OFFSET(get<T>, {0x0, 8, 0, 0})
	DMember(int32_t)                                   EnvelopeFollowerAttackTimeMsec                              OFFSET(get<int32_t>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   EnvelopeFollowerReleaseTimeMsec                             OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     EnvelopeGainMultiplier                                      OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(ESourceEffectFilterParam)                  FilterParam                                                 OFFSET(get<T>, {0x14, 1, 0, 0})
	DMember(float)                                     MinFrequencyModulation                                      OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     MaxFrequencyModulation                                      OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     MinResonanceModulation                                      OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(float)                                     MaxResonanceModulation                                      OFFSET(get<float>, {0x24, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectFilterSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FSourceEffectFilterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ESourceEffectFilterCircuit)                FilterCircuit                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESourceEffectFilterType)                   FilterType                                                  OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     CutoffFrequency                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(TArray<FSourceEffectFilterAudioBusModulationSettings>) AudioBusModulation                              OFFSET(get<T>, {0x10, 16, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectFilterPreset
/// Size: 0x0068 (0x000068 - 0x0000D0)
class USourceEffectFilterPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FSourceEffectFilterSettings)               Settings                                                    OFFSET(getStruct<T>, {0xB0, 32, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectFilterPreset.SetSettings
	// void SetSettings(FSourceEffectFilterSettings& InSettings);                                                               // [0x29933e0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectFoldbackDistortionSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSourceEffectFoldbackDistortionSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     InputGainDb                                                 OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     ThresholdDb                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectFoldbackDistortionPreset
/// Size: 0x0040 (0x000068 - 0x0000A8)
class USourceEffectFoldbackDistortionPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSourceEffectFoldbackDistortionSettings)   Settings                                                    OFFSET(getStruct<T>, {0x9C, 12, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings
	// void SetSettings(FSourceEffectFoldbackDistortionSettings& InSettings);                                                   // [0x29945c0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectMidSideSpreaderSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSourceEffectMidSideSpreaderSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     SpreadAmount                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	CMember(EStereoChannelMode)                        InputMode                                                   OFFSET(get<T>, {0x4, 1, 0, 0})
	CMember(EStereoChannelMode)                        OutputMode                                                  OFFSET(get<T>, {0x5, 1, 0, 0})
	DMember(bool)                                      bEqualPower                                                 OFFSET(get<bool>, {0x6, 1, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectMidSideSpreaderPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USourceEffectMidSideSpreaderPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FSourceEffectMidSideSpreaderSettings)      Settings                                                    OFFSET(getStruct<T>, {0x98, 8, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings
	// void SetSettings(FSourceEffectMidSideSpreaderSettings& InSettings);                                                      // [0x2995040] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectIndividualFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSourceEffectIndividualFilterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(ESourceEffectMotionFilterCircuit)          FilterCircuit                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESourceEffectMotionFilterType)             FilterType                                                  OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     CutoffFrequency                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectMotionFilterModulationSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FSourceEffectMotionFilterModulationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ESourceEffectMotionFilterModSource)        ModulationSource                                            OFFSET(get<T>, {0x0, 1, 0, 0})
	SMember(FVector2D)                                 ModulationInputRange                                        OFFSET(getStruct<T>, {0x4, 8, 0, 0})
	SMember(FVector2D)                                 ModulationOutputMinimumRange                                OFFSET(getStruct<T>, {0xC, 8, 0, 0})
	SMember(FVector2D)                                 ModulationOutputMaximumRange                                OFFSET(getStruct<T>, {0x14, 8, 0, 0})
	DMember(float)                                     UpdateEaseMS                                                OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectMotionFilterSettings
/// Size: 0x0078 (0x000000 - 0x000078)
class FSourceEffectMotionFilterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 120;

public:
	CMember(ESourceEffectMotionFilterTopology)         MotionFilterTopology                                        OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     MotionFilterMix                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	SMember(FSourceEffectIndividualFilterSettings)     FilterASettings                                             OFFSET(getStruct<T>, {0x8, 12, 0, 0})
	SMember(FSourceEffectIndividualFilterSettings)     FilterBSettings                                             OFFSET(getStruct<T>, {0x14, 12, 0, 0})
	CMember(TMap<ESourceEffectMotionFilterModDestination, FSourceEffectMotionFilterModulationSettings>) ModulationMappings OFFSET(get<T>, {0x20, 80, 0, 0})
	DMember(float)                                     DryVolumeDb                                                 OFFSET(get<float>, {0x70, 4, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectMotionFilterPreset
/// Size: 0x0118 (0x000068 - 0x000180)
class USourceEffectMotionFilterPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 384;

public:
	SMember(FSourceEffectMotionFilterSettings)         Settings                                                    OFFSET(getStruct<T>, {0x108, 120, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectMotionFilterPreset.SetSettings
	// void SetSettings(FSourceEffectMotionFilterSettings& InSettings);                                                         // [0x2996780] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectPannerSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSourceEffectPannerSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Spread                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Pan                                                         OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectPannerPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USourceEffectPannerPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FSourceEffectPannerSettings)               Settings                                                    OFFSET(getStruct<T>, {0x98, 8, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectPannerPreset.SetSettings
	// void SetSettings(FSourceEffectPannerSettings& InSettings);                                                               // [0x2999360] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectPhaserSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSourceEffectPhaserSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     WetLevel                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Feedback                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	CMember(EPhaserLFOType)                            LFOType                                                     OFFSET(get<T>, {0xC, 1, 0, 0})
	DMember(bool)                                      UseQuadraturePhase                                          OFFSET(get<bool>, {0xD, 1, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectPhaserPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USourceEffectPhaserPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSourceEffectPhaserSettings)               Settings                                                    OFFSET(getStruct<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectPhaserPreset.SetSettings
	// void SetSettings(FSourceEffectPhaserSettings& InSettings);                                                               // [0x299a0f0] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectRingModulationSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FSourceEffectRingModulationSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	CMember(ERingModulatorTypeSourceEffect)            ModulatorType                                               OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	CMember(class UAudioBus*)                          AudioBusModulator                                           OFFSET(get<T>, {0x18, 8, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectRingModulationPreset
/// Size: 0x0068 (0x000068 - 0x0000D0)
class USourceEffectRingModulationPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 208;

public:
	SMember(FSourceEffectRingModulationSettings)       Settings                                                    OFFSET(getStruct<T>, {0xB0, 32, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectRingModulationPreset.SetSettings
	// void SetSettings(FSourceEffectRingModulationSettings& InSettings);                                                       // [0x299ad70] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectSimpleDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FSourceEffectSimpleDelaySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     SpeedOfSound                                                OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DelayAmount                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DryAmount                                                   OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WetAmount                                                   OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Feedback                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bDelayBasedOnDistance                                       OFFSET(get<bool>, {0x14, 1, 1, 0})
	DMember(bool)                                      bUseDistanceOverride                                        OFFSET(get<bool>, {0x14, 1, 1, 1})
};

/// Class /Script/Synthesis.SourceEffectSimpleDelayPreset
/// Size: 0x0058 (0x000068 - 0x0000C0)
class USourceEffectSimpleDelayPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 192;

public:
	SMember(FSourceEffectSimpleDelaySettings)          Settings                                                    OFFSET(getStruct<T>, {0xA8, 24, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectSimpleDelayPreset.SetSettings
	// void SetSettings(FSourceEffectSimpleDelaySettings& InSettings);                                                          // [0x299ba80] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectStereoDelaySettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FSourceEffectStereoDelaySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(EStereoDelaySourceEffect)                  DelayMode                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     DelayTimeMsec                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Feedback                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DelayRatio                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bFilterEnabled                                              OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(EStereoDelayFiltertype)                    FilterType                                                  OFFSET(get<T>, {0x19, 1, 0, 0})
	DMember(float)                                     FilterFrequency                                             OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectStereoDelayPreset
/// Size: 0x0070 (0x000068 - 0x0000D8)
class USourceEffectStereoDelayPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FSourceEffectStereoDelaySettings)          Settings                                                    OFFSET(getStruct<T>, {0xB4, 36, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectStereoDelayPreset.SetSettings
	// void SetSettings(FSourceEffectStereoDelaySettings& InSettings);                                                          // [0x299c900] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SourceEffectWaveShaperSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSourceEffectWaveShaperSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     Amount                                                      OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/Synthesis.SourceEffectWaveShaperPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USourceEffectWaveShaperPreset : public USoundEffectSourcePreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FSourceEffectWaveShaperSettings)           Settings                                                    OFFSET(getStruct<T>, {0x98, 8, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SourceEffectWaveShaperPreset.SetSettings
	// void SetSettings(FSourceEffectWaveShaperSettings& InSettings);                                                           // [0x2999360] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectConvolutionReverbSettings
/// Size: 0x0030 (0x000000 - 0x000030)
class FSubmixEffectConvolutionReverbSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 48;

public:
	DMember(float)                                     NormalizationVolumeDb                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     WetVolumeDb                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DryVolumeDb                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0xC, 1, 0, 0})
	DMember(bool)                                      bMixInputChannelFormatToImpulseResponseFormat               OFFSET(get<bool>, {0xD, 1, 0, 0})
	DMember(bool)                                      bMixReverbOutputToOutputChannelFormat                       OFFSET(get<bool>, {0xE, 1, 0, 0})
	DMember(float)                                     SurroundRearChannelBleedDb                                  OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(bool)                                      bInvertRearChannelBleedPhase                                OFFSET(get<bool>, {0x14, 1, 0, 0})
	DMember(bool)                                      bSurroundRearChannelFlip                                    OFFSET(get<bool>, {0x15, 1, 0, 0})
	DMember(float)                                     SurroundRearChannelBleedAmount                              OFFSET(get<float>, {0x18, 4, 0, 0})
	CMember(class UAudioImpulseResponse*)              ImpulseResponse                                             OFFSET(get<T>, {0x20, 8, 0, 0})
	DMember(bool)                                      AllowHardwareAcceleration                                   OFFSET(get<bool>, {0x28, 1, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectConvolutionReverbPreset
/// Size: 0x0098 (0x000068 - 0x000100)
class USubmixEffectConvolutionReverbPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	CMember(class UAudioImpulseResponse*)              ImpulseResponse                                             OFFSET(get<T>, {0x68, 8, 0, 0})
	SMember(FSubmixEffectConvolutionReverbSettings)    Settings                                                    OFFSET(getStruct<T>, {0x70, 48, 0, 0})
	CMember(ESubmixEffectConvolutionReverbBlockSize)   BlockSize                                                   OFFSET(get<T>, {0xA0, 1, 0, 0})
	DMember(bool)                                      bEnableHardwareAcceleration                                 OFFSET(get<bool>, {0xA1, 1, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings
	// void SetSettings(FSubmixEffectConvolutionReverbSettings& InSettings);                                                    // [0x299f850] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse
	// void SetImpulseResponse(class UAudioImpulseResponse* InImpulseResponse);                                                 // [0x299f670] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SubmixEffectDelayStatics
/// Size: 0x0000 (0x000028 - 0x000028)
class USubmixEffectDelayStatics : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Synthesis.SubmixEffectDelayStatics.SetMaximumDelayLength
	// FSubmixEffectDelaySettings SetMaximumDelayLength(FSubmixEffectDelaySettings& DelaySettings, float MaximumDelayLength);   // [0x29a10d0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayStatics.SetInterpolationTime
	// FSubmixEffectDelaySettings SetInterpolationTime(FSubmixEffectDelaySettings& DelaySettings, float InterpolationTime);     // [0x29a0ef0] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayStatics.SetDelayLength
	// FSubmixEffectDelaySettings SetDelayLength(FSubmixEffectDelaySettings& DelaySettings, float DelayLength);                 // [0x29a0d10] Final|Native|Static|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectDelaySettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSubmixEffectDelaySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	DMember(float)                                     MaximumDelayLength                                          OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     InterpolationTime                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     DelayLength                                                 OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectDelayPreset
/// Size: 0x0050 (0x000068 - 0x0000B8)
class USubmixEffectDelayPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 184;

public:
	SMember(FSubmixEffectDelaySettings)                Settings                                                    OFFSET(getStruct<T>, {0x9C, 12, 0, 0})
	SMember(FSubmixEffectDelaySettings)                DynamicSettings                                             OFFSET(getStruct<T>, {0xA8, 12, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetSettings
	// void SetSettings(FSubmixEffectDelaySettings& InSettings);                                                                // [0x29a1780] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetInterpolationTime
	// void SetInterpolationTime(float Time);                                                                                   // [0x29a14c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDelay
	// void SetDelay(float Length);                                                                                             // [0x29a13a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.SetDefaultSettings
	// void SetDefaultSettings(FSubmixEffectDelaySettings& InSettings);                                                         // [0x29a1600] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds
	// float GetMaxDelayInMilliseconds();                                                                                       // [0x29a15e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Synthesis.SubmixEffectFilterSettings
/// Size: 0x000C (0x000000 - 0x00000C)
class FSubmixEffectFilterSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 12;

public:
	CMember(ESubmixFilterType)                         FilterType                                                  OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESubmixFilterAlgorithm)                    FilterAlgorithm                                             OFFSET(get<T>, {0x1, 1, 0, 0})
	DMember(float)                                     FilterFrequency                                             OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     OFFSET(get<float>, {0x8, 4, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectFilterPreset
/// Size: 0x0040 (0x000068 - 0x0000A8)
class USubmixEffectFilterPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 168;

public:
	SMember(FSubmixEffectFilterSettings)               Settings                                                    OFFSET(getStruct<T>, {0x9C, 12, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetSettings
	// void SetSettings(FSubmixEffectFilterSettings& InSettings);                                                               // [0x29a2f60] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterType
	// void SetFilterType(ESubmixFilterType InType);                                                                            // [0x29a2e50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQMod
	// void SetFilterQMod(float InQ);                                                                                           // [0x29a2900] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterQ
	// void SetFilterQ(float InQ);                                                                                              // [0x29a2a10] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod
	// void SetFilterCutoffFrequencyMod(float InFrequency);                                                                     // [0x29a2b20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency
	// void SetFilterCutoffFrequency(float InFrequency);                                                                        // [0x29a2c30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm
	// void SetFilterAlgorithm(ESubmixFilterAlgorithm InAlgorithm);                                                             // [0x29a2d40] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectFlexiverbSettings
/// Size: 0x0010 (0x000000 - 0x000010)
class FSubmixEffectFlexiverbSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	DMember(float)                                     PreDelay                                                    OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     DecayTime                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     RoomDampening                                               OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   Complexity                                                  OFFSET(get<int32_t>, {0xC, 4, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectFlexiverbPreset
/// Size: 0x0048 (0x000068 - 0x0000B0)
class USubmixEffectFlexiverbPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 176;

public:
	SMember(FSubmixEffectFlexiverbSettings)            Settings                                                    OFFSET(getStruct<T>, {0xA0, 16, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectFlexiverbPreset.SetSettings
	// void SetSettings(FSubmixEffectFlexiverbSettings& InSettings);                                                            // [0x29a3d40] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.DynamicsBandSettings
/// Size: 0x0020 (0x000000 - 0x000020)
class FDynamicsBandSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 32;

public:
	DMember(float)                                     CrossoverTopFrequency                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     AttackTimeMsec                                              OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     ReleaseTimeMsec                                             OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     ThresholdDb                                                 OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     Ratio                                                       OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     KneeBandwidthDb                                             OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(float)                                     InputGainDb                                                 OFFSET(get<float>, {0x18, 4, 0, 0})
	DMember(float)                                     OutputGainDb                                                OFFSET(get<float>, {0x1C, 4, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectMultibandCompressorSettings
/// Size: 0x0038 (0x000000 - 0x000038)
class FSubmixEffectMultibandCompressorSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 56;

public:
	CMember(ESubmixEffectDynamicsProcessorType)        DynamicsProcessorType                                       OFFSET(get<T>, {0x0, 1, 0, 0})
	CMember(ESubmixEffectDynamicsPeakMode)             PeakMode                                                    OFFSET(get<T>, {0x1, 1, 0, 0})
	CMember(ESubmixEffectDynamicsChannelLinkMode)      LinkMode                                                    OFFSET(get<T>, {0x2, 1, 0, 0})
	DMember(float)                                     LookAheadMsec                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(bool)                                      bAnalogMode                                                 OFFSET(get<bool>, {0x8, 1, 0, 0})
	DMember(bool)                                      bFourPole                                                   OFFSET(get<bool>, {0x9, 1, 0, 0})
	DMember(bool)                                      bBypass                                                     OFFSET(get<bool>, {0xA, 1, 0, 0})
	CMember(ESubmixEffectDynamicsKeySource)            KeySource                                                   OFFSET(get<T>, {0xB, 1, 0, 0})
	CMember(class UAudioBus*)                          ExternalAudioBus                                            OFFSET(get<T>, {0x10, 8, 0, 0})
	CMember(class USoundSubmix*)                       ExternalSubmix                                              OFFSET(get<T>, {0x18, 8, 0, 0})
	DMember(float)                                     KeyGainDb                                                   OFFSET(get<float>, {0x20, 4, 0, 0})
	DMember(bool)                                      bKeyAudition                                                OFFSET(get<bool>, {0x24, 1, 0, 0})
	CMember(TArray<FDynamicsBandSettings>)             Bands                                                       OFFSET(get<T>, {0x28, 16, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectMultibandCompressorPreset
/// Size: 0x0098 (0x000068 - 0x000100)
class USubmixEffectMultibandCompressorPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 256;

public:
	SMember(FSubmixEffectMultibandCompressorSettings)  Settings                                                    OFFSET(getStruct<T>, {0xC8, 56, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetSettings
	// void SetSettings(FSubmixEffectMultibandCompressorSettings& InSettings);                                                  // [0x29a4fe0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetExternalSubmix
	// void SetExternalSubmix(class USoundSubmix* Submix);                                                                      // [0x29a5180] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.SetAudioBus
	// void SetAudioBus(class UAudioBus* AudioBus);                                                                             // [0x29a52e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectMultibandCompressorPreset.ResetKey
	// void ResetKey();                                                                                                         // [0x29a5450] Final|Native|Public|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectStereoDelaySettings
/// Size: 0x0024 (0x000000 - 0x000024)
class FSubmixEffectStereoDelaySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 36;

public:
	CMember(EStereoDelaySourceEffect)                  DelayMode                                                   OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     DelayTimeMsec                                               OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Feedback                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     DelayRatio                                                  OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    OFFSET(get<float>, {0x14, 4, 0, 0})
	DMember(bool)                                      bFilterEnabled                                              OFFSET(get<bool>, {0x18, 1, 0, 0})
	CMember(EStereoDelayFiltertype)                    FilterType                                                  OFFSET(get<T>, {0x19, 1, 0, 0})
	DMember(float)                                     FilterFrequency                                             OFFSET(get<float>, {0x1C, 4, 0, 0})
	DMember(float)                                     FilterQ                                                     OFFSET(get<float>, {0x20, 4, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectStereoDelayPreset
/// Size: 0x0070 (0x000068 - 0x0000D8)
class USubmixEffectStereoDelayPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FSubmixEffectStereoDelaySettings)          Settings                                                    OFFSET(getStruct<T>, {0xB4, 36, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectStereoDelayPreset.SetSettings
	// void SetSettings(FSubmixEffectStereoDelaySettings& InSettings);                                                          // [0x299c900] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.SubmixEffectStereoToQuadSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSubmixEffectStereoToQuadSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(bool)                                      bFlipChannels                                               OFFSET(get<bool>, {0x0, 1, 0, 0})
	DMember(float)                                     RearChannelGain                                             OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectStereoToQuadPreset
/// Size: 0x0038 (0x000068 - 0x0000A0)
class USubmixEffectStereoToQuadPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 160;

public:
	SMember(FSubmixEffectStereoToQuadSettings)         Settings                                                    OFFSET(getStruct<T>, {0x98, 8, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectStereoToQuadPreset.SetSettings
	// void SetSettings(FSubmixEffectStereoToQuadSettings& InSettings);                                                         // [0x29a8080] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Struct /Script/Synthesis.TapDelayInfo
/// Size: 0x0018 (0x000000 - 0x000018)
class FTapDelayInfo : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	CMember(ETapLineMode)                              TapLineMode                                                 OFFSET(get<T>, {0x0, 1, 0, 0})
	DMember(float)                                     DelayLength                                                 OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Gain                                                        OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(int32_t)                                   OutputChannel                                               OFFSET(get<int32_t>, {0xC, 4, 0, 0})
	DMember(float)                                     PanInDegrees                                                OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(int32_t)                                   TapId                                                       OFFSET(get<int32_t>, {0x14, 4, 0, 0})
};

/// Struct /Script/Synthesis.SubmixEffectTapDelaySettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FSubmixEffectTapDelaySettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     MaximumDelayLength                                          OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     InterpolationTime                                           OFFSET(get<float>, {0x4, 4, 0, 0})
	CMember(TArray<FTapDelayInfo>)                     Taps                                                        OFFSET(get<T>, {0x8, 16, 0, 0})
};

/// Class /Script/Synthesis.SubmixEffectTapDelayPreset
/// Size: 0x0070 (0x000068 - 0x0000D8)
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 216;

public:
	SMember(FSubmixEffectTapDelaySettings)             Settings                                                    OFFSET(getStruct<T>, {0xA8, 24, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetTap
	// void SetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                      // [0x29a9220] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetSettings
	// void SetSettings(FSubmixEffectTapDelaySettings& InSettings);                                                             // [0x29a97e0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime
	// void SetInterpolationTime(float Time);                                                                                   // [0x29a8d70] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.RemoveTap
	// void RemoveTap(int32_t TapId);                                                                                           // [0x29a94d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTapIds
	// void GetTapIds(TArray<int32_t>& TapIds);                                                                                 // [0x29a8eb0] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTap
	// void GetTap(int32_t TapId, FTapDelayInfo& TapInfo);                                                                      // [0x29a9010] Final|Native|Public|HasOutParms|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds
	// float GetMaxDelayInMilliseconds();                                                                                       // [0x29a8e90] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.AddTap
	// void AddTap(int32_t& TapId);                                                                                             // [0x29a9620] Final|Native|Public|HasOutParms|BlueprintCallable 
};

/// Class /Script/Synthesis.GranularSynth
/// Size: 0x03C0 (0x0006E0 - 0x000AA0)
class UGranularSynth : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2720;

public:
	CMember(class USoundWave*)                         GranulatedSoundWave                                         OFFSET(get<T>, {0x6E0, 8, 0, 0})


	/// Functions
	// Function /Script/Synthesis.GranularSynth.SetSustainGain
	// void SetSustainGain(float SustainGain);                                                                                  // [0x29acaf0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetSoundWave
	// void SetSoundWave(class USoundWave* InSoundWave);                                                                        // [0x29acdb0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetScrubMode
	// void SetScrubMode(bool bScrubMode);                                                                                      // [0x29ab510] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetReleaseTimeMsec
	// void SetReleaseTimeMsec(float ReleaseTimeMsec);                                                                          // [0x29ac990] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlayheadTime
	// void SetPlayheadTime(float InPositionSec, float LerpTimeSec, EGranularSynthSeekType SeekType);                           // [0x29ab260] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetPlaybackSpeed
	// void SetPlaybackSpeed(float InPlayheadRate);                                                                             // [0x29abf50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainVolume
	// void SetGrainVolume(float BaseVolume, FVector2D VolumeRange);                                                            // [0x29abaf0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainsPerSecond
	// void SetGrainsPerSecond(float InGrainsPerSecond);                                                                        // [0x29ac370] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainProbability
	// void SetGrainProbability(float InGrainProbability);                                                                      // [0x29ac210] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPitch
	// void SetGrainPitch(float BasePitch, FVector2D PitchRange);                                                               // [0x29abd20] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainPan
	// void SetGrainPan(float BasePan, FVector2D PanRange);                                                                     // [0x29ab8c0] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainEnvelopeType
	// void SetGrainEnvelopeType(EGranularSynthEnvelopeType EnvelopeType);                                                      // [0x29ac0b0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetGrainDuration
	// void SetGrainDuration(float BaseDurationMsec, FVector2D DurationRange);                                                  // [0x29ab690] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetDecayTime
	// void SetDecayTime(float DecayTimeMsec);                                                                                  // [0x29acc50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.SetAttackTime
	// void SetAttackTime(float AttackTimeMsec);                                                                                // [0x29acc50] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOn
	// void NoteOn(float Note, int32_t Velocity, float Duration);                                                               // [0x29ac6f0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.NoteOff
	// void NoteOff(float Note, bool bKill);                                                                                    // [0x29ac4d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.GranularSynth.IsLoaded
	// bool IsLoaded();                                                                                                         // [0x29ab220] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetSampleDuration
	// float GetSampleDuration();                                                                                               // [0x29ab670] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.GranularSynth.GetCurrentPlayheadTime
	// float GetCurrentPlayheadTime();                                                                                          // [0x29ab240] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.MonoWaveTableSynthPreset
/// Size: 0x0148 (0x000028 - 0x000170)
class UMonoWaveTableSynthPreset : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 368;

public:
	SMember(FString)                                   PresetName                                                  OFFSET(getStruct<T>, {0x28, 16, 0, 0})
	DMember(bool)                                      bLockKeyframesToGridBool                                    OFFSET(get<bool>, {0x38, 1, 1, 0})
	DMember(int32_t)                                   LockKeyframesToGrid                                         OFFSET(get<int32_t>, {0x3C, 4, 0, 0})
	DMember(int32_t)                                   WaveTableResolution                                         OFFSET(get<int32_t>, {0x40, 4, 0, 0})
	CMember(TArray<FRuntimeFloatCurve>)                WaveTable                                                   OFFSET(get<T>, {0x48, 16, 0, 0})
	DMember(bool)                                      bNormalizeWaveTables                                        OFFSET(get<bool>, {0x58, 1, 1, 0})
};

/// Class /Script/Synthesis.SynthComponentMonoWaveTable
/// Size: 0x0750 (0x0006E0 - 0x000E30)
class USynthComponentMonoWaveTable : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 3632;

public:
	SMember(FMulticastInlineDelegate)                  OnTableAltered                                              OFFSET(getStruct<T>, {0x6E0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnNumTablesChanged                                          OFFSET(getStruct<T>, {0x6F0, 16, 0, 0})
	CMember(class UMonoWaveTableSynthPreset*)          CurrentPreset                                               OFFSET(get<T>, {0x700, 8, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition
	// void SetWaveTablePosition(float InPosition);                                                                             // [0x29b1310] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState
	// void SetSustainPedalState(bool InSustainPedalState);                                                                     // [0x29b17d0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoType
	// void SetPosLfoType(ESynthLFOType InLfoType);                                                                             // [0x29b0da0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency
	// void SetPosLfoFrequency(float InLfoFrequency);                                                                           // [0x29b1060] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth
	// void SetPosLfoDepth(float InLfoDepth);                                                                                   // [0x29b0f00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain
	// void SetPositionEnvelopeSustainGain(float InSustainGain);                                                                // [0x29af220] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime
	// void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec);                                                            // [0x29af0c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert
	// void SetPositionEnvelopeInvert(bool bInInvert);                                                                          // [0x29aef60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth
	// void SetPositionEnvelopeDepth(float InDepth);                                                                            // [0x29aeca0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime
	// void SetPositionEnvelopeDecayTime(float InDecayTimeMsec);                                                                // [0x29af380] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert
	// void SetPositionEnvelopeBiasInvert(bool bInBiasInvert);                                                                  // [0x29aee00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth
	// void SetPositionEnvelopeBiasDepth(float InDepth);                                                                        // [0x29aeb40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime
	// void SetPositionEnvelopeAttackTime(float InAttackTimeMsec);                                                              // [0x29af4e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance
	// void SetLowPassFilterResonance(float InNewQ);                                                                            // [0x29b0c40] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote
	// void SetFrequencyWithMidiNote(float InMidiNote);                                                                         // [0x29b1470] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend
	// void SetFrequencyPitchBend(float FrequencyOffsetCents);                                                                  // [0x29b1580] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFrequency
	// void SetFrequency(float FrequencyHz);                                                                                    // [0x29b16e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain
	// void SetFilterEnvelopeSustainGain(float InSustainGain);                                                                  // [0x29afd20] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime
	// void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec);                                                              // [0x29afbc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime
	// void SetFilterEnvelopenDecayTime(float InDecayTimeMsec);                                                                 // [0x29afe80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert
	// void SetFilterEnvelopeInvert(bool bInInvert);                                                                            // [0x29afa60] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth
	// void SetFilterEnvelopeDepth(float InDepth);                                                                              // [0x29af7a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert
	// void SetFilterEnvelopeBiasInvert(bool bInBiasInvert);                                                                    // [0x29af900] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth
	// void SetFilterEnvelopeBiasDepth(float InDepth);                                                                          // [0x29af640] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime
	// void SetFilterEnvelopeAttackTime(float InAttackTimeMsec);                                                                // [0x29affe0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveValue
	// bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue);                                           // [0x29ae810] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveTangent
	// bool SetCurveTangent(int32_t TableIndex, float InNewTangent);                                                            // [0x29ae460] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType
	// bool SetCurveInterpolationType(CurveInterpolationType InterpolationType, int32_t TableIndex);                            // [0x29ae5e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain
	// void SetAmpEnvelopeSustainGain(float InSustainGain);                                                                     // [0x29b0820] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime
	// void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec);                                                                 // [0x29b06c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert
	// void SetAmpEnvelopeInvert(bool bInInvert);                                                                               // [0x29b0560] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth
	// void SetAmpEnvelopeDepth(float InDepth);                                                                                 // [0x29b02a0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime
	// void SetAmpEnvelopeDecayTime(float InDecayTimeMsec);                                                                     // [0x29b0980] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert
	// void SetAmpEnvelopeBiasInvert(bool bInBiasInvert);                                                                       // [0x29b0400] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth
	// void SetAmpEnvelopeBiasDepth(float InDepth);                                                                             // [0x29b0140] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime
	// void SetAmpEnvelopeAttackTime(float InAttackTimeMsec);                                                                   // [0x29b0ae0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable
	// void RefreshWaveTable(int32_t Index);                                                                                    // [0x29b1220] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables
	// void RefreshAllWaveTables();                                                                                             // [0x29b11c0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOn
	// void NoteOn(float InMidiNote, float InVelocity);                                                                         // [0x29b1ac0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.NoteOff
	// void NoteOff(float InMidiNote);                                                                                          // [0x29b1930] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries
	// int32_t GetNumTableEntries();                                                                                            // [0x29b1d30] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex
	// int32_t GetMaxTableIndex();                                                                                              // [0x29aeb00] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable
	// TArray<float> GetKeyFrameValuesForTable(float TableIndex);                                                               // [0x29ae1f0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthComponentMonoWaveTable.GetCurveTangent
	// float GetCurveTangent(int32_t TableIndex);                                                                               // [0x29ae330] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthComponentToneGenerator
/// Size: 0x00E0 (0x0006E0 - 0x0007C0)
class USynthComponentToneGenerator : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1984;

public:
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x6E0, 4, 0, 0})
	DMember(float)                                     Volume                                                      OFFSET(get<float>, {0x6E4, 4, 0, 0})
	SMember(FRuntimeFloatCurve)                        DistanceAttenuationCurve                                    OFFSET(getStruct<T>, {0x6E8, 136, 0, 0})
	SMember(FVector2D)                                 DistanceRange                                               OFFSET(getStruct<T>, {0x770, 8, 0, 0})
	DMember(float)                                     AttenuationDbAtMaxRange                                     OFFSET(get<float>, {0x778, 4, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetVolume
	// void SetVolume(float InVolume);                                                                                          // [0x29b4630] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthComponentToneGenerator.SetFrequency
	// void SetFrequency(float InFrequency);                                                                                    // [0x29b4780] Final|Native|Public|BlueprintCallable 
};

/// Class /Script/Synthesis.SynthSamplePlayer
/// Size: 0x0130 (0x0006E0 - 0x000810)
class USynthSamplePlayer : public USynthComponent
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 2064;

public:
	CMember(class USoundWave*)                         SoundWave                                                   OFFSET(get<T>, {0x6E0, 8, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSampleLoaded                                              OFFSET(getStruct<T>, {0x6E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnSamplePlaybackProgress                                    OFFSET(getStruct<T>, {0x6F8, 16, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SynthSamplePlayer.SetSoundWave
	// void SetSoundWave(class USoundWave* InSoundWave);                                                                        // [0x29b5cc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubTimeWidth
	// void SetScrubTimeWidth(float InScrubTimeWidthSec);                                                                       // [0x29b5520] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetScrubMode
	// void SetScrubMode(bool bScrubMode);                                                                                      // [0x29b5680] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SetPitch
	// void SetPitch(float InPitch, float TimeSec);                                                                             // [0x29b5aa0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.SeekToTime
	// void SeekToTime(float TimeSec, ESamplePlayerSeekType SeekType, bool bWrap);                                              // [0x29b57e0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthSamplePlayer.IsLoaded
	// bool IsLoaded();                                                                                                         // [0x29b5480] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetSampleDuration
	// float GetSampleDuration();                                                                                               // [0x29b5500] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime
	// float GetCurrentPlaybackProgressTime();                                                                                  // [0x29b54e0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
	// Function /Script/Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent
	// float GetCurrentPlaybackProgressPercent();                                                                               // [0x29b54a0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Class /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary
/// Size: 0x0000 (0x000028 - 0x000028)
class USynthesisUtilitiesBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 40;

public:


	/// Functions
	// Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLogFrequency
	// float GetLogFrequency(float InLinearValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax);    // [0x29b6c40] Final|Native|Static|Private|BlueprintCallable 
	// Function /Script/Synthesis.SynthesisUtilitiesBlueprintFunctionLibrary.GetLinearFrequency
	// float GetLinearFrequency(float InLogFrequencyValue, float InDomainMin, float InDomainMax, float InRangeMin, float InRangeMax); // [0x29b67d0] Final|Native|Static|Private|BlueprintCallable 
};

/// Struct /Script/Synthesis.Synth2DSliderStyle
/// Size: 0x03D8 (0x000008 - 0x0003E0)
class FSynth2DSliderStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 992;

public:
	SMember(FSlateBrush)                               NormalThumbImage                                            OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               DisabledThumbImage                                          OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               NormalBarImage                                              OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               DisabledBarImage                                            OFFSET(getStruct<T>, {0x250, 192, 0, 0})
	SMember(FSlateBrush)                               BackgroundImage                                             OFFSET(getStruct<T>, {0x310, 192, 0, 0})
	DMember(float)                                     BarThickness                                                OFFSET(get<float>, {0x3D0, 4, 0, 0})
};

/// Class /Script/Synthesis.Synth2DSlider
/// Size: 0x04A0 (0x000130 - 0x0005D0)
class USynth2DSlider : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1488;

public:
	DMember(float)                                     ValueX                                                      OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     ValueY                                                      OFFSET(get<float>, {0x134, 4, 0, 0})
	SMember(FDelegateProperty)                         ValueXDelegate                                              OFFSET(getStruct<T>, {0x138, 16, 0, 0})
	SMember(FDelegateProperty)                         ValueYDelegate                                              OFFSET(getStruct<T>, {0x148, 16, 0, 0})
	SMember(FSynth2DSliderStyle)                       WidgetStyle                                                 OFFSET(getStruct<T>, {0x160, 992, 0, 0})
	SMember(FLinearColor)                              SliderHandleColor                                           OFFSET(getStruct<T>, {0x540, 16, 0, 0})
	DMember(bool)                                      IndentHandle                                                OFFSET(get<bool>, {0x550, 1, 0, 0})
	DMember(bool)                                      Locked                                                      OFFSET(get<bool>, {0x551, 1, 0, 0})
	DMember(float)                                     StepSize                                                    OFFSET(get<float>, {0x554, 4, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x558, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureBegin                                         OFFSET(getStruct<T>, {0x560, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureEnd                                           OFFSET(getStruct<T>, {0x570, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureBegin                                    OFFSET(getStruct<T>, {0x580, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureEnd                                      OFFSET(getStruct<T>, {0x590, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChangedX                                             OFFSET(getStruct<T>, {0x5A0, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChangedY                                             OFFSET(getStruct<T>, {0x5B0, 16, 0, 0})


	/// Functions
	// Function /Script/Synthesis.Synth2DSlider.SetValue
	// void SetValue(FVector2D InValue);                                                                                        // [0x29bbf40] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x29bbb80] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetSliderHandleColor
	// void SetSliderHandleColor(FLinearColor InValue);                                                                         // [0x29bba00] Final|Native|Public|HasDefaults|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x29bbcc0] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.SetIndentHandle
	// void SetIndentHandle(bool InValue);                                                                                      // [0x29bbe00] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.Synth2DSlider.GetValue
	// FVector2D GetValue();                                                                                                    // [0x29bc0f0] Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Synthesis.SynthKnobStyle
/// Size: 0x0318 (0x000008 - 0x000320)
class FSynthKnobStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 800;

public:
	SMember(FSlateBrush)                               LargeKnob                                                   OFFSET(getStruct<T>, {0x10, 192, 0, 0})
	SMember(FSlateBrush)                               LargeKnobOverlay                                            OFFSET(getStruct<T>, {0xD0, 192, 0, 0})
	SMember(FSlateBrush)                               MediumKnob                                                  OFFSET(getStruct<T>, {0x190, 192, 0, 0})
	SMember(FSlateBrush)                               MediumKnobOverlay                                           OFFSET(getStruct<T>, {0x250, 192, 0, 0})
	DMember(float)                                     MinValueAngle                                               OFFSET(get<float>, {0x310, 4, 0, 0})
	DMember(float)                                     MaxValueAngle                                               OFFSET(get<float>, {0x314, 4, 0, 0})
	CMember(ESynthKnobSize)                            KnobSize                                                    OFFSET(get<T>, {0x318, 1, 0, 0})
};

/// Class /Script/Synthesis.SynthKnob
/// Size: 0x03F0 (0x000130 - 0x000520)
class USynthKnob : public UWidget
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 1312;

public:
	DMember(float)                                     Value                                                       OFFSET(get<float>, {0x130, 4, 0, 0})
	DMember(float)                                     StepSize                                                    OFFSET(get<float>, {0x134, 4, 0, 0})
	DMember(float)                                     MouseSpeed                                                  OFFSET(get<float>, {0x138, 4, 0, 0})
	DMember(float)                                     MouseFineTuneSpeed                                          OFFSET(get<float>, {0x13C, 4, 0, 0})
	DMember(bool)                                      ShowTooltipInfo                                             OFFSET(get<bool>, {0x140, 1, 1, 0})
	SMember(FText)                                     ParameterName                                               OFFSET(getStruct<T>, {0x148, 24, 0, 0})
	SMember(FText)                                     ParameterUnits                                              OFFSET(getStruct<T>, {0x160, 24, 0, 0})
	SMember(FDelegateProperty)                         ValueDelegate                                               OFFSET(getStruct<T>, {0x178, 16, 0, 0})
	SMember(FSynthKnobStyle)                           WidgetStyle                                                 OFFSET(getStruct<T>, {0x190, 800, 0, 0})
	DMember(bool)                                      Locked                                                      OFFSET(get<bool>, {0x4B0, 1, 0, 0})
	DMember(bool)                                      IsFocusable                                                 OFFSET(get<bool>, {0x4B1, 1, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureBegin                                         OFFSET(getStruct<T>, {0x4B8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnMouseCaptureEnd                                           OFFSET(getStruct<T>, {0x4C8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureBegin                                    OFFSET(getStruct<T>, {0x4D8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnControllerCaptureEnd                                      OFFSET(getStruct<T>, {0x4E8, 16, 0, 0})
	SMember(FMulticastInlineDelegate)                  OnValueChanged                                              OFFSET(getStruct<T>, {0x4F8, 16, 0, 0})


	/// Functions
	// Function /Script/Synthesis.SynthKnob.SetValue
	// void SetValue(float InValue);                                                                                            // [0x29be280] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetStepSize
	// void SetStepSize(float InValue);                                                                                         // [0x29be040] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.SetLocked
	// void SetLocked(bool InValue);                                                                                            // [0x29be140] Final|Native|Public|BlueprintCallable 
	// Function /Script/Synthesis.SynthKnob.GetValue
	// float GetValue();                                                                                                        // [0x29be3c0] Final|Native|Public|BlueprintCallable|BlueprintPure|Const 
};

/// Struct /Script/Synthesis.PatchId
/// Size: 0x0004 (0x000000 - 0x000004)
class FPatchId : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 4;

public:
	DMember(int32_t)                                   ID                                                          OFFSET(get<int32_t>, {0x0, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectBitCrusherBaseSettings
/// Size: 0x0008 (0x000000 - 0x000008)
class FSourceEffectBitCrusherBaseSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 8;

public:
	DMember(float)                                     SampleRate                                                  OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     BitDepth                                                    OFFSET(get<float>, {0x4, 4, 0, 0})
};

/// Struct /Script/Synthesis.SourceEffectChorusBaseSettings
/// Size: 0x0018 (0x000000 - 0x000018)
class FSourceEffectChorusBaseSettings : public MDKBase
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 24;

public:
	DMember(float)                                     Depth                                                       OFFSET(get<float>, {0x0, 4, 0, 0})
	DMember(float)                                     Frequency                                                   OFFSET(get<float>, {0x4, 4, 0, 0})
	DMember(float)                                     Feedback                                                    OFFSET(get<float>, {0x8, 4, 0, 0})
	DMember(float)                                     WetLevel                                                    OFFSET(get<float>, {0xC, 4, 0, 0})
	DMember(float)                                     DryLevel                                                    OFFSET(get<float>, {0x10, 4, 0, 0})
	DMember(float)                                     Spread                                                      OFFSET(get<float>, {0x14, 4, 0, 0})
};

/// Struct /Script/Synthesis.SynthSlateStyle
/// Size: 0x0008 (0x000008 - 0x000010)
class FSynthSlateStyle : public FSlateWidgetStyle
{ 
	friend MDKHandler;
	friend MDKBase;
	static inline constexpr uint64_t __MDKClassSize = 16;

public:
	CMember(ESynthSlateSizeType)                       SizeType                                                    OFFSET(get<T>, {0x8, 1, 0, 0})
	CMember(ESynthSlateColorStyle)                     ColorStyle                                                  OFFSET(get<T>, {0x9, 1, 0, 0})
};

/// Enum /Script/Synthesis.ESynth1OscType
/// Size: 0x06
enum class ESynth1OscType : uint8_t
{
	ESynth1OscType__Sine                                                             = 0,
	ESynth1OscType__Saw                                                              = 1,
	ESynth1OscType__Triangle                                                         = 2,
	ESynth1OscType__Square                                                           = 3,
	ESynth1OscType__Noise                                                            = 4,
	ESynth1OscType__Count                                                            = 5
};

/// Enum /Script/Synthesis.ESynthLFOType
/// Size: 0x08
enum class ESynthLFOType : uint8_t
{
	ESynthLFOType__Sine                                                              = 0,
	ESynthLFOType__UpSaw                                                             = 1,
	ESynthLFOType__DownSaw                                                           = 2,
	ESynthLFOType__Square                                                            = 3,
	ESynthLFOType__Triangle                                                          = 4,
	ESynthLFOType__Exponential                                                       = 5,
	ESynthLFOType__RandomSampleHold                                                  = 6,
	ESynthLFOType__Count                                                             = 7
};

/// Enum /Script/Synthesis.ESynthLFOMode
/// Size: 0x04
enum class ESynthLFOMode : uint8_t
{
	ESynthLFOMode__Sync                                                              = 0,
	ESynthLFOMode__OneShot                                                           = 1,
	ESynthLFOMode__Free                                                              = 2,
	ESynthLFOMode__Count                                                             = 3
};

/// Enum /Script/Synthesis.ESynthLFOPatchType
/// Size: 0x10
enum class ESynthLFOPatchType : uint8_t
{
	ESynthLFOPatchType__PatchToNone                                                  = 0,
	ESynthLFOPatchType__PatchToGain                                                  = 1,
	ESynthLFOPatchType__PatchToOscFreq                                               = 2,
	ESynthLFOPatchType__PatchToFilterFreq                                            = 3,
	ESynthLFOPatchType__PatchToFilterQ                                               = 4,
	ESynthLFOPatchType__PatchToOscPulseWidth                                         = 5,
	ESynthLFOPatchType__PatchToOscPan                                                = 6,
	ESynthLFOPatchType__PatchLFO1ToLFO2Frequency                                     = 7,
	ESynthLFOPatchType__PatchLFO1ToLFO2Gain                                          = 8,
	ESynthLFOPatchType__Count                                                        = 9
};

/// Enum /Script/Synthesis.ESynthModEnvPatch
/// Size: 0x09
enum class ESynthModEnvPatch : uint8_t
{
	ESynthModEnvPatch__PatchToNone                                                   = 0,
	ESynthModEnvPatch__PatchToOscFreq                                                = 1,
	ESynthModEnvPatch__PatchToFilterFreq                                             = 2,
	ESynthModEnvPatch__PatchToFilterQ                                                = 3,
	ESynthModEnvPatch__PatchToLFO1Gain                                               = 4,
	ESynthModEnvPatch__PatchToLFO2Gain                                               = 5,
	ESynthModEnvPatch__PatchToLFO1Freq                                               = 6,
	ESynthModEnvPatch__PatchToLFO2Freq                                               = 7,
	ESynthModEnvPatch__Count                                                         = 8
};

/// Enum /Script/Synthesis.ESynthModEnvBiasPatch
/// Size: 0x09
enum class ESynthModEnvBiasPatch : uint8_t
{
	ESynthModEnvBiasPatch__PatchToNone                                               = 0,
	ESynthModEnvBiasPatch__PatchToOscFreq                                            = 1,
	ESynthModEnvBiasPatch__PatchToFilterFreq                                         = 2,
	ESynthModEnvBiasPatch__PatchToFilterQ                                            = 3,
	ESynthModEnvBiasPatch__PatchToLFO1Gain                                           = 4,
	ESynthModEnvBiasPatch__PatchToLFO2Gain                                           = 5,
	ESynthModEnvBiasPatch__PatchToLFO1Freq                                           = 6,
	ESynthModEnvBiasPatch__PatchToLFO2Freq                                           = 7,
	ESynthModEnvBiasPatch__Count                                                     = 8
};

/// Enum /Script/Synthesis.ESynthFilterType
/// Size: 0x05
enum class ESynthFilterType : uint8_t
{
	ESynthFilterType__LowPass                                                        = 0,
	ESynthFilterType__HighPass                                                       = 1,
	ESynthFilterType__BandPass                                                       = 2,
	ESynthFilterType__BandStop                                                       = 3,
	ESynthFilterType__Count                                                          = 4
};

/// Enum /Script/Synthesis.ESynthFilterAlgorithm
/// Size: 0x04
enum class ESynthFilterAlgorithm : uint8_t
{
	ESynthFilterAlgorithm__OnePole                                                   = 0,
	ESynthFilterAlgorithm__StateVariable                                             = 1,
	ESynthFilterAlgorithm__Ladder                                                    = 2,
	ESynthFilterAlgorithm__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthStereoDelayMode
/// Size: 0x04
enum class ESynthStereoDelayMode : uint8_t
{
	ESynthStereoDelayMode__Normal                                                    = 0,
	ESynthStereoDelayMode__Cross                                                     = 1,
	ESynthStereoDelayMode__PingPong                                                  = 2,
	ESynthStereoDelayMode__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynth1PatchSource
/// Size: 0x05
enum class ESynth1PatchSource : uint8_t
{
	ESynth1PatchSource__LFO1                                                         = 0,
	ESynth1PatchSource__LFO2                                                         = 1,
	ESynth1PatchSource__Envelope                                                     = 2,
	ESynth1PatchSource__BiasEnvelope                                                 = 3,
	ESynth1PatchSource__Count                                                        = 4
};

/// Enum /Script/Synthesis.ESynth1PatchDestination
/// Size: 0x15
enum class ESynth1PatchDestination : uint8_t
{
	ESynth1PatchDestination__Osc1Gain                                                = 0,
	ESynth1PatchDestination__Osc1Frequency                                           = 1,
	ESynth1PatchDestination__Osc1Pulsewidth                                          = 2,
	ESynth1PatchDestination__Osc2Gain                                                = 3,
	ESynth1PatchDestination__Osc2Frequency                                           = 4,
	ESynth1PatchDestination__Osc2Pulsewidth                                          = 5,
	ESynth1PatchDestination__FilterFrequency                                         = 6,
	ESynth1PatchDestination__FilterQ                                                 = 7,
	ESynth1PatchDestination__Gain                                                    = 8,
	ESynth1PatchDestination__Pan                                                     = 9,
	ESynth1PatchDestination__LFO1Frequency                                           = 10,
	ESynth1PatchDestination__LFO1Gain                                                = 11,
	ESynth1PatchDestination__LFO2Frequency                                           = 12,
	ESynth1PatchDestination__LFO2Gain                                                = 13,
	ESynth1PatchDestination__Count                                                   = 14
};

/// Enum /Script/Synthesis.ESubmixEffectConvolutionReverbBlockSize
/// Size: 0x03
enum class ESubmixEffectConvolutionReverbBlockSize : uint8_t
{
	ESubmixEffectConvolutionReverbBlockSize__BlockSize256                            = 0,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize512                            = 1,
	ESubmixEffectConvolutionReverbBlockSize__BlockSize1024                           = 2
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsProcessorType
/// Size: 0x06
enum class ESourceEffectDynamicsProcessorType : uint8_t
{
	ESourceEffectDynamicsProcessorType__Compressor                                   = 0,
	ESourceEffectDynamicsProcessorType__Limiter                                      = 1,
	ESourceEffectDynamicsProcessorType__Expander                                     = 2,
	ESourceEffectDynamicsProcessorType__Gate                                         = 3,
	ESourceEffectDynamicsProcessorType__UpwardsCompressor                            = 4,
	ESourceEffectDynamicsProcessorType__Count                                        = 5
};

/// Enum /Script/Synthesis.ESourceEffectDynamicsPeakMode
/// Size: 0x04
enum class ESourceEffectDynamicsPeakMode : uint8_t
{
	ESourceEffectDynamicsPeakMode__MeanSquared                                       = 0,
	ESourceEffectDynamicsPeakMode__RootMeanSquared                                   = 1,
	ESourceEffectDynamicsPeakMode__Peak                                              = 2,
	ESourceEffectDynamicsPeakMode__Count                                             = 3
};

/// Enum /Script/Synthesis.EEnvelopeFollowerPeakMode
/// Size: 0x04
enum class EEnvelopeFollowerPeakMode : uint8_t
{
	EEnvelopeFollowerPeakMode__MeanSquared                                           = 0,
	EEnvelopeFollowerPeakMode__RootMeanSquared                                       = 1,
	EEnvelopeFollowerPeakMode__Peak                                                  = 2,
	EEnvelopeFollowerPeakMode__Count                                                 = 3
};

/// Enum /Script/Synthesis.ESourceEffectFilterCircuit
/// Size: 0x04
enum class ESourceEffectFilterCircuit : uint8_t
{
	ESourceEffectFilterCircuit__OnePole                                              = 0,
	ESourceEffectFilterCircuit__StateVariable                                        = 1,
	ESourceEffectFilterCircuit__Ladder                                               = 2,
	ESourceEffectFilterCircuit__Count                                                = 3
};

/// Enum /Script/Synthesis.ESourceEffectFilterType
/// Size: 0x05
enum class ESourceEffectFilterType : uint8_t
{
	ESourceEffectFilterType__LowPass                                                 = 0,
	ESourceEffectFilterType__HighPass                                                = 1,
	ESourceEffectFilterType__BandPass                                                = 2,
	ESourceEffectFilterType__BandStop                                                = 3,
	ESourceEffectFilterType__Count                                                   = 4
};

/// Enum /Script/Synthesis.ESourceEffectFilterParam
/// Size: 0x03
enum class ESourceEffectFilterParam : uint8_t
{
	ESourceEffectFilterParam__FilterFrequency                                        = 0,
	ESourceEffectFilterParam__FilterResonance                                        = 1,
	ESourceEffectFilterParam__Count                                                  = 2
};

/// Enum /Script/Synthesis.EStereoChannelMode
/// Size: 0x03
enum class EStereoChannelMode : uint8_t
{
	EStereoChannelMode__MidSide                                                      = 0,
	EStereoChannelMode__LeftRight                                                    = 1,
	EStereoChannelMode__count                                                        = 2
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterModSource
/// Size: 0x06
enum class ESourceEffectMotionFilterModSource : uint8_t
{
	ESourceEffectMotionFilterModSource__DistanceFromListener                         = 0,
	ESourceEffectMotionFilterModSource__SpeedRelativeToListener                      = 1,
	ESourceEffectMotionFilterModSource__SpeedOfSourceEmitter                         = 2,
	ESourceEffectMotionFilterModSource__SpeedOfListener                              = 3,
	ESourceEffectMotionFilterModSource__SpeedOfAngleDelta                            = 4,
	ESourceEffectMotionFilterModSource__Count                                        = 5
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterModDestination
/// Size: 0x08
enum class ESourceEffectMotionFilterModDestination : uint8_t
{
	ESourceEffectMotionFilterModDestination__FilterACutoffFrequency                  = 0,
	ESourceEffectMotionFilterModDestination__FilterAResonance                        = 1,
	ESourceEffectMotionFilterModDestination__FilterAOutputVolumeDB                   = 2,
	ESourceEffectMotionFilterModDestination__FilterBCutoffFrequency                  = 3,
	ESourceEffectMotionFilterModDestination__FilterBResonance                        = 4,
	ESourceEffectMotionFilterModDestination__FilterBOutputVolumeDB                   = 5,
	ESourceEffectMotionFilterModDestination__FilterMix                               = 6,
	ESourceEffectMotionFilterModDestination__Count                                   = 7
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterTopology
/// Size: 0x03
enum class ESourceEffectMotionFilterTopology : uint8_t
{
	ESourceEffectMotionFilterTopology__SerialMode                                    = 0,
	ESourceEffectMotionFilterTopology__ParallelMode                                  = 1,
	ESourceEffectMotionFilterTopology__Count                                         = 2
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterCircuit
/// Size: 0x04
enum class ESourceEffectMotionFilterCircuit : uint8_t
{
	ESourceEffectMotionFilterCircuit__OnePole                                        = 0,
	ESourceEffectMotionFilterCircuit__StateVariable                                  = 1,
	ESourceEffectMotionFilterCircuit__Ladder                                         = 2,
	ESourceEffectMotionFilterCircuit__Count                                          = 3
};

/// Enum /Script/Synthesis.ESourceEffectMotionFilterType
/// Size: 0x05
enum class ESourceEffectMotionFilterType : uint8_t
{
	ESourceEffectMotionFilterType__LowPass                                           = 0,
	ESourceEffectMotionFilterType__HighPass                                          = 1,
	ESourceEffectMotionFilterType__BandPass                                          = 2,
	ESourceEffectMotionFilterType__BandStop                                          = 3,
	ESourceEffectMotionFilterType__Count                                             = 4
};

/// Enum /Script/Synthesis.EPhaserLFOType
/// Size: 0x08
enum class EPhaserLFOType : uint8_t
{
	EPhaserLFOType__Sine                                                             = 0,
	EPhaserLFOType__UpSaw                                                            = 1,
	EPhaserLFOType__DownSaw                                                          = 2,
	EPhaserLFOType__Square                                                           = 3,
	EPhaserLFOType__Triangle                                                         = 4,
	EPhaserLFOType__Exponential                                                      = 5,
	EPhaserLFOType__RandomSampleHold                                                 = 6,
	EPhaserLFOType__Count                                                            = 7
};

/// Enum /Script/Synthesis.ERingModulatorTypeSourceEffect
/// Size: 0x05
enum class ERingModulatorTypeSourceEffect : uint8_t
{
	ERingModulatorTypeSourceEffect__Sine                                             = 0,
	ERingModulatorTypeSourceEffect__Saw                                              = 1,
	ERingModulatorTypeSourceEffect__Triangle                                         = 2,
	ERingModulatorTypeSourceEffect__Square                                           = 3,
	ERingModulatorTypeSourceEffect__Count                                            = 4
};

/// Enum /Script/Synthesis.EStereoDelaySourceEffect
/// Size: 0x04
enum class EStereoDelaySourceEffect : uint8_t
{
	EStereoDelaySourceEffect__Normal                                                 = 0,
	EStereoDelaySourceEffect__Cross                                                  = 1,
	EStereoDelaySourceEffect__PingPong                                               = 2,
	EStereoDelaySourceEffect__Count                                                  = 3
};

/// Enum /Script/Synthesis.EStereoDelayFiltertype
/// Size: 0x05
enum class EStereoDelayFiltertype : uint8_t
{
	EStereoDelayFiltertype__Lowpass                                                  = 0,
	EStereoDelayFiltertype__Highpass                                                 = 1,
	EStereoDelayFiltertype__Bandpass                                                 = 2,
	EStereoDelayFiltertype__Notch                                                    = 3,
	EStereoDelayFiltertype__Count                                                    = 4
};

/// Enum /Script/Synthesis.ESubmixFilterType
/// Size: 0x05
enum class ESubmixFilterType : uint8_t
{
	ESubmixFilterType__LowPass                                                       = 0,
	ESubmixFilterType__HighPass                                                      = 1,
	ESubmixFilterType__BandPass                                                      = 2,
	ESubmixFilterType__BandStop                                                      = 3,
	ESubmixFilterType__Count                                                         = 4
};

/// Enum /Script/Synthesis.ESubmixFilterAlgorithm
/// Size: 0x04
enum class ESubmixFilterAlgorithm : uint8_t
{
	ESubmixFilterAlgorithm__OnePole                                                  = 0,
	ESubmixFilterAlgorithm__StateVariable                                            = 1,
	ESubmixFilterAlgorithm__Ladder                                                   = 2,
	ESubmixFilterAlgorithm__Count                                                    = 3
};

/// Enum /Script/Synthesis.ETapLineMode
/// Size: 0x03
enum class ETapLineMode : uint8_t
{
	ETapLineMode__SendToChannel                                                      = 0,
	ETapLineMode__Panning                                                            = 1,
	ETapLineMode__Disabled                                                           = 2
};

/// Enum /Script/Synthesis.EGranularSynthEnvelopeType
/// Size: 0x15
enum class EGranularSynthEnvelopeType : uint8_t
{
	EGranularSynthEnvelopeType__Rectangular                                          = 0,
	EGranularSynthEnvelopeType__Triangle                                             = 1,
	EGranularSynthEnvelopeType__DownwardTriangle                                     = 2,
	EGranularSynthEnvelopeType__UpwardTriangle                                       = 3,
	EGranularSynthEnvelopeType__ExponentialDecay                                     = 4,
	EGranularSynthEnvelopeType__ExponentialIncrease                                  = 5,
	EGranularSynthEnvelopeType__Gaussian                                             = 6,
	EGranularSynthEnvelopeType__Hanning                                              = 7,
	EGranularSynthEnvelopeType__Lanczos                                              = 8,
	EGranularSynthEnvelopeType__Cosine                                               = 9,
	EGranularSynthEnvelopeType__CosineSquared                                        = 10,
	EGranularSynthEnvelopeType__Welch                                                = 11,
	EGranularSynthEnvelopeType__Blackman                                             = 12,
	EGranularSynthEnvelopeType__BlackmanHarris                                       = 13,
	EGranularSynthEnvelopeType__Count                                                = 14
};

/// Enum /Script/Synthesis.EGranularSynthSeekType
/// Size: 0x03
enum class EGranularSynthSeekType : uint8_t
{
	EGranularSynthSeekType__FromBeginning                                            = 0,
	EGranularSynthSeekType__FromCurrentPosition                                      = 1,
	EGranularSynthSeekType__Count                                                    = 2
};

/// Enum /Script/Synthesis.CurveInterpolationType
/// Size: 0x03
enum class CurveInterpolationType : uint8_t
{
	CurveInterpolationType__AUTOINTERP                                               = 0,
	CurveInterpolationType__LINEAR                                                   = 1,
	CurveInterpolationType__CONSTANT                                                 = 2
};

/// Enum /Script/Synthesis.ESamplePlayerSeekType
/// Size: 0x04
enum class ESamplePlayerSeekType : uint8_t
{
	ESamplePlayerSeekType__FromBeginning                                             = 0,
	ESamplePlayerSeekType__FromCurrentPosition                                       = 1,
	ESamplePlayerSeekType__FromEnd                                                   = 2,
	ESamplePlayerSeekType__Count                                                     = 3
};

/// Enum /Script/Synthesis.ESynthKnobSize
/// Size: 0x03
enum class ESynthKnobSize : uint8_t
{
	ESynthKnobSize__Medium                                                           = 0,
	ESynthKnobSize__Large                                                            = 1,
	ESynthKnobSize__Count                                                            = 2
};

/// Enum /Script/Synthesis.ESynthSlateSizeType
/// Size: 0x04
enum class ESynthSlateSizeType : uint8_t
{
	ESynthSlateSizeType__Small                                                       = 0,
	ESynthSlateSizeType__Medium                                                      = 1,
	ESynthSlateSizeType__Large                                                       = 2,
	ESynthSlateSizeType__Count                                                       = 3
};

/// Enum /Script/Synthesis.ESynthSlateColorStyle
/// Size: 0x03
enum class ESynthSlateColorStyle : uint8_t
{
	ESynthSlateColorStyle__Light                                                     = 0,
	ESynthSlateColorStyle__Dark                                                      = 1,
	ESynthSlateColorStyle__Count                                                     = 2
};

