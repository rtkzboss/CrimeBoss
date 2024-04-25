#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_HitInfo.h"
#include "IGS_ShootablePart.h"
#include "IGS_ShootablePartsHandlerComponent.generated.h"

class UPhysicalMaterial;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_ShootablePartsHandlerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ShootablePart> ShootableParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PartPhysMatOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShootOffVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_CollisionComponents, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> mR_CollisionComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, ReplicatedUsing=OnRep_VisibleComponents, meta=(AllowPrivateAccess=true))
    TArray<UActorComponent*> mR_VisibleComponents;
    
public:
    UIGS_ShootablePartsHandlerComponent(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_VisibleComponents();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CollisionComponents();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_ShootOffPart(UActorComponent* inCollisionComponent, UActorComponent* inVisibleComponent, const FIGS_HitInfo& inHit, float inDamage);
    
};

