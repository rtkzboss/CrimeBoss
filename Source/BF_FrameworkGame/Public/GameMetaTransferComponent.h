#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_TeamSideEnum.h"
#include "Templates/SubclassOf.h"
#include "GameMetaTransferComponent.generated.h"

class UIGS_InventoryObjectFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UGameMetaTransferComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalLootSpawned;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> CollectedInventoryLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> CollectedCarryables;
    
public:
    UGameMetaTransferComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegisterKill(EIGS_TeamSideEnum teamType);
    
    UFUNCTION(BlueprintCallable)
    void RegisterInventoryLoot(TSubclassOf<UIGS_InventoryObjectFramework> inLootItem);
    
    UFUNCTION(BlueprintCallable)
    void RegisterCarryableLoot(TSubclassOf<UIGS_InventoryObjectFramework> inCarryableItem);
    
};

