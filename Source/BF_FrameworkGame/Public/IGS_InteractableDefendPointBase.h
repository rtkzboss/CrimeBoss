#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_OnDefendFinishedDelegate.h"
#include "IGS_OnDefendStateChangedDelegate.h"
#include "IGS_InteractableDefendPointBase.generated.h"

class UBoxComponent;
class UIGS_InteractiveComponent;
class UPrimitiveComponent;
class USceneComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_InteractableDefendPointBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_InteractiveComponent* DefendInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* LeaveTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DefendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTimed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ResetCountdown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayAfterAllPlayersOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Pinged, meta=(AllowPrivateAccess=true))
    bool mR_bPinged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnDefendFinished OnDefendFinishedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnDefendFinished OnDefendStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnDefendStateChanged OnDefendStateChangedEvent;
    
    AIGS_InteractableDefendPointBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetPinged(bool inPinged);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Pinged();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnPlayerCountChanged(int32 inCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPinged(bool inPinged);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPauseChanged(bool inPaused);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefendStateChanged(bool inState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDefendFinished();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inbFromSweep, const FHitResult& inSweepResult);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefendTimeRemaining();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefendTimeElapsed();
    
};

