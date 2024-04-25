#pragma once
#include "CoreMinimal.h"
#include "IGS_EncryptedF32.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "EIGS_HealthState.h"
#include "IGS_HealInfo.h"
#include "IGS_HitInfo.h"
#include "IGS_ObjectStatusAccumulatedDamageEventSignatureDelegate.h"
#include "IGS_ObjectStatusHealthChangedEventSignatureDelegate.h"
#include "IGS_ObjectStatusHealthResetEventSignatureDelegate.h"
#include "IGS_ObjectStatusHealthStateChangedEventSignatureDelegate.h"
#include "IGS_ObjectStatusMaxHealthChangedEventSignatureDelegate.h"
#include "IGS_ObjectStatus.generated.h"

class AActor;
class AController;
class UDamageType;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_ObjectStatus : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ObjectStatusHealthChangedEventSignature OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ObjectStatusMaxHealthChangedEventSignature OnMaxHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ObjectStatusHealthChangedEventSignature OnDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ObjectStatusAccumulatedDamageEventSignature OnAccumulatedDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ObjectStatusAccumulatedDamageEventSignature OnAccumulatedDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ObjectStatusHealthResetEventSignature OnHealthReset;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ObjectStatusHealthResetEventSignature OnResurrection;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ObjectStatusHealthStateChangedEventSignature OnHealthStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCurrentHealthWasReplicated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MaxShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_EncryptedF32 CurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedCurrentHealth, meta=(AllowPrivateAccess=true))
    float mR_ReplicatedCurrentHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_EncryptedF32 CurrentShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsDead, meta=(AllowPrivateAccess=true))
    bool R_IsDead;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool Unkillable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool ScriptInvulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool DifficultyInvulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool HealthDecayDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool InstantKillable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HealthState, meta=(AllowPrivateAccess=true))
    EIGS_HealthState HealthState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool IsInjured;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AccumulateDamagePeriod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_OverrideReportingOfDamageDealt;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool m_OverrideReportingOfDamageDealtValue;
    
public:
    UIGS_ObjectStatus(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    void SetHealthDecayDisabled(bool inDisabled);
    
    UFUNCTION(BlueprintCallable)
    void ServerSetScriptInvulnerable(bool InValue);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTakePointDamage(AActor* DamagedActor, float Damage, AController* InstigatedBy, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector ShotFromDirection, const UDamageType* DamageType, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeAnyDamage(AActor* inDamagedActor, float inDamage, const UDamageType* inDamageType, AController* inInstigatedBy, AActor* inDamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedCurrentHealth();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDead();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HealthState() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Multicast_SetMaxHealth(float inMaxHealth);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Multicast_SetAllData(float inHealthChange, float inMaxHealth, EIGS_HealthState inHealthState, const FIGS_HitInfo& inHitInfo, bool inAllowWhileDead);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Multicast_DoHeal(float inHealthChange, const FIGS_HealInfo& inHealInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Multicast_DoDamage(float inHealthChange, const FIGS_HitInfo& inHitInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Multicast_Die(float inHealthChange, const FIGS_HitInfo& inHitInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Multicast_ChangeHealthState(EIGS_HealthState inHealthState);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Multicast_ChangeHealth(float inHealthChange, const FIGS_HitInfo& inHitInfo, bool inAllowWhileDead);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void MessageToServer_DoHeal(float inHealthChange, const FIGS_HealInfo& inHealInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeadForSomeTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAliveInNormalHealthState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecentlyDownstated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRecentlyDied() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRelativeShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRelativeHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastShieldDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastHealthDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_HealthState GetHealthState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHealthDecayDisabled();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentShield() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealthWithAccumulatedDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealthNormalized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseReviveHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseMaxHealth() const;
    
};

