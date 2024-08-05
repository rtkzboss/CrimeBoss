#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "EIGS_BagType.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_HealthSectionWidget.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PlayerStateFramework;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_HealthSectionWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* PawnToMonitor;
    
    UIGS_HealthSectionWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetShowRevives(bool inShow);
    
    UFUNCTION(BlueprintCallable)
    void SetPawnToMonitor(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestHide();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerStateReadyEvent(AIGS_PlayerStateFramework* inPS);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerSlotsChanged();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewMonitoredPawn(AIGS_GameCharacterFramework* inPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLootBagCountChanged(int32 inCount, const TArray<EIGS_BagType>& inBagTypes);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsDefendingChangedEvent(bool inIsDefending);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealthStateChangedEvent(EIGS_HealthState inState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHealthChangedEvent(float inRelativeHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDeath();
    
    UFUNCTION(BlueprintCallable)
    void LootBagCountChanged(int32 inCount, const TArray<EIGS_BagType>& inBagTypes);
    
};

