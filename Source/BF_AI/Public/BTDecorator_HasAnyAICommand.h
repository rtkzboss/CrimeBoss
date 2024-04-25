#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_HasAnyAICommand.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_HasAnyAICommand : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_HasAnyAICommand();

};

