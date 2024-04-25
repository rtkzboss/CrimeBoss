#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EIGS_InputDevice.h"
#include "IGS_ControllerSpeakerConnectionChangedDelegate.h"
#include "IGS_OnControllerInputEstablishedDelegate.h"
#include "IGS_OnCurrentControllerDisconnectedDelegate.h"
#include "IGS_OnInputDeviceChangedDelegate.h"
#include "IGS_OnInputKeyPressedDelegate.h"
#include "IGS_OnMouseEventDelegate.h"
#include "IGS_OnMouseMovedDelegate.h"
#include "IGS_InputDeviceManager.generated.h"

UCLASS(Blueprintable)
class BF_INPUT_API UIGS_InputDeviceManager : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnInputDeviceChanged OnInputDeviceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnInputKeyPressed OnInputKeyPressed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnMouseEvent OnMouseEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnMouseMoved OnMouseMoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnCurrentControllerDisconnected OnCurrentControllerDisconnected;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnControllerInputEstablished OnControllerInputEstablished;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_InputDevice DefaultDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_InputDevice DefaultGamepadDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_InputDevice DefaultVRDevice;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ControllerSpeakerConnectionChanged OnControllerConnectionChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ControllerSpeakerConnectionChanged OnControllerHeadphonesConnectionChangedEvent;
    
    UIGS_InputDeviceManager();

    UFUNCTION(BlueprintCallable)
    void TriggerKeyBindUIUpdate();
    
    UFUNCTION(BlueprintCallable)
    void RefreshCurrentInputDevice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_InputDevice GetCurrentInputDevice() const;
    
};

