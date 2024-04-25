#pragma once
#include "CoreMinimal.h"
#include "EIGS_CharacterID.h"
#include "IGS_UnlockedCharacterSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_UnlockedCharacterSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    EIGS_CharacterID CharacterID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bCharacterMaxLeveled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint8 bCharacterQuestlineCompleted: 1;
    
    FIGS_UnlockedCharacterSaveData();
};

