#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_ScreenWithSubscreens.h"
#include "IGS_BaseMenuWidget.generated.h"

class UIGS_GameScreenHandler;
class UIGS_Screen;

UCLASS(Blueprintable, EditInlineNew)
class BF_FRAMEWORKGAME_API UIGS_BaseMenuWidget : public UIGS_ScreenWithSubscreens {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsForceHidden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenScreenDelayAfterInitialization;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_ActiveScreenTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_GameScreenHandler* m_GameScreenHandler;
    
public:
    UIGS_BaseMenuWidget();

    UFUNCTION(BlueprintCallable)
    void SwitchToScreen(FGameplayTag inScreenTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetTopContentVisibility(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetForceHidden(bool IsHidden);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBottomContentVisibility(bool inIsVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBaseScreenVisibility(bool IsVisible);
    
private:
    UFUNCTION(BlueprintCallable)
    void OpenScreenOnInitialization();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenDebugMenu();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreensInitialized(FGameplayTag inScreenTag);
    
    UFUNCTION(BlueprintCallable)
    void OnScreenOpen_Internal(FGameplayTag inScreenTag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScreenOpen(FGameplayTag inScreenTag);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTopContentVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBottomContentVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBaseScreenVisible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_Screen* GetScreenToBeOpenOnInitialization();
    
};

