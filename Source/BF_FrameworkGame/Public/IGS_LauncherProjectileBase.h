#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableData.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "IGS_ProjectileWithMovement.h"
#include "IGS_ThrowableThrownData.h"
#include "Templates/SubclassOf.h"
#include "IGS_LauncherProjectileBase.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UCapsuleComponent;
class UDamageType;
class UIGS_ThrowableInventoryObject;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_LauncherProjectileBase : public AIGS_ProjectileWithMovement {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* ThrowableMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDamageOnBounce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Thrower, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_GameCharacterFramework> mR_Thrower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FIGS_ThrowableData ThrowableData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Thrown, meta=(AllowPrivateAccess=true))
    FIGS_ThrowableThrownData mR_ThrownData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ThrowableInventoryObject> m_ThrowableObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_InventoryObjectClass, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ThrowableInventoryObject> mR_ThrowableObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsCollisionEnabled, meta=(AllowPrivateAccess=true))
    bool mR_IsCollisionEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMakeImpactNoise;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool mR_bStoppedMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool mR_bHasHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool mR_bThrowedByAI;
    
public:
    AIGS_LauncherProjectileBase(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasThrownByAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool WasThrown() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void StartPhysics();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnThrown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThrowableInit();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Thrown();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Thrower();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsCollisionEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_InventoryObjectClass();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwner(AActor* inOwner) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInitialized() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Init(TSubclassOf<UIGS_ThrowableInventoryObject> inThrowableClass);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHit() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetInitialVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetInitialThrowSpeed() const;
    
    UFUNCTION(BlueprintCallable)
    float ApplyThrowableDamage(const FHitResult& inHitResult, float inBaseDamage, AIGS_GameCharacterFramework* inDamageCauser, TSubclassOf<UDamageType> inDamageType);
    
};

