#pragma once
#include "CoreMinimal.h"
#include "META_HeisterPerksEconomyData.h"
#include "META_HeisterPerksDataByLevel.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_HeisterPerksDataByLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FMETA_HeisterPerksEconomyData> Data;
    
    FMETA_HeisterPerksDataByLevel();
};

