#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterID.h"
#include "META_CharacterID.h"
#include "META_GenericCharacterSave.h"
#include "META_HeisterSaveData.h"
#include "META_RemovedCharacter.h"
#include "META_CrewManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_CrewManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_GenericCharacterSave> GenericCrewHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_HeisterSaveData> UniqueCrewHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_GenericCharacterSave> GenericHeistersOnJob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_HeisterSaveData> UniqueHeistersOnJob;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_RemovedCharacter> RemovedHeisters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FMETA_CharacterID, float> RecoveryInfoOfHeistersInjures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FMETA_CharacterID, int32> HeistersMoodResetCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FMETA_CharacterID, int32> CounterOfDeathPreventingUsage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSet<EIGS_CharacterID> RevengePool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSet<EIGS_CharacterID> UnlockedCharacters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 RemainAmountOfCompletedMissionsBeforeUnlock;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<FMETA_CharacterID, int32> RemainAmountOfDaysForHealingCharacter;
    
    FMETA_CrewManagerSaveData();
};

