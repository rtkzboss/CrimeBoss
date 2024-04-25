#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemType.h"
#include "EIGS_WeaponAttackType.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_WeaponSectionWidget.generated.h"

class AIGS_WieldableBase;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WeaponSectionWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ItemType CurrentWieldableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_WieldableBase* ActiveWieldable;
    
public:
    UIGS_WeaponSectionWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponShooterChanged(EIGS_WeaponAttackType AttackType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponMagazineAmmoChanged(int32 CurrentWieldableMagazineAmmo, int32 CurrentWieldableMaxMagazineAmmo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WeaponAmmoReserveChanged(int32 CurrentWieldableAmmoReserve);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetHidden();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponInspected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnActiveWieldableChanged(EIGS_ItemType inType);
    
};

