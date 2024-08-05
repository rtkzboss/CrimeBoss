#pragma once
#include "CoreMinimal.h"
#include "EMETA_GoalStatus.h"
#include "META_ActionCardGraph.h"
#include "META_FinishedInnerTaskInfoSave.h"
#include "META_TasksInfoSave.h"
#include "Templates/SubclassOf.h"
#include "META_GoalSave.generated.h"

class UMETA_BaseGoal;
class UMETA_BaseStoryGraphManager;
class UMETA_MissionID;

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_GoalSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_BaseGoal> GoalID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_GoalStatus Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMETA_MissionID>> Missions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FMETA_TasksInfoSave> GraphsTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_FinishedInnerTaskInfoSave> FinishedInnerTasks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_ActionCardGraph> ActionCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<int32> VisitedGraphNodeIDs;
    
    FMETA_GoalSave();
};

