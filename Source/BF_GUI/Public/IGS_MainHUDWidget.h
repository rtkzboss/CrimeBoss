#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDScreen.h"
#include "IGS_MainHUDWidget.generated.h"

class AIGS_PlayerCharacter;
class UCanvasPanel;
class UIGS_HUDSubwidgetBase;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_MainHUDWidget : public UIGS_HUDScreen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerCharacter* PlayerPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MainCanvas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_HUDSubwidgetBase*> WidgetInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_HUDSubwidgetBase*> StealthWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_HUDSubwidgetBase*> SpectatorWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_HUDSubwidgetBase*> BattleWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_HUDSubwidgetBase*> EndMissionWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_HUDSubwidgetBase*> InAbilityWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TSet<UIGS_HUDSubwidgetBase*> AllWidgets;
    
    UIGS_MainHUDWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopCustomTimer();
    
    UFUNCTION(BlueprintCallable)
    void ShowStealthWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ShowSpectatorWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ShowInAbilityWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ShowEndMissionWidgets();
    
    UFUNCTION(BlueprintCallable)
    void ShowBattleWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTutorialHint(const int32 inHintEnumIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetStrikesVisibility(bool InVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetCustomTimer(const float inTotalTime);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResumeCustomTimer();
    
    UFUNCTION(BlueprintCallable)
    void RemoveRelevancyFromAllWidgets();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PostHUDInit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PauseCustomTimer();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideTutorialHint(const int32 inHintEnumIdx);
    
    UFUNCTION(BlueprintCallable)
    void HideInAbilityWidgets();
    
    UFUNCTION(BlueprintCallable)
    static FString GetVersionNumber();
    
    UFUNCTION(BlueprintCallable)
    static FString GetRevisionNumber();
    
    UFUNCTION(BlueprintCallable)
    void AddRelevancyToAllWidgets();
    
};

