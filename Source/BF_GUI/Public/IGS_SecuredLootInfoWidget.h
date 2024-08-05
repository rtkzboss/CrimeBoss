#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_SecuredLootInfoWidget.generated.h"

class AIGS_PlayerCharacter;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_SecuredLootInfoWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SecuredLootValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoftCollectedLootValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoalValue;
    
public:
    UIGS_SecuredLootInfoWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnregisterGameCharacterEvents(AIGS_PlayerCharacter* inGameCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterGameCharacterEvents(AIGS_PlayerCharacter* inGameCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshLootInfo();
    
};

