#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "IGS_HitInfo.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "IGS_LockPickDifficultySetting.h"
#include "IGS_OnLockpickEndedDelegate.h"
#include "IGS_LockpickMinigame.generated.h"

class AIGS_PlayerCharacter;
class UAkAudioEvent;
class UAkComponent;
class UIGS_InteractiveComponent;
class UInputComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_LockpickMinigame : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnLockpickEnded OnLockpickEndedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LockPickDifficultySetting LockpickSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ButtonPressAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentPinCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* m_InstigatorInputComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D AnalogMousePos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> CorrectAngles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSlightlyClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVeryClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStaggered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ClampRadiusPercentage;
    
public:
    AIGS_LockpickMinigame(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SuccessOnePick();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SpawnWidget();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetSuccess(bool inSuccess);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetStaggered(bool inStaggered);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetPins();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemoveWidget();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVeryCloseChanged(bool inVeryClose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStaggeredChanged(bool inStaggered);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlightlyCloseChanged(bool inSlightlyClose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPinsReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOnePinSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLockpickWin();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnInstigatorHealthStateChanged(EIGS_HealthState inHealthState);
    
    UFUNCTION(BlueprintCallable)
    void OnInstigatorDeath(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(AIGS_PlayerCharacter* inCharacter, UIGS_InteractiveComponent* inOwningInteraction);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float HandleMouseInput(FVector2D inXY);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Escape(bool bForceEscapeWithoutNotifying);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_Escape();
    
};

