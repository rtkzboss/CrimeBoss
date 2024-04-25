#pragma once
#include "CoreMinimal.h"
#include "EIGS_Speed.h"
#include "IGS_WeaponAccuracyInfoHolder.h"
#include "EIGS_ShowCrosshairSetting.h"
#include "EIGS_WeaponAttackType.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_CrosshairSectionWidget.generated.h"

class AIGS_WieldableBase;
class UIGS_CharacterWieldablesHolderComponent;
class UIGS_PlayerCharacterMovementComponent;
class UIGS_WieldableInventoryObjectBase;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_CrosshairSectionWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerCharacterMovementComponent* PlayerMovementComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CharacterWieldablesHolderComponent* PlayerWieldableHolder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_WieldableBase* ActiveWieldableActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_WieldableInventoryObjectBase* ActiveWieldableObject;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ShowCrosshairSetting ShowCrosshairSetting;
    
public:
    UIGS_CrosshairSectionWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshCrosshairType();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeaponAccuracyChangedEvent(const FIGS_WeaponAccuracyInfoHolder& inAccuracy);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowCrosshairSettingChangedEvent(EIGS_ShowCrosshairSetting inShowCrosshairSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShooterChangedEvent(EIGS_WeaponAttackType inShooter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReloadingChangedEvent(bool inIsReloading);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMovementSpeedChangedEvent(EIGS_Speed inNewSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameplayTagsChangedEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAimingChangedEvent(bool inIsAiming);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAimingAtFriendly() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAimingAtEnemy() const;
    
};

