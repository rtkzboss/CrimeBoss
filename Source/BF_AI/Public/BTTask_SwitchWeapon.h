#pragma once
#include "CoreMinimal.h"
#include "EIGS_SwitchWeaponTask_WeaponType.h"
#include "BTTask_SwitchWeaponBase.h"
#include "BTTask_SwitchWeapon.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTTask_SwitchWeapon : public UBTTask_SwitchWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_SwitchWeaponTask_WeaponType WeaponTypeToSwitchTo;
    
public:
    UBTTask_SwitchWeapon();

};

