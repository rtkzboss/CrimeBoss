#pragma once
#include "CoreMinimal.h"
#include "IGS_BotOrderAction.h"
#include "IGS_WidgetRadialSliceBase.h"
#include "IGS_WidgetBotRadialSlice.generated.h"

class AIGS_GameCharacterFramework;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetBotRadialSlice : public UIGS_WidgetRadialSliceBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* BotPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsDefending;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotBind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSwitchable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_BotOrderAction> MyBotOrderActions;
    
public:
    UIGS_WidgetBotRadialSlice();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSwitchable_Internal(bool inSwitchable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerPicture(UTexture2D* inTexture);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCharacterImage(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPossessPressed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefendStateChanged(bool inDefend);
    
    UFUNCTION(BlueprintCallable)
    void OnDefendChanged(bool inDefend);
    
};

