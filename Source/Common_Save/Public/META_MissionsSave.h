#pragma once
#include "CoreMinimal.h"
#include "META_AmbushMissionSave.h"
#include "META_BaseMissionSave.h"
#include "META_MoneyMakingMissionSave.h"
#include "META_StoryMissionSave.h"
#include "META_TradeDealSellMissionSave.h"
#include "META_TradeMissionSave.h"
#include "META_TurfWarMissionSave.h"
#include "Templates/SubclassOf.h"
#include "META_MissionsSave.generated.h"

class UMETA_MissionID;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_MissionsSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_MoneyMakingMissionSave> MoneyMakingMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_AmbushMissionSave> AmbushMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_StoryMissionSave> StoryMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_TradeMissionSave> TradeMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_TradeDealSellMissionSave> TradeDealSellMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_BaseMissionSave> CinematicMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_TurfWarMissionSave> TurfWarMissions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMETA_MissionID>> OtherMissions;
    
    FMETA_MissionsSave();
};

