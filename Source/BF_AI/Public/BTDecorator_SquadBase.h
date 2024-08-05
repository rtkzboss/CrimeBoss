#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_SquadBase.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API UBTDecorator_SquadBase : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_SquadBase();

};

