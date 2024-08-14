#pragma once
#include "CoreMinimal.h"
#include "IGS_LauncherProjectileBase.h"
#include "IGS_GrenadeLauncherProjectileBase.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UAkAudioEvent;
class UAkComponent;
class UAkSwitchValue;
class UNiagaraSystem;
class UParticleSystem;
class UPointLightComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_GrenadeLauncherProjectileBase : public AIGS_LauncherProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* ExplosionLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GrenadeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraGrenadeParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* ExplosionSoundAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* IndoorsAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* OutdoorsAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightFlashTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ImpactDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMakeNoiseAndEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool mR_bIsExploded;
    
public:
    AIGS_GrenadeLauncherProjectileBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExplosionSphereTrace(AActor* inActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnExplosion();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_ExplodeEffect();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasExploded() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOuterEffectRadius() const;
    
    UFUNCTION(BlueprintCallable)
    void Explode();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AffectPlayer(const AIGS_GameCharacterFramework* inPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AffectNPC(const AIGS_GameCharacterFramework* inNPC) const;
    
};

