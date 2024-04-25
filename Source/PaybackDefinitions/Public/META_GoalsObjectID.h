#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "META_GoalsObjectID.generated.h"

class UMETA_BaseGoal;

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_GoalsObjectID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UMETA_BaseGoal>> Goals;
    
    FMETA_GoalsObjectID();
};

