#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "EIGS_InputDevice.h"
#include "EIGS_InputThumbstickType.h"
#include "UObject/NoExportTypes.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "Input/Events.h"
#include "EScreenZOrder.h"
#include "Templates/SubclassOf.h"
#include "IGS_ScreenHandler.generated.h"

class AGameStateBase;
class UIGS_InputDeviceManager;
class UIGS_Screen;

UCLASS(Blueprintable)
class IGS_UIFRAMEWORK_API UIGS_ScreenHandler : public UWorldSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FIGS_OnScreenOpenWithTag, FGameplayTag, ScreenTag);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnScreenOpenWithTag OnScreenOpenWithTag;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnScreenOpenWithTag OnScreenSwitched;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UIGS_Screen*> m_RegisteredScreens;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_Screen*> m_ScreensStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_InputDeviceManager* m_InputDeviceManager;
    
public:
    UIGS_ScreenHandler();

    UFUNCTION(BlueprintCallable)
    void UnregisterScreen(const UIGS_Screen* inScreen);
    
    UFUNCTION(BlueprintCallable)
    void SetInputEnabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void RegisterScreen(UIGS_Screen* inScreen);
    
    UFUNCTION(BlueprintCallable)
    UIGS_Screen* OpenScreenByClass(const TSubclassOf<UIGS_Screen> inClass, EScreenZOrder zOrderOverride);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWidgetInputReleased(EIGS_InputAction InAction);
    
    UFUNCTION(BlueprintCallable)
    void OnWidgetInputPressed(EIGS_InputAction InAction);
    
    UFUNCTION(BlueprintCallable)
    void OnInputDeviceChanged(EIGS_InputDevice newDevice);
    
    UFUNCTION(BlueprintCallable)
    void OnGameStateSet(AGameStateBase* GameState);
    
    UFUNCTION(BlueprintCallable)
    void OnAnalogInputRequested(EIGS_InputThumbstickType Type, FVector2D Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EIGS_InputAction> KeyEventToInputActions(const FKeyEvent& InKeyEvent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenWithTagOpen(FGameplayTag inTag, bool includeOverlay) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsScreenRegistered(FGameplayTag inGameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsModalScreenOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyScreenOpen(bool includeOverlays) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void InitializeDeviceManager();
    
    UFUNCTION(BlueprintCallable)
    bool HandleBack(UIGS_Screen* screen);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTopScreenTag(bool includeOverlay) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_Screen* GetTopScreen(bool includeOverlay) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_Screen* GetOpenedScreenByTag(FGameplayTag inTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreOnlyOverlaysOpen() const;
    
};

