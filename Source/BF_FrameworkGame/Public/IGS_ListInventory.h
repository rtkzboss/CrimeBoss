#pragma once
#include "CoreMinimal.h"
#include "IGS_InventoryInterface.h"
#include "Components/ActorComponent.h"
#include "IGS_ListInventoryModifiedSignatureDelegate.h"
#include "IGS_ListItemHolder.h"
#include "Templates/SubclassOf.h"
#include "IGS_ListInventory.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_InventoryObjectFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ListInventory : public UActorComponent, public IIGS_InventoryInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_GameCharacterFramework> OwningPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBagCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ListItemHolder> Items;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ListInventoryModifiedSignature OnInventoryModified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> PocketLoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> BonusPocketLoot;
    
    UIGS_ListInventory(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    float GetPocketLootWeight();
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> GetAndClearPocketLoot();
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> GetAndClearBonusPocketLoot();
    

    // Fix for true pure virtual functions not being implemented
};

