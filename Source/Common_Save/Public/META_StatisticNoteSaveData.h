#pragma once
#include "CoreMinimal.h"
#include "META_AssetsStatistic.h"
#include "META_BossStatistic.h"
#include "META_CampaignStatistic.h"
#include "META_CrewStatistic.h"
#include "META_FPSStatistic.h"
#include "META_GoalsStatistic.h"
#include "META_MissionsStatistic.h"
#include "META_StoryStatistic.h"
#include "META_TurfWarStatistic.h"
#include "META_EconomySaveStatistic.h"
#include "META_StatisticNoteSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_StatisticNoteSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_CrewStatistic CrewStatistic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_MissionsStatistic MissionsStatistic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_GoalsStatistic GoalsStatistic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_CampaignStatistic CampaignStatistic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_FPSStatistic FPSStatistic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_StoryStatistic StoryStatistic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_EconomySaveStatistic EconomyStatistic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_BossStatistic BossStatistic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_TurfWarStatistic TurfWarStatistic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_AssetsStatistic AssetsStatistic;
    
    FMETA_StatisticNoteSaveData();
};

