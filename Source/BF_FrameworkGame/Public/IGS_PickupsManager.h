#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_PickupsManager.generated.h"

class AIGS_AmmoBoxBase;
class AIGS_CarryableItemPickup;
class AIGS_LootBagPickup;
class AIGS_PickupActorBase;
class AIGS_PickupActorInventoryItem;
class AIGS_StaticMeshInventoryItemPickup;
class AIGS_WeaponPickupActor;
class UIGS_PickupsManager;
class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_PickupsManager : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_PickupActorBase*> m_AllPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_AmmoBoxBase*> m_AmmoBoxPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_LootBagPickup*> m_LootBagPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_PickupActorInventoryItem*> m_InventoryItemPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_WeaponPickupActor*> m_WeaponPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_CarryableItemPickup*> m_CarryableItemPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_CarryableItemPickup*> m_CarryableLootItemPickups;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_StaticMeshInventoryItemPickup*> m_StaticMeshInventoryItemPickups;
    
public:
    UIGS_PickupsManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static UIGS_PickupsManager* GetPickupsManager(UObject* inWCO);
    
};

