#pragma once
#include "CoreMinimal.h"
#include "META_FinishedGoal.h"
#include "META_FinishedGoals.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_FinishedGoals {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_FinishedGoal> Goals;
    
    FMETA_FinishedGoals();
};

