
/********************************************************
*                                                       *
*   Package generated using UEDumper by Spuckwaffel.    *
*                                                       *
********************************************************/

/// dependency: BasicType
/// dependency: CoreUObject

/// Class /Script/M1PSO.M1PSOCheat
/// Size: 0x0128 (0x000028 - 0x000150)
class UM1PSOCheat : public UObject
{ 
	friend MDKHandler;
	static inline constexpr uint64_t __MDKClassSize = 336;

public:
	CMember(TArray<FAssetData>)                        NiagaraSystemData                                           OFFSET(get<T>, {0x28, 16, 0, 0})
	CMember(TArray<FAssetData>)                        LevelSequenceData                                           OFFSET(get<T>, {0x38, 16, 0, 0})
	CMember(TArray<class UNiagaraComponent*>)          NiagaraComponentArray                                       OFFSET(get<T>, {0x48, 16, 0, 0})


	/// Functions
	// Function /Script/M1PSO.M1PSOCheat.PSOPlaySequence
	// void PSOPlaySequence();                                                                                                  // [0x6639a60] Final|Native|Private 
};

