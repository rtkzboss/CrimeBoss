#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "IGS_CameraViewerCamerasDisabledEventDelegate.h"
#include "IGS_CameraViewerChangeCameraEventDelegate.h"
#include "IGS_CameraViewerIsUsedChangedEventDelegate.h"
#include "IGS_SubControllerMountableInterface.h"
#include "Templates/SubclassOf.h"
#include "IGS_SecurityCameraViewer.generated.h"

class AController;
class AIGS_DetectorBase;
class AIGS_GameCharacterFramework;
class AIGS_SecurityCamera;
class AIGS_SentryControllerPlayerBase;
class UAkAudioEvent;
class UAkComponent;
class UAkStateValue;
class UIGS_InteractiveComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_SecurityCameraViewer : public APawn, public IIGS_SubControllerMountableInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CameraViewerChangeCameraEvent OnActiveCameraChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CameraViewerCamerasDisabledEvent OnCamerasDisabled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CameraViewerIsUsedChangedEvent OnIsUsedChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AllCamerasDisabled, meta=(AllowPrivateAccess=true))
    bool mR_AllCamerasDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowFreezing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTemporaryDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TemporaryDisableDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AllowDisablingCameras, meta=(AllowPrivateAccess=true))
    bool mR_AllowDisablingCameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PossedPawn, meta=(AllowPrivateAccess=true))
    AIGS_DetectorBase* PossedPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSetListenerOnPossessed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* EnterAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* ExitAkState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_SentryControllerPlayerBase> SecurityCameraPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_SentryControllerPlayerBase* PlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MonitorMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkAudioListener;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EnterCameraAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExitCameraAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ServoStartAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ServoStopAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ChangeCameraAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* AkStateMountNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* AkStateMountSecurityCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkStateValue* AkStateMountSecurityCameraNoSignal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AController* DefaultController;
    
public:
    AIGS_SecurityCameraViewer(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void UseCameraViewer(AIGS_GameCharacterFramework* inInstigator);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateHUD(int32 inActiveCameraIndex, bool inIsDisabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowHUD(int32 inActiveCameraIndex, int32 inCameraSourcesCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlayerHUDVisibility(bool inState);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetCanSwitchCameras(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraSources(TArray<AIGS_SecurityCamera*> inCameras);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_TurnCamera(float inAxisValue) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_LookUpCamera(float inAxisValue) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_FreezeCamera();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ExitCameraControl();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_DisableAllCameras();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void Server_ChangeCamera(bool inNextCamera);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PossedPawn(AIGS_DetectorBase* inPreviousPossedPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AllowDisablingCameras();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AllCamerasDisabled();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisableTimerChanged(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void OnClientInteractiveUsed(AIGS_GameCharacterFramework* inInstigator);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCameraDestroyed(AIGS_DetectorBase* inDetector);
    
    UFUNCTION(BlueprintCallable)
    bool IsAnyValidCamera();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActiveCameraDisabled() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HideHUD();
    
public:
    UFUNCTION(BlueprintCallable)
    AIGS_GameCharacterFramework* GetUser();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSourcesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetActiveCameraIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_SecurityCamera* GetActiveCamera() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableAllCameras();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_OnActiveCameraChanged(AIGS_SecurityCamera* inCamera, int32 inActiveCameraID, bool inIsDisabled);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ExitCameraControl(int32 inActiveCameraID);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_EnterCameraControl(int32 inActiveCameraID, int32 inCameraSourcesCount);
    
public:
    UFUNCTION(BlueprintCallable)
    void AllowDisablingCameras(bool InValue);
    

    // Fix for true pure virtual functions not being implemented
};

