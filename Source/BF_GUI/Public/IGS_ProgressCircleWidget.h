#pragma once
#include "CoreMinimal.h"
#include "EIGS_WieldableSlot.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_ProgressCircleWidget.generated.h"

class AIGS_PlayerCharacter;
class AIGS_PlayerControllerRoot;
class AIGS_WeaponBase;
class AIGS_WieldableBase;
class UIGS_InteractiveComponent;
class UIGS_ReloaderBase;
class UIGS_WieldableInventoryObjectBase;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_ProgressCircleWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerCharacter* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerControllerRoot* PlayerController;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ReloadDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_WeaponBase* m_ActiveWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ReloaderBase* m_ActiveWeaponReloader;
    
public:
    UIGS_ProgressCircleWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnReloadCircle(bool inEnabled, float inDuration);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReviveStateChanged(bool bState, float inTotalTime);
    
    UFUNCTION(BlueprintCallable)
    void OnInteractionFinished(bool inResult, UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveWieldableChangedOnPlayer(EIGS_WieldableSlot inSlotType, AIGS_WieldableBase* inWieldableBase, UIGS_WieldableInventoryObjectBase* inInventoryObject);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InterruptReloadCircle();
    
    UFUNCTION(BlueprintCallable)
    void HandleProgressCircle(bool inEnabled, float inDuration);
    
};

