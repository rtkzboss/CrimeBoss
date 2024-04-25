#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_MoveToWaypointSequence.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_MoveToWaypointSequence : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_MoveToWaypointSequence();

};

