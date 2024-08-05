#pragma once
#include "CoreMinimal.h"
#include "IGS_PoolableBaseActor.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Templates/SubclassOf.h"
#include "IGS_ProjectileBase.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UDamageType;
class UIGS_ImpactTypeObject;
class UIGS_WeaponInventoryObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_ProjectileBase : public AIGS_PoolableBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EDrawDebugTrace::Type> DrawDebugTrace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ETraceTypeQuery> TraceChannel;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UDamageType> DamageType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ImpactTypeObject> ShotImpactType;
    
public:
    AIGS_ProjectileBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWeaponObject(UIGS_WeaponInventoryObject* inWeaponObject);
    
    UFUNCTION(BlueprintCallable)
    void SetWeaponActor(AActor* inWeaponActor);
    
    UFUNCTION(BlueprintCallable)
    void SetRange(float inEffectiveRange, float inMaxRange, float inLineTraceEnd);
    
    UFUNCTION(BlueprintCallable)
    void SetMuzzleLocation(const FVector& inMuzzleLocation);
    
    UFUNCTION(BlueprintCallable)
    void SetImpactLoudness(float inBaseImpactLoudness);
    
    UFUNCTION(BlueprintCallable)
    void SetDamage(float inBaseDamage, float inMinDamageMult);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterOwner(AIGS_GameCharacterFramework* inOwner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnProjectileProcessed(float inDistance, bool inHit, const FHitResult& inHitResult, const bool bIsPenetratingHit, float inDamageDealt);
    
    UFUNCTION(BlueprintCallable)
    void MakeImpactNoiseAndEvent(FVector inNoiseLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageForRange(float inDistance) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetCharacterOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AIGS_GameCharacterFramework* GetCharacterInstigator() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateEffect(AIGS_GameCharacterFramework* inInstigatorCharacter, TSubclassOf<UDamageType> inDamageType, TSubclassOf<UIGS_ImpactTypeObject> inImpactType, const FHitResult inHitResult);
    
    UFUNCTION(BlueprintCallable)
    void ApplyDebuffs(AActor* inDamagedActor, float inDistance);
    
    UFUNCTION(BlueprintCallable)
    float ApplyDamage(float inDistance, const FHitResult& inHitInfo);
    
};

