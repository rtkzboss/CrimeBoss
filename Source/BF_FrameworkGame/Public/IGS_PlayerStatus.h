#pragma once
#include "CoreMinimal.h"
#include "IGS_ObjectStatus.h"
#include "ScalableFloat.h"
#include "IGS_PlayerStatus.generated.h"

class UAkAudioEvent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerStatus : public UIGS_ObjectStatus {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HealthRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HealthRegenHPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat HealthRegenTickRateInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHealthRegenAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRegenDelayAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthRegenMultiplierAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoregenMaxOverriden;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoregenMaxOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RegenerationStartAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* RegenerationFinishedAkEvent;
    
public:
    UIGS_PlayerStatus(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRegenerationBlocked(bool inIsBlocked);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void MessageToClient_RegenStarted();
    
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void MessageToClient_RegenFinished();
    
public:
    UFUNCTION(BlueprintCallable)
    void KickInRegeneration();
    
    UFUNCTION(BlueprintCallable)
    bool IsRegenerationBlocked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentMaxAutoregenHealth() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceSetMaxHealth(float inMaxHealth);
    
    UFUNCTION(BlueprintCallable)
    void ForceSetMaxAutoregenHealth(float inAutoregenMaxHealth, bool inOverride);
    
    UFUNCTION(BlueprintCallable)
    void ForceSetHealth(float inHealth);
    
};

