#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BTDecorator_EnoughMagazinesFiredForWeaponSwitch.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_EnoughMagazinesFiredForWeaponSwitch : public UBTDecorator {
    GENERATED_BODY()
public:
    UBTDecorator_EnoughMagazinesFiredForWeaponSwitch();

};

