#pragma once
#include "CoreMinimal.h"
#include "META_FinishedGoal.h"
#include "META_GoalsObjectIDCounter.h"
#include "META_HiddenGoalsSaveInfo.h"
#include "META_GoalSave.h"
#include "META_MoneyMakingGoalSave.h"
#include "Templates/SubclassOf.h"
#include "META_GoalManagerSaveData.generated.h"

class UMETA_BaseGoal;
class UMETA_HiddenGoalID;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_GoalManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_GoalSave> StoryGoalsSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_MoneyMakingGoalSave> MoneyMakingGoalsSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMETA_BaseGoal>> GoalsPools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMETA_BaseGoal>> BacklogGoalsPools;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_FinishedGoal> FinishedGoals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TArray<FMETA_GoalsObjectIDCounter> GoalsRepeatCounters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UMETA_HiddenGoalID>, FMETA_HiddenGoalsSaveInfo> HiddenGoalsData;
    
    FMETA_GoalManagerSaveData();
};

