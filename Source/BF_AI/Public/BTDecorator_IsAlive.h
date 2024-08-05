#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsAlive.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_IsAlive : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsAlive();

};

