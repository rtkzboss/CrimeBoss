#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerControllerFramework.h"
#include "EIGS_InputDevice.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EIGS_MenuInputState.h"
#include "IGS_GiveUpEventDelegate.h"
#include "IGS_OnCinematicModeChangedDelegate.h"
#include "IGS_OnStartHeistHoldChangedDelegate.h"
#include "IGS_PawnChangedEventSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_PlayerControllerRoot.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_PlayerCharacter;
class UAISense;
class UActiveSubControllerHandler;
class UIGS_AimAssistComponent;
class UIGS_InputDeviceDetectorComponent;
class UIGS_PlayerBotOrderComponent;
class UIGS_PlayerDataComponent;
class UIGS_SubControllerCommon;
class UIGS_SubControllerHuman;
class UIGS_SubControllerMountable;
class UIGS_SubControllerVehicle;
class USphereComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_PlayerControllerRoot : public AIGS_PlayerControllerFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEntranceUnlockMenuOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PawnChangedEventSignature OnPawnChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnStartHeistHoldChanged OnStartHeistHoldChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCinematicModeChanged OnCinematicModeChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PawnChangedEventSignature OnSpectatorPawnChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GiveUpEvent OnHoldingGiveUpEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsCurrentlySwappingPawns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertLook;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowShootingInSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAimingInSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowReloadingInSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowSwitchFireModeInSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowChangeSlotInSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleCrouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSprintInterruptsReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMagCheckInSprintAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamepadPrioritizeUseInsteadOfReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTimeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartHeistHoldTimeInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoublePingThresholdInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ContextualDoublePingThresholdInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingCooldownInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UAISense>> RegisterAsSourceForSenses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UActiveSubControllerHandler* ActiveSubControllerHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SubControllerHuman* SubControllerHuman;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SubControllerMountable* SubControllerMountable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SubControllerVehicle* SubControllerVehicle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_SubControllerCommon*> m_Subcontrollers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SubControllerCommon* m_ActiveSubController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* m_StreamingVolumeCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InputDeviceDetectorComponent* m_InputDeviceDetectorComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerDataComponent* PlayerDataComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PlayerBotOrderComponent* PlayerBotOrderComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerCharacter* CurrentPlayerCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_PlayerCharacter* CurrentlySpectatedPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_AimAssistComponent* m_AimAssistComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GivingUpTime;
    
public:
    AIGS_PlayerControllerRoot(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryPossessSpectatedBot();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ToggleBotSwitchMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void ShowErrorMessage(const FText& inMessageText) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetShowMainCanvas(bool inShowMainCanvas) const;
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreRadialMenuInput(bool bNewMenuInput);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnorePingInput(bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreMenuInput(bool bNewMenuInput);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreInteractionInput(bool bNewInteractionInput);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreBotSwapInput(bool bNewBotSwapInput);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreAllInput(bool bNewAllInput);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_UnlockMethodChosen(const FGameplayTag inMethod);
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_PossessSpectatedBot(AIGS_PlayerCharacter* inPlayerToSpectate);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_GiveUpInPinnedDownState() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreRadialMenuInput();
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreMenuInput();
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreInteractionInput();
    
    UFUNCTION(BlueprintCallable)
    void ResetIgnoreBotSwapInput();
    
    UFUNCTION(BlueprintCallable)
    void ReleaseHeldKeys();
    
    UFUNCTION(BlueprintCallable)
    bool OpenUnlockMethodMenu(FGameplayTagContainer inMethods);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnSystemMenuInput(bool inIsHoldingButton, EIGS_MenuInputState inInputState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRadialMenuAnalogY(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRadialMenuAnalogX(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnOpenUnlockMenu(FGameplayTagContainer inMethods);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpenTextChatMenu(bool inIsHoldingButton, EIGS_MenuInputState inInputState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpenNotepadMenu(bool inIsHoldingButton, EIGS_MenuInputState inInputState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpenInventoryMenu(bool inIsHoldingButton, EIGS_MenuInputState inInputState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOpenBotSwitch(bool inIsHoldingButton, EIGS_MenuInputState inInputState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInputDeviceChanged(EIGS_InputDevice inNewInputDevice);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGameMenuInput(bool inIsHoldingButton, EIGS_MenuInputState inInputState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnCloseUnlockMenu();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClientFadeScreen(bool inIsFadeOut, float inFadeDuration);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBotStandby(bool inIsHoldingButton, EIGS_MenuInputState inInputState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBotPossessInMenu(bool inIsHoldingButton, EIGS_MenuInputState inInputState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBotFollow(bool inIsHoldingButton, EIGS_MenuInputState inInputState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnBotCancelInMenu(bool inIsHoldingButton, EIGS_MenuInputState inInputState);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float OnAddYawInput(float inYaw);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float OnAddPitchInput(float InPitch);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingKeyboardAndMouse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUsingGamepad() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpectatingBot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpectating() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRadialMenuInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPingInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMenuInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInteractionInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBotSwapInputIgnored() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSkipInternal();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetStartHeistHoldTimeInSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPingCooldownInSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHoldTimeInSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDoublePingThresholdInSeconds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_InputDevice GetCurrentInputDeviceType() const;
    
    UFUNCTION(BlueprintCallable)
    float GetContextualDoublePingThresholdInSeconds();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_AimAssistComponent* GetAimAssistComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ForceFadeInView(bool bInvert);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInGameView(bool bInvert);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeInFadeOut(float inFadeDuration, float inBlackDuration);
    
    UFUNCTION(BlueprintCallable)
    void CloseUnlockMethodMenu();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ClientWasKickedEvent(const FText& KickReason);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientSwitchToSpectator3PVCamera(AIGS_GameCharacterFramework* inSpectatorCharacter);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientIgnoreSuspiciousInput(bool bIgnore);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientIgnoreRealMoveInput(bool bIgnore);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientIgnoreAllInput(bool bIgnore);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientFadeScreen(bool inIsFadeOut, float inFadeDuration);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_UnlockMethodChosen(const FGameplayTag inMethod);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChooseBotQuickly();
    
};

