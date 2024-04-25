#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_BotOrderWidget.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_BotOrderWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_BotOrderWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOrderFinished(bool inResult);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewBotOrderEvent(AIGS_GameCharacterFramework* inBot, const FText& InText, float InTime);
    
};

