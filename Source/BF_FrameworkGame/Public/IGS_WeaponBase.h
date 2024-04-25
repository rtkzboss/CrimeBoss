#pragma once
#include "CoreMinimal.h"
#include "IGS_WieldableBase.h"
#include "EIGS_WeaponAttackType.h"
#include "UObject/NoExportTypes.h"
#include "IGS_BashInterface.h"
#include "IGS_ModMeshInterface.h"
#include "IGS_OnWeaponShootSignatureDelegate.h"
#include "IGS_VirtualSightInfo.h"
#include "IGS_WeaponAccuracyChangedSignatureDelegate.h"
#include "IGS_WeaponRecoilChangedSignatureDelegate.h"
#include "IGS_WeaponBase.generated.h"

class APawn;
class UArrowComponent;
class UIGS_BasherComponent;
class UIGS_MuzzleFlashHandlerComponent;
class UIGS_ReloaderBase;
class UIGS_ShooterBase;
class UIGS_WeaponAccuracyComponent;
class UIGS_WeaponDynamicScopeHandler;
class UIGS_WeaponInventoryObject;
class UIGS_WeaponModsHandler;
class UIGS_WeaponRecoilComponent;
class UIGS_WeaponSkinHandler;
class UIGS_WeaponVisibilityHandler;
class UNiagaraComponent;
class UParticleSystemComponent;
class UPointLightComponent;
class USceneComponent;
class USpotLightComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_WeaponBase : public AIGS_WieldableBase, public IIGS_BashInterface, public IIGS_ModMeshInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnWeaponShootSignature OnWeaponShotBP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponAccuracyChangedSignature OnWeaponAccuracyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponRecoilChangedSignature OnWeaponRecoilChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SightModMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* DynamicScopeMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* VisibilityModMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* BarrelModMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* GripModMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MagazineModMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SecondMagazineModMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StockModMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> WeaponModsArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UArrowComponent* LaserArrow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpotLightComponent* FlashSpotLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* FlashPointLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_MuzzleFlashHandlerComponent* MuzzleFlashHandlerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MuzzleFlashRootComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* MuzzleFlashParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* MuzzleFlashParticleComponentCascade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UNiagaraComponent* BarrelSmokeParticleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* MuzzleFlashLight3PV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* MuzzleFlashLightFPV;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPointLightComponent* MuzzleFlashLightFPVSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisableAim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAlwaysShootsForward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShouldUseSniperScope;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CanReloadInADS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadAfterLastBulletDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WeaponAccuracyComponent* WeaponAccuracy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WeaponRecoilComponent* WeaponRecoil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WeaponModsHandler* WeaponModsHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WeaponSkinHandler* WeaponSkinHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WeaponVisibilityHandler* WeaponVisibilityHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WeaponDynamicScopeHandler* WeaponDynamicScopeHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_ShooterBase*> Shooters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ReloaderBase* ReloaderBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_WeaponAttackType PrimaryShooter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_ShooterBase> CurrentShooter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BasherComponent* Basher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName VirtualSightSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_VirtualSightInfo VirtualSightInfo;
    
public:
    AIGS_WeaponBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopAttack();
    
    UFUNCTION(BlueprintCallable)
    void StopAllAttacks();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetVisibilityMod(bool inVisible) const;
    
    UFUNCTION(BlueprintCallable)
    void SetNextShooter();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMagazineAmmoChanged(int32 inAmmoInMagazine, int32 inMagazineCapacity);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInventoryAmmoChanged(int32 inAmmoCount);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsAttacking();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_WeaponVisibilityHandler* GetWeaponVisibilityHandler() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_WeaponInventoryObject* GetWeaponInventoryObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_ReloaderBase* GetReloader() const;
    
    UFUNCTION(BlueprintCallable)
    EIGS_WeaponAttackType GetCurrentShooterType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_ShooterBase* GetCurrentShooterObject() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentShooterModifications(float& outBaseDamageMultiplier, float& outEffectiveRangeMultiplier, float& outMaxRangeMultiplier, float& outRPMMultiplier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentReloadTimeMultiplier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentRecoilModifications(float& outVerticalRecoilMultiplier, float& outHorizontalRecoilMultiplier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentMagazineCapacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentIdleSwayIntensity(float& outIdleSwayIntensity) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentAttributeMultipliers(float& outWeaponDamageAttrib, float& outHipFireSpreadAttrib, float& outAdsSpreadAttrib, float& outIdleSwayIntensityAttrib, float& outAdsSpeedAttrib, float& outReloadSpeedAttrib) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentAIStimuliMultipliers(float& outMuzzleFlashStimuliMultiplier, float& outShotSoundStimuliMultiplier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentAimOffset(FVector& OutLocation, FVector& OutRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentADSAndHolsterModifications(float& outHolsterTime, float& outADSInSpeedMult, float& outADSOutSpeedMult, float& outScopeInPercent, bool& outIsUsingScopeMod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentAccuracyModifications(float& outHipFireSpreadMultiplier, float& outADSSpreadMultiplier, float& outSpreadIncreasePerShotMultiplier, float& outMovementSpreadMultiplier) const;
    
    UFUNCTION(BlueprintCallable)
    bool DetermineTortillaUsage(APawn* inPawn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAttack() const;
    
    UFUNCTION(BlueprintCallable)
    void BeginAttack();
    
    UFUNCTION(BlueprintCallable)
    void Bash();
    

    // Fix for true pure virtual functions not being implemented
};

