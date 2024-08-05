#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_IsAlertedByCharacter.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_IsAlertedByCharacter : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_IsAlertedByCharacter();

};

