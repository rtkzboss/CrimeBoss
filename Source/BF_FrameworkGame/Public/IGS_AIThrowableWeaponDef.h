#pragma once
#include "CoreMinimal.h"
#include "IGS_AIThrowableWeaponDef.generated.h"

class UIGS_ThrowableInventoryObject;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIThrowableWeaponDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UIGS_ThrowableInventoryObject> ThrowableWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Chance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NormalizedChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThrowableCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GlobalCooldown;
    
    FIGS_AIThrowableWeaponDef();
};

