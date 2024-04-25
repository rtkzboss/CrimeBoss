#pragma once
#include "CoreMinimal.h"
#include "META_RandEventRewardRuntimeData.h"
#include "META_RandEventRewardRuntimeDataStorage.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_RandEventRewardRuntimeDataStorage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_RandEventRewardRuntimeData> Rewards;
    
    FMETA_RandEventRewardRuntimeDataStorage();
};

