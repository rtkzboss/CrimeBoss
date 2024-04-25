#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "IGS_SphereOverlappableComponent.h"
#include "IGS_SuppressionHandlerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_SuppressionHandlerComponent : public UIGS_SphereOverlappableComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToWaitAfterSniperShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HeadCollisionCapsuleRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggroDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventsToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggroDisabledDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AggroCumulationTimeout;
    
public:
    UIGS_SuppressionHandlerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCapsuleSize(float inCapsuleSize);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnCharacterHit(float inDamage, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);
    
};

