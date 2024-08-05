#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_WaitForMoveDesync.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_WaitForMoveDesync : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_WaitForMoveDesync();

};

