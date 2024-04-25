#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_RotateToSpecificRotation.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_RotateToSpecificRotation : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AcceptedAngle;
    
public:
    UBTTask_RotateToSpecificRotation();

};

