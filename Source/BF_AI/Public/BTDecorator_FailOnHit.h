#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_FailOnHit.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_FailOnHit : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_FailOnHit();

};

