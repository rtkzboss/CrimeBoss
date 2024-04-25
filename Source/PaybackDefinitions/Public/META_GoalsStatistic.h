#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "META_GoalsStatistic.generated.h"

class UMETA_BaseGoal;

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GoalsStatistic {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMETA_BaseGoal>> FinishedGoalsID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMETA_BaseGoal>> FailedGoalsID;
    
    FMETA_GoalsStatistic();
};

