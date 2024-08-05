#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_AIAmmoWeaponDef.h"
#include "IGS_AISecondaryWeaponDef.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AISecondaryWeaponDef : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIAmmoWeaponDef Weapon;
    
    UIGS_AISecondaryWeaponDef();

};

