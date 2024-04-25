#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_CanGrenade.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_CanGrenade : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_CanGrenade();

};

