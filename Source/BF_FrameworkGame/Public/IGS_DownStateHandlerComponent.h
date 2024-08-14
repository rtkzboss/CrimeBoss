#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "ScalableFloat.h"
#include "IGS_DownStateCountChangedSignatureDelegate.h"
#include "IGS_DownStateHandlerComponentBase.h"
#include "IGS_OnGoToDownstateAnimationDoneSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_DownStateHandlerComponent.generated.h"

class APawn;
class UAkAudioEvent;
class UGameplayEffect;
class UIGS_DamageTypeBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_DownStateHandlerComponent : public UIGS_DownStateHandlerComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DownStateHealthMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ReviveTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ReviveTimePinned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DownStateLengthInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PinnedDownStateLengthInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DownStateDamageGracePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat GracePeriodAfterRevive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PinnedHealthThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HealthDecayTickPeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DownStateMovementSpeedMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_DamageTypeBase> BleedOutDamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DownedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> AfterRevivedSomeoneEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> AfterBeingRevivedEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DownstatePhase1StartAkEventFPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DownstatePhase2StartAkEventFPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DeathAKEventFPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ReviveStartedAkEventFPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ReviveFinishedAkEventFPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DownstatePhase1StartAkEventTPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DownstatePhase2StartAkEventTPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* DeathAKEventTPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ReviveStartedAkEventTPP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ReviveFinishedAkEventTPP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DownStateCountChangedSignature DownStateCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnGoToDownstateAnimationDoneSignature OnGoToDownstateAnimationDone;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GracePeriodGoingDownEndTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GracePeriodAfterReviveEndTimestamp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DownStateCount, meta=(AllowPrivateAccess=true))
    int32 CurrentDownStatesCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 BaseDownStatesCount;
    
public:
    UIGS_DownStateHandlerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_DownStateCount();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_ReviveChange(APawn* inHealer, bool Inactive, bool inIsFinished);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_HealthStateChange(EIGS_HealthState inHealthState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_DownStateCount(int32 inCount);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentDownStatesCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBaseDownStatesCount() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSetDownStatesCount(int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    void ForceDeath();
    
    UFUNCTION(BlueprintCallable)
    void ForceChangeState(EIGS_HealthState inState);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void Client_ReviveChange(APawn* inHealer, bool Inactive, bool inIsFinished);
    
public:
    UFUNCTION(BlueprintCallable)
    void CallOnCanSelfrevive();
    
    UFUNCTION(BlueprintCallable)
    void CallGoToDownstateAnimationDone();
    
};

