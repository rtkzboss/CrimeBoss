#pragma once
#include "CoreMinimal.h"
#include "EIGS_SpecialActionType.h"
#include "Animation/AnimInstance.h"
#include "IGS_GameEventsAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class BF_ANIMATIONS_API UIGS_GameEventsAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UIGS_GameEventsAnimInstance();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZiptieStarted_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ZiptieEnd_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ThrowAwayLoot_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StunnedStart_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StunnedEnd_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpecialAction_Event(EIGS_SpecialActionType inSpecialAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Shoot_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Reload_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RappelLeaveStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RappelGrabStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PushCargo_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PickupInteraction_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDoor_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHolsterChange_Event(bool inIsHolstering);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LootCollectionStart_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LootCollectionEnd_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LootBagPickupInteraction_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlashedStart_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FlashedEnd_Event();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDoor_Event();
    
};

