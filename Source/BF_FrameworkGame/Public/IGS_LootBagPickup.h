#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemType.h"
#include "IGS_CommonItemData.h"
#include "IGS_LootBagSingleItem.h"
#include "IGS_LootBagDestroyedDelegate.h"
#include "IGS_PickupActorBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_LootBagPickup.generated.h"

class AIGS_GameCharacterFramework;
class UAkAudioEvent;
class UIGS_InventoryObjectFramework;
class UIGS_LootBagInteractiveComponent;
class USkeletalMeshComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_LootBagPickup : public AIGS_PickupActorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_LootBagDestroyed OnLootBagDestroyed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText PrefixText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> PlacedInLevelItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ItemType PlacedInLevelItemType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* LootGrabAkEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CommonItemData CommonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_LootBagInteractiveComponent* InteractiveComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* SkeletalMesh;
    
public:
    AIGS_LootBagPickup(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContainingItemsChangedEvent();
    
public:
    UFUNCTION(BlueprintCallable)
    void NotifyPickup(AIGS_GameCharacterFramework* inCharacter);
    
    UFUNCTION(BlueprintCallable)
    void NotifyCatchInAir(AIGS_GameCharacterFramework* inCharacter);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_LootBagGrabbed();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EIGS_ItemType GetItemType() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FIGS_LootBagSingleItem> GetItems();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EnableLootBagPhysics();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisableLootBagPhysics();
    
};

