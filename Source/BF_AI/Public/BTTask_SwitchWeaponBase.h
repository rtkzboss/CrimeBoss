#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SwitchWeaponBase.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_AI_API UBTTask_SwitchWeaponBase : public UBTTaskNode {
    GENERATED_BODY()
public:
    UBTTask_SwitchWeaponBase();

};

