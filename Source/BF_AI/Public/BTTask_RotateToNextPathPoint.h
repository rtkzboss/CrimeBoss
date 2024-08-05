#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_RotateToNextPathPoint.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_RotateToNextPathPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccaptedAngle;
    
public:
    UBTTask_RotateToNextPathPoint();

};

