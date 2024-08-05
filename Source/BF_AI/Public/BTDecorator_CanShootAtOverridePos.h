#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_CanShootAtOverridePos.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_CanShootAtOverridePos : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_CanShootAtOverridePos();

};

