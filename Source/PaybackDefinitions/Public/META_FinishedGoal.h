#pragma once
#include "CoreMinimal.h"
#include "EMETA_GoalStatus.h"
#include "META_ActionCardGraph.h"
#include "Templates/SubclassOf.h"
#include "META_FinishedGoal.generated.h"

class UMETA_BaseGoal;

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_FinishedGoal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UMETA_BaseGoal> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_GoalStatus GoalResult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_ActionCardGraph> ActionCards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SelectedActionCardNumber;
    
    FMETA_FinishedGoal();
};

