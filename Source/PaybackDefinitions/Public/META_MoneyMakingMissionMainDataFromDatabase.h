#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_RespectLvl.h"
#include "Templates/SubclassOf.h"
#include "META_MoneyMakingMissionMainDataFromDatabase.generated.h"

class UMETA_MissionID;

USTRUCT(BlueprintType)
struct FMETA_MoneyMakingMissionMainDataFromDatabase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_MissionID> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag UnlockTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_RespectLvl UnlockRespectLvl;
    
    PAYBACKDEFINITIONS_API FMETA_MoneyMakingMissionMainDataFromDatabase();
};

