#pragma once
#include "CoreMinimal.h"
#include "EIGS_InteractionType.h"
#include "EIGS_InteractionWarningPriority.h"
#include "EIGS_InteractionWarningType.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_UseTextWidget.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_InteractiveComponent;
class UIGS_InventoryObjectFramework;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_UseTextWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveComponent* m_CurrentInteraction;
    
public:
    UIGS_UseTextWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateWarningText(EIGS_InteractionWarningType inType, EIGS_InteractionWarningPriority InPriority, bool inIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateObjectiveVisual(bool inIsVisible, bool inObjectiveCompleted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBossDownVisual(bool inIsVisible, bool inIsBossDown);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetVisibility();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInteractiveObjectIsNear(bool inEnabled, EIGS_InteractionType inType, UIGS_InteractiveComponent* inInteractiveComponent, TSubclassOf<UIGS_InventoryObjectFramework> inNeededItem);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractionProgress(bool inEnabled, UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInteractionClose(bool inEnabled, EIGS_InteractionType inType, UIGS_InteractiveComponent* inInteractiveComponent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldUsed(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldStarted(AIGS_GameCharacterFramework* inInstigator, float inHoldTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldCanceled(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCanUseChanged(bool inResult, TSubclassOf<UIGS_InventoryObjectFramework> inNeededItem);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_InteractiveComponent* GetCurrentInteraction();
    
};

