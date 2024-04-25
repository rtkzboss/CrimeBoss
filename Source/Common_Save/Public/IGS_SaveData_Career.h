#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_AchievementSaveData.h"
#include "IGS_SaveData_Version.h"
#include "META_BlackmarketManagerSaveData.h"
#include "META_BossLevelManagerSaveData.h"
#include "META_CareerEndSaveData.h"
#include "META_CityMapManagerSaveData.h"
#include "META_CrewManagerSaveData.h"
#include "META_DailyManagerSaveData.h"
#include "META_EventManagerSaveData.h"
#include "META_FinanceManagerSaveData.h"
#include "META_GoalManagerSaveData.h"
#include "META_HeatManagerSaveData.h"
#include "META_JobManagerSaveData.h"
#include "META_MoneyMakingOpportunitiesSaveData.h"
#include "META_PlanningBoardManagerSaveData.h"
#include "META_RandomEventManagerSaveData.h"
#include "META_StashManagerSaveData.h"
#include "META_StatisticsManagerSaveData.h"
#include "META_WarManagerSaveData.h"
#include "IGS_SaveData_Career.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_SaveData_Career {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString SaveSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bIsFilled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString CampaignVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_BlackmarketManagerSaveData BlackmarketManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_CrewManagerSaveData CrewManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_DailyManagerSaveData DailyManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_StashManagerSaveData StashManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_EventManagerSaveData EventManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_GoalManagerSaveData GoalManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_JobManagerSaveData JobManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_RandomEventManagerSaveData RandomEventManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_CityMapManagerSaveData CityMapManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_WarManagerSaveData WarManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_FinanceManagerSaveData FinanceManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_MoneyMakingOpportunitiesSaveData MoneyMakingOpportunitiesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_HeatManagerSaveData HeatManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_BossLevelManagerSaveData BossLevelManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_StatisticsManagerSaveData StatisticsManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_PlanningBoardManagerSaveData PlanningBoardManagerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FIGS_AchievementSaveData> Achievements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FMETA_CareerEndSaveData CareerEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FIGS_SaveData_Version SaveDataVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> StartingEntitlementTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FString MetaPersistentId;
    
    FIGS_SaveData_Career();
};

