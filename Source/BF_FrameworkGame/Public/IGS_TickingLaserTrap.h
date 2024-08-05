#pragma once
#include "CoreMinimal.h"
#include "IGS_LaserTrap.h"
#include "IGS_TickingLaserTrap.generated.h"

class UCurveFloat;
class UTimelineComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_TickingLaserTrap : public AIGS_LaserTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* TickTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool mR_bIsReversing;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_TickingCurve;
    
public:
    AIGS_TickingLaserTrap(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_StopRotationTimeline() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_PlayRotationTimeline(bool inReverting) const;
    
};

