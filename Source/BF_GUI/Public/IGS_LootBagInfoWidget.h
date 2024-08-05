#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_LootBagInfoWidget.generated.h"

class AIGS_PlayerCharacter;
class UIGS_LootBagComponent;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_LootBagInfoWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_LootBagComponent* LootBagComponent;
    
    UIGS_LootBagInfoWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UnregisterGameCharacterEvents(AIGS_PlayerCharacter* inGameCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RegisterGameCharacterEvents(AIGS_PlayerCharacter* inGameCharacter);
    
};

