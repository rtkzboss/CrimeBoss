#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponAttackType.h"
#include "IGS_ArmsAnimtionDefinition.h"
#include "IGS_WeaponAnimtionDefinition.h"
#include "IGS_AttackAnimtionDefinition.generated.h"

USTRUCT(BlueprintType)
struct BF_ANIMATIONS_API FIGS_AttackAnimtionDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_WeaponAttackType AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ArmsAnimtionDefinition ArmsAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponAnimtionDefinition WeaponAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttackPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadPlayRate;
    
    FIGS_AttackAnimtionDefinition();
};

