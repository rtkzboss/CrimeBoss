#pragma once
#include "CoreMinimal.h"
#include "META_StatisticNoteSaveData.h"
#include "IGS_Quick_StatisticsManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_Quick_StatisticsManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<int32, FMETA_StatisticNoteSaveData> Statistic;
    
    FIGS_Quick_StatisticsManagerSaveData();
};

