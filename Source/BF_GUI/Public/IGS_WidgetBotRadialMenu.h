#pragma once
#include "CoreMinimal.h"
#include "IGS_WidgetRadialMenuBase.h"
#include "IGS_WidgetBotRadialMenu.generated.h"

class AController;
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

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCommandedBot(bool inIsFollowCommand);
    
    UFUNCTION(BlueprintCallable)
    void CancelBotMenu();
    
};

