#pragma once
#include "CoreMinimal.h"
#include "META_StatisticNoteSaveData.h"
#include "META_StatisticsManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_StatisticsManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<int32, FMETA_StatisticNoteSaveData> Statistic;
    
    FMETA_StatisticsManagerSaveData();
};

