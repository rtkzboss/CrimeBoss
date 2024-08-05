#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "IGS_AIMeleeDef.h"
#include "IGS_AIMeleeWeaponDef.generated.h"

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AIMeleeWeaponDef : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIMeleeDef Weapon;
    
    UIGS_AIMeleeWeaponDef();

};

