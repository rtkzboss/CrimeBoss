#pragma once
#include "CoreMinimal.h"
#include "EIGS_AnimationEventType.h"
#include "EIGS_AnimationTaskFinishedReason.h"
#include "IGS_HasWeakSpotInterface.h"
#include "IGS_HitInfo.h"
#include "GameplayTagContainer.h"
#include "PaybackAICharacter.h"
#include "PaybackRobotCharacter.generated.h"

class AController;
class UActorComponent;
class UBoxComponent;
class UIGS_WeakSpotComponent;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class PAYBACK_API APaybackRobotCharacter : public APaybackAICharacter, public IIGS_HasWeakSpotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBoxComponent* WeakSpotCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeakSpotHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WeakSpotAIDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxHealthPercentageTaken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForcedOverloadTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverloadOuterDamageRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OverloadAnimationTag;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WeakSpotComponent* m_WeakSpotComponent;
    
public:
    APaybackRobotCharacter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StartOverloadSequenceDelayed(AController* inInstigator, const float inDelay);
    
    UFUNCTION(BlueprintCallable)
    void StartOverloadSequence(AController* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWeakSpotCompromised();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStunnedEvent(bool inStart);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOverloadStared();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOverloadForcedTimeEnd(AController* inInstigator);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOverloadEnded(const AController* inInstigator);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnOverloadAnimationEvent(EIGS_AnimationEventType inEventType, AController* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnOverloadAnimationEnd(EIGS_AnimationTaskFinishedReason inReason, AController* inInstigator);
    
    UFUNCTION(BlueprintCallable)
    void OnHealthChangedWithCompromisedWeakSpot(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHeadShotOff();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFlashedEvent(bool inStart);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnEffectApplied(const FGameplayTag inGameplayTag, int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyWeakSpotCompromisedEvent(const UPrimitiveComponent* inWeakSpotReference, const FIGS_HitInfo& inLastHitInfo);
    
    UFUNCTION(BlueprintCallable)
    void OnAnyShootablePartShotOff(const UActorComponent* InComponent, float inDamageAmount, const FIGS_HitInfo& inHit);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_Overload(AController* inInstigator);
    

    // Fix for true pure virtual functions not being implemented
};

