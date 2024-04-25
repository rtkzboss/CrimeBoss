#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsOverlapingWithPlayer.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_IsOverlapingWithPlayer : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsOverlapingWithPlayer();

};

