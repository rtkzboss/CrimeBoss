#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_WaitForAim.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_WaitForAim : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Timeout;
    
public:
    UBTTask_WaitForAim();

};

