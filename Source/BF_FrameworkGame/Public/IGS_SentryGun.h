#pragma once
#include "CoreMinimal.h"
#include "IGS_HitInfo.h"
#include "Engine/EngineTypes.h"
#include "IGS_DetectorBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_SentryGun.generated.h"

class UAkComponent;
class UIGS_OverheatComponent;
class UIGS_SimpleHitScanShooter;
class UIGS_WeaponInventoryObject;

UCLASS(Abstract, Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_SentryGun : public AIGS_DetectorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bIsInvulnerable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DownTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WeaponInventoryObject> WeaponObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FComponentReference MuzzleFlashReference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_OverheatComponent> OptionalOverheatComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UIGS_SimpleHitScanShooter* Shooter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAkComponent* AkComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UIGS_WeaponInventoryObject* weaponObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShootAngleDegrees;
    
public:
    AIGS_SentryGun(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void SetSentryCanShoot(bool inEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OnTakeDamage(float inCurrentHealth, float inCurrentShield, float inHealthChange, float inShieldChange, const FIGS_HitInfo& inHitInfo);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_CosmeticShootStopped();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_CosmeticShootStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticShootStopped();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CosmeticShootStarted();
    
};

