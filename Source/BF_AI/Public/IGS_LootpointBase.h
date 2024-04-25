#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_LootpointBase.generated.h"

class AIGS_LootCollectionBase;
class AIGS_LootCollectionSpawnerBase;
class AIGS_LootHolderBase;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class BF_AI_API AIGS_LootpointBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_LootHolderBase*> LootHolders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_LootCollectionBase*> LootColletions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_LootCollectionSpawnerBase*> LootSpawners;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
public:
    AIGS_LootpointBase(const FObjectInitializer& ObjectInitializer);

};

