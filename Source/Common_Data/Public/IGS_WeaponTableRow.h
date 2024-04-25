#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "IGS_AIWeaponDefinitions.h"
#include "IGS_DefaultWeaponModData.h"
#include "IGS_RecoilDefinition.h"
#include "IGS_WeaponAccuracyDefinition.h"
#include "IGS_WeaponAdaptiveTriggerDefinitions.h"
#include "IGS_WeaponAmmoDefinition.h"
#include "IGS_WeaponAnimationDefinitions.h"
#include "IGS_WeaponAttackDefinition.h"
#include "IGS_WeaponBashAttackDefinition.h"
#include "IGS_WeaponOffenceDefinitions.h"
#include "IGS_WieldableBaseData.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponTableRow.generated.h"

class UAkSwitchValue;
class UIGS_WeaponClassSettingsDataAsset;
class UIGS_WeaponInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WeaponInventoryObject> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_WeaponClassSettingsDataAsset* ClassDataOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponAttackDefinition Attack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponAccuracyDefinition Accuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_RecoilDefinition Recoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponAmmoDefinition Ammo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponBashAttackDefinition Bash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponAnimationDefinitions Animations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponOffenceDefinitions Offences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponAdaptiveTriggerDefinitions AdaptiveTriggers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WieldableBaseData WieldableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DefaultWeaponModData DefaultModData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIWeaponDefinitions AIData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkSwitchValue> WeaponNameAkSwitch;
    
    FIGS_WeaponTableRow();
};

