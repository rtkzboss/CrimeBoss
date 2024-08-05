#pragma once
#include "CoreMinimal.h"
#include "EIGS_BagType.h"
#include "EIGS_BotCommandDefinition.h"
#include "IGS_WidgetRadialMenuBase.h"
#include "IGS_WidgetBotRadialMenu.generated.h"

class AController;
class AIGS_GameCharacterFramework;
class UIGS_PlayerCommandComponent;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetBotRadialMenu : public UIGS_WidgetRadialMenuBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AController*> BotControllers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerCommandComponent* PlayerCommandComponent;
    
public:
    UIGS_WidgetBotRadialMenu();

private:
    UFUNCTION(BlueprintCallable)
    void OnLootBagsCountChanged_Internal(int32 inCount, const TArray<EIGS_BagType>& inBagTypes);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLootBagsCountChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCommandedBot(EIGS_BotCommandDefinition inCommandDefinition);
    
    UFUNCTION(BlueprintCallable)
    void CancelBotMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBotDeliver(const AIGS_GameCharacterFramework* inBotReference) const;
    
    UFUNCTION(BlueprintCallable)
    void CallBotCommand(EIGS_BotCommandDefinition inCommand);
    
};

