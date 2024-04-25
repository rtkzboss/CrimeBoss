#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "AttributeSet.h"
#include "IGS_GASAttributeSetBase.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_GASAttributeSetBase : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MoveSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MoveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SprintSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData SprintSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CrouchSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData CrouchSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_CarryingSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData CarryingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSMovementSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ADSMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WeaponDamageMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData WeaponDamageMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeleeDamageMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MeleeDamageMult;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReloadSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ReloadSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ADSSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HolsterSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HolsterSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LookSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData LookSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HipFireSpread, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HipFireSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ADSSpread, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ADSSpread;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AimingStability, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AimingStability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DetectionSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DetectionSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExtraBag, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ExtraBag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DamageReceived, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DamageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BulletDamageReceived, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData BulletDamageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ExplosiveDamageReceived, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ExplosiveDamageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FireDamageReceived, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData FireDamageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MeleeDamageReceived, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData MeleeDamageReceived;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthMultiplier, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HealthMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthRegenDelay, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData HealthRegenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FlashEffectivity, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData FlashEffectivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StunEffectivity, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData StunEffectivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReviveSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData ReviveSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_BeingRevivedSpeed, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData BeingRevivedSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_DownStateDuration, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData DownStateDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AdditionalDownStateCount, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AdditionalDownStateCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing="OnRep_Ability1Charges", meta=(AllowPrivateAccess=true))
    FGameplayAttributeData Ability1Charges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AbilityRegenSpeedMult, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData AbilityRegenSpeedMult;
    
    UIGS_GASAttributeSetBase();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WeaponDamageMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StunEffectivity(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SprintSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReviveSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReloadSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MoveSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeleeDamageReceived(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_MeleeDamageMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LookSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HolsterSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HipFireSpread(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthRegenDelay(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthMultiplier(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FlashEffectivity(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FireDamageReceived(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExtraBag(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ExplosiveDamageReceived(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DownStateDuration(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DetectionSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_DamageReceived(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CrouchSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CarryingSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BulletDamageReceived(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_BeingRevivedSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AimingStability(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSSpread(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ADSMovementSpeed(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AdditionalDownStateCount(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_AbilityRegenSpeedMult(const FGameplayAttributeData& inOldValue);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Ability1Charges(const FGameplayAttributeData& inOldValue);
    
};

