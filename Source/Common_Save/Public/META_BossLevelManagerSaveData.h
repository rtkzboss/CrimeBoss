#pragma once
#include "CoreMinimal.h"
#include "META_BossLevelManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_BossLevelManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 AmountOfPrimaryWeaponsIssued;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 AmountOfAdditionalEquipmentIssued;
    
    FMETA_BossLevelManagerSaveData();
};

