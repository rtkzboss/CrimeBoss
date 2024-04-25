#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_AssetsDataForStatistic.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_AssetsDataForStatistic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> AssetsTags;
    
    FMETA_AssetsDataForStatistic();
};

