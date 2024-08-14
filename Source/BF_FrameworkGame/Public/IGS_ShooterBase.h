#pragma once
#include "CoreMinimal.h"
#include "EIGS_WeaponAttackType.h"
#include "Components/ActorComponent.h"
#include "ScalableFloat.h"
#include "Templates/SubclassOf.h"
#include "IGS_ShooterBase.generated.h"

class AIGS_ProjectileBase;
class UAkAudioEvent;
class UAkRtpc;
class UAkSwitchValue;
class UForceFeedbackEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ShooterBase : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShootFromCamera;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSuppressed;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_WeaponAttackType ShooterType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsExtraFireMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AIGS_ProjectileBase> m_ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SingleShotAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* EmptyShotAudioEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* HipAimAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* SightsAimAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* NormalStateAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* SuppressedStateAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* NormalFireModeStateAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* ExtraFireModeStateAkSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* FireRateAkRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* RoundsLeftAkRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkRtpc* AdsAkRtpc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UForceFeedbackEffect* ForceFeedbackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceFeedbackLooped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ForceFeedbackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShotgunHorizontalSpreadMultiplier;
    
public:
    UIGS_ShooterBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TEST_SetWeaponModeEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void TEST_SetVibrationModeEnabled(bool inState);
    
    UFUNCTION(BlueprintCallable)
    void TEST_PlusWeaponStrength();
    
    UFUNCTION(BlueprintCallable)
    void TEST_PlusWeaponStartPosition();
    
    UFUNCTION(BlueprintCallable)
    void TEST_PlusWeaponEndPosition();
    
    UFUNCTION(BlueprintCallable)
    void TEST_PlusVibrationPosition();
    
    UFUNCTION(BlueprintCallable)
    void TEST_PlusVibrationFrequency();
    
    UFUNCTION(BlueprintCallable)
    void TEST_PlusVibrationAmplitude();
    
    UFUNCTION(BlueprintCallable)
    void TEST_MinusWeaponStrength();
    
    UFUNCTION(BlueprintCallable)
    void TEST_MinusWeaponStartPosition();
    
    UFUNCTION(BlueprintCallable)
    void TEST_MinusWeaponEndPosition();
    
    UFUNCTION(BlueprintCallable)
    void TEST_MinusVibrationPosition();
    
    UFUNCTION(BlueprintCallable)
    void TEST_MinusVibrationFrequency();
    
    UFUNCTION(BlueprintCallable)
    void TEST_MinusVibrationAmplitude();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 TEST_GetWeaponStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 TEST_GetWeaponStartPosittion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 TEST_GetWeaponEndPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 TEST_GetVibrationPosition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 TEST_GetVibrationFrequency() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 TEST_GetVibrationAmplitude() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetDualSenseTriggers() const;
    
    UFUNCTION(BlueprintCallable)
    void ResetDualSenseTriggers();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShooterStopAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnShooterBeginAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnProjectileActivated(AIGS_ProjectileBase* inProjectile);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnProjectileAcquired(AIGS_ProjectileBase* inProjectile);
    
};

