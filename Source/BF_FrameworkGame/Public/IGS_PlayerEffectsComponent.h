#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "IGS_HitInfo.h"
#include "Components/ActorComponent.h"
#include "EIGS_PlayerEffect.h"
#include "IGS_DamageEffectData.h"
#include "IGS_DownStateEffectData.h"
#include "IGS_ExplosionParams.h"
#include "IGS_FallingEffectData.h"
#include "IGS_FlashbangEffectData.h"
#include "IGS_HealthEffectData.h"
#include "IGS_OnFireEffectData.h"
#include "IGS_RainOnCameraEffectData.h"
#include "IGS_StimshotEffectData.h"
#include "IGS_VisorEffectData.h"
#include "IGS_PlayerEffectsComponent.generated.h"

class AActor;
class UAkAudioEvent;
class UAkRtpc;
class UCurveFloat;
class UIGS_CameraComponentBase;
class UMaterialInstance;
class UNiagaraComponent;
class UObject;
class UParticleSystemComponent;
class UTexture;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PlayerEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DamageEffectData DamageEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_DownStateEffectData DownStateEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FallingEffectData FallingEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FlashbangEffectData FlashbangEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_HealthEffectData HealthEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_VisorEffectData VisorEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_RainOnCameraEffectData RainOnCameraEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnFireEffectData OnFireEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_StimshotEffectData StimshotEffectData;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlashEffectivityMultiplierAttribute;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UMaterialInstance*> m_RequestedMaterialInstances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UParticleSystemComponent*> m_RequestedParticleSystemComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UNiagaraComponent*> m_RequestedNiagaraSystemComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UCurveFloat*> m_RequestedCurves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UAkAudioEvent*> m_RequestedAkAudioEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UAkRtpc*> m_RequestedAkRtpcs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UTexture*> m_RequestedTextures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FString, UObject*> m_RequestedBlendableInterfaces;
    
public:
    UIGS_PlayerEffectsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopDrillSparks();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void StopDownstateEffect() const;
    
    UFUNCTION(BlueprintCallable)
    void StartDrillSparks(AActor* inDrillActor);
    
    UFUNCTION(BlueprintCallable)
    void PlayRainOnCameraEffect(bool inEnters);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void PlayFlashbangEffectsWithInstigator(AActor* inTarget, AActor* inInstigator, float inEffectRange) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void PlayFlashbangEffectsWithDurationAndPowerOverride(float inOverrideDuration, float inOverridePower) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void PlayFlashbangEffects(float inDistanceBasedNormalizedPower, float inDOT) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void PlayExplosionEffect(const FIGS_ExplosionParams& inExplosionParams) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void PlayDownstateEffect() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void OnHealthStateChanged(EIGS_HealthState inHealthState) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void OnHealthChanged(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo) const;
    
    UFUNCTION(BlueprintCallable)
    void OnDrillDestroyed(AActor* inDrillActor);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayFlashbangEffectsWithDurationAndPower_Internal(float inOverrideDuration, float inOverridePower);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayFlashbangEffects_Internal(float inDistanceBasedNormalizedPower, float inDOT);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void Multicast_PlayExplosionEffects(const FIGS_ExplosionParams& inExplosionParams) const;
    
public:
    UFUNCTION(BlueprintCallable)
    void ChangeCamera(UIGS_CameraComponentBase* inCamera, TArray<EIGS_PlayerEffect> inEffectsToRebind, bool inChangeCameraForAll);
    
};

