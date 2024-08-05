#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_WaitForFirstSeenFireCooldown.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_WaitForFirstSeenFireCooldown : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_WaitForFirstSeenFireCooldown();

};

