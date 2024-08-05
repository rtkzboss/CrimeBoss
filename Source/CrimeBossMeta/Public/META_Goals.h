#pragma once
#include "CoreMinimal.h"
#include "META_Goals.generated.h"

class UMETA_BaseGoal;

USTRUCT(BlueprintType)
struct FMETA_Goals {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_BaseGoal*> Goals;
    
    CRIMEBOSSMETA_API FMETA_Goals();
};

