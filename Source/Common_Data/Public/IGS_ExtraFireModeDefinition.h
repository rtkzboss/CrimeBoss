#pragma once
#include "CoreMinimal.h"
#include "IGS_RecoilDefinition.h"
#include "IGS_WeaponAccuracyDefinition.h"
#include "IGS_WeaponAdaptiveTriggerDefinitions.h"
#include "IGS_WeaponAmmoDefinition.h"
#include "IGS_WeaponAnimationDefinitions.h"
#include "IGS_WeaponAttackDefinition.h"
#include "IGS_WeaponOffenceDefinitions.h"
#include "IGS_ExtraFireModeDefinition.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ExtraFireModeDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponAttackDefinition Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponAccuracyDefinition Accuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_RecoilDefinition Recoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponAmmoDefinition Ammo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponAnimationDefinitions Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponOffenceDefinitions Offences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponAdaptiveTriggerDefinitions AdaptiveTriggers;
    
    FIGS_ExtraFireModeDefinition();
};

