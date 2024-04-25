#pragma once
#include "CoreMinimal.h"
#include "IGS_LootSpawnedSignatureDelegate.h"
#include "IGS_SpawnerBase.h"
#include "IGS_LootCollectionSpawnerBase.generated.h"

class AActor;
class AIGS_LootCollectionBase;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_LootCollectionSpawnerBase : public AIGS_SpawnerBase {
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
    FIGS_LootSpawnedSignature OnLootCollectionSpawned;
    
    AIGS_LootCollectionSpawnerBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LootCollectionSpawned(AIGS_LootCollectionBase* inLootCollection);
    
};

