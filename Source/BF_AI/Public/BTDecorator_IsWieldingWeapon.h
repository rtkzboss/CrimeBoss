#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_SwitchWeaponTask_WeaponType.h"
#include "BTDecorator_IsWieldingWeapon.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_IsWieldingWeapon : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_SwitchWeaponTask_WeaponType WeaponType;
    
public:
    UBTDecorator_IsWieldingWeapon();

};

