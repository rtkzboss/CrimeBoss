#pragma once
#include "CoreMinimal.h"
#include "IGS_LaserTrap.h"
#include "IGS_BlinkingLaserTrap.generated.h"

class UTimelineComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_BlinkingLaserTrap : public AIGS_LaserTrap {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTimelineComponent* BlinkTimeline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LoopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChargeAfterLaserOnNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_LaserOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_LaserOff;
    
public:
    AIGS_BlinkingLaserTrap(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnBlinkOnTimeline();
    
    UFUNCTION(BlueprintCallable)
    void OnBlinkOffTimeline();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_StopBlinkingTimeline() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Client_PlayBlinkingTimeline() const;
    
};

