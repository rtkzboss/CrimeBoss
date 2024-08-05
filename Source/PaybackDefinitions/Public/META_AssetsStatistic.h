#pragma once
#include "CoreMinimal.h"
#include "META_AssetsDataForStatistic.h"
#include "META_AssetsStatistic.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_AssetsStatistic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMETA_AssetsDataForStatistic> AssetsEarned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMETA_AssetsDataForStatistic> AssetsBought;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMETA_AssetsDataForStatistic> AssetsLost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FMETA_AssetsDataForStatistic> TotalAssets;
    
    FMETA_AssetsStatistic();
};

