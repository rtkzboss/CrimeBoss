#pragma once
#include "CoreMinimal.h"
#include "EIGS_ModType.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "IGS_WeaponModsHandler.generated.h"

class AIGS_WeaponBase;
class UIGS_ModInventoryObject;
class UIGS_OutlineComponent;
class UIGS_WeaponInventoryObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_WeaponModsHandler : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_WeaponBase> OwningWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_WeaponInventoryObject> OwningWeaponObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_OutlineComponent> OutlineComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIGS_ModInventoryObject*> ActiveMods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIGS_ModType> ActiveModTypes;
    
public:
    UIGS_WeaponModsHandler(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasWeaponModOfType(EIGS_ModType inType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_ModInventoryObject* GetWeaponModOfType(EIGS_ModType inType) const;
    
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
    void GetCurrentAIStimuliMultipliers(float& outMuzzleFlashStimuliMultiplier, float& outShotSoundStimuliMultiplier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentAimOffset(FVector& OutLocation, FVector& OutRotation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentADSAndHolsterModifications(float& outHolsterTime, float& outADSInSpeedMult, float& outADSOutSpeedMult, float& outScopeInPercent, bool& outIsUsingScopeMod) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCurrentAccuracyModifications(float& outHipFireSpreadMultiplier, float& outADSSpreadMultiplier, float& outSpreadIncreasePerShotMultiplier, float& outMovementSpreadMultiplier) const;
    
};

