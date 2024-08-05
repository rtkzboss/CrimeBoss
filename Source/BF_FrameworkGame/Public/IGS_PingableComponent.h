#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_CameraOutlineState.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_PingableType.h"
#include "IGS_OnPingStateChangedEventDelegate.h"
#include "IGS_PingableComponent.generated.h"

class UAkAudioEvent;
class UIGS_OutlineComponent;
class UObject;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PingableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseRootForOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_PingableType PingableType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool mR_bCanBePinged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnPingStateChangedEvent OnPingStateChangedBP;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> PingedAkAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAkAudioEvent> PingedDangerousAkAudioEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> m_PrimitiveComponentsToOutline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PingedAkAudioEventLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* PingedDangerousAkAudioEventLoaded;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsPingedChange, meta=(AllowPrivateAccess=true))
    bool mR_bIsPinged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_OutlineComponent* m_OutlineComponent;
    
public:
    UIGS_PingableComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetOutlineState(EIGS_CameraOutlineState inType, bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void PingIndefinitely(const UObject* inPingedBy);
    
    UFUNCTION(BlueprintCallable)
    void PingCustomDuration(float inDuration, const UObject* inPingedBy);
    
    UFUNCTION(BlueprintCallable)
    void Ping(const UObject* inPingedBy);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_IsPingedChange();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_PingSound();
    
public:
    UFUNCTION(BlueprintCallable)
    EIGS_TeamSideEnum GetOwnerTeamSide() const;
    
    UFUNCTION(BlueprintCallable)
    void EndPing();
    
};

