#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponBashAttackDefinition.h"
#include "IGS_WieldableBaseData.h"
#include "IGS_MeleeWeaponData.generated.h"

class UAkSwitchValue;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_MeleeWeaponData : public FIGS_WieldableBaseData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkSwitchValue> WwiseWeaponName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_WeaponBashAttackDefinition> AttackDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponBashAttackDefinition AIAttackDefinition;
    
    FIGS_MeleeWeaponData();
};

