#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_HasForcedWeapon.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_HasForcedWeapon : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_HasForcedWeapon();

};

