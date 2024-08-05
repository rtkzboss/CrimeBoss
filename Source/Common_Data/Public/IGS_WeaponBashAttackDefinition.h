#pragma once
#include "CoreMinimal.h"
#include "EIGS_MeleeAttackType.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponBashAttackDefinition.generated.h"

class UIGS_DamageTypeBase;
class UIGS_ImpactTypeObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponBashAttackDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_MeleeAttackType AttackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_DamageTypeBase> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ImpactTypeObject> ImpactType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BaseDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TraceRadius;
    
    FIGS_WeaponBashAttackDefinition();
};

