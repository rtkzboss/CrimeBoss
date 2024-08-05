#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "IGS_BTTask_SetupDynamicSubtrees.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_SetupDynamicSubtrees : public UBTTaskNode {
    GENERATED_BODY()
public:
    UIGS_BTTask_SetupDynamicSubtrees();

};

