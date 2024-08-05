#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemPropertyFlags.h"
#include "Components/ActorComponent.h"
#include "IGS_GlobalInventoryModifiedDynamicSignatureDelegate.h"
#include "IGS_GlobalItemChangedDynamicSignatureDelegate.h"
#include "IGS_GlobalItemSlot.h"
#include "Templates/SubclassOf.h"
#include "IGS_GlobalInventory.generated.h"

class UIGS_GlobalInventoryObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_GlobalInventory : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GlobalInventoryModifiedDynamicSignature OnInventoryModified;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GlobalItemChangedDynamicSignature OnItemAdded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GlobalItemChangedDynamicSignature OnItemRemoved;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GlobalItemChangedDynamicSignature OnWTAdded;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_Slots, meta=(AllowPrivateAccess=true))
    TArray<FIGS_GlobalItemSlot> mR_Slots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_WTSlot, meta=(AllowPrivateAccess=true))
    FIGS_GlobalItemSlot mR_WTSlot;
    
public:
    UIGS_GlobalInventory(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

    UFUNCTION(BlueprintCallable)
    bool RemoveItem(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClass, bool inRemoveAll);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WTSlot(FIGS_GlobalItemSlot inWTSlot);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Slots(const TArray<FIGS_GlobalItemSlot>& inOldSlots);
    
public:
    UFUNCTION(BlueprintCallable)
    bool IsItemAllowedInInventory(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClass, int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    bool HasItemWithProperty(EIGS_ItemPropertyFlags inProperty);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetWTCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetItemCount(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FIGS_GlobalItemSlot> GetAllSlotsBP() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanAddItems(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClassToAdd, int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    bool CanAddItem(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClassToAdd);
    
    UFUNCTION(BlueprintCallable)
    int32 AddWT(const TSubclassOf<UIGS_GlobalInventoryObject>& inWTClassToAdd, int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    int32 AddItems(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClassToAdd, int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    bool AddItem(const TSubclassOf<UIGS_GlobalInventoryObject>& inItemClassToAdd);
    
};

