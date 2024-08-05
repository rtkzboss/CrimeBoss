#pragma once
#include "CoreMinimal.h"
#include "IGS_CarryableLootSpawnedSignatureDelegate.h"
#include "IGS_SpawnerBase.h"
#include "IGS_LootCarryableSpawnerBase.generated.h"

class AActor;
class AIGS_StaticMeshInventoryItemPickup;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_LootCarryableSpawnerBase : public AIGS_SpawnerBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Scene;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* SpawnPlaceholder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> ActorToSpawn;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CarryableLootSpawnedSignature OnCarryableLootCollectionSpawned;
    
    AIGS_LootCarryableSpawnerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LootCarryableSpawned(AIGS_StaticMeshInventoryItemPickup* inPickup);
    
};

