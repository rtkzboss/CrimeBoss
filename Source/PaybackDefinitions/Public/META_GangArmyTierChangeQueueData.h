#pragma once
#include "CoreMinimal.h"
#include "META_GangArmyTierChangeData.h"
#include "META_GangArmyTierChangeQueueData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GangArmyTierChangeQueueData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_GangArmyTierChangeData> GangArmyTierChangeData;
    
    FMETA_GangArmyTierChangeQueueData();
};

