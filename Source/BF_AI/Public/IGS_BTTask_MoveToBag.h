#pragma once
#include "CoreMinimal.h"
#include "BTTask_MoveToWithRepath.h"
#include "IGS_BTTask_MoveToBag.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_MoveToBag : public UBTTask_MoveToWithRepath {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OptimalDistance;
    
public:
    UIGS_BTTask_MoveToBag();

};

