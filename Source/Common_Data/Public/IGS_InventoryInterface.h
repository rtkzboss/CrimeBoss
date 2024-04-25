#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EIGS_ItemPropertyFlags.h"
#include "IGS_InventoryObjectUniversalData.h"
#include "Templates/SubclassOf.h"
#include "IGS_InventoryInterface.generated.h"

class UIGS_InventoryObjectFramework;
class UObject;

UINTERFACE(Blueprintable)
class COMMON_DATA_API UIGS_InventoryInterface : public UInterface {
    GENERATED_BODY()
};

class COMMON_DATA_API IIGS_InventoryInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool WieldItem(int32 inSlotId);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void TransferItems(UObject* inInterfaceObject);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool SelectSecondaryWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveItemOfClass(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveItemByIndex(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveItem(UIGS_InventoryObjectFramework* inItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveEquipment(UIGS_InventoryObjectFramework* inItem, bool inSilentRemove);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool RemoveAllItems(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsWielding(UIGS_InventoryObjectFramework* inItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool HasItemWithProperty(EIGS_ItemPropertyFlags inProperty);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_InventoryObjectFramework* GetSecondaryWeapon();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<TSubclassOf<UIGS_InventoryObjectFramework>> GetPocketLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetMaxBagCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UIGS_InventoryObjectFramework*> GetItems(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetItemIndex(UIGS_InventoryObjectFramework* inItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetItemCount(TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSubclassOf<UIGS_InventoryObjectFramework> GetItemByIndex(int32 inIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UIGS_InventoryObjectFramework*> GetAllItems();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearPocketLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearInventory();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ClearBonusPocketLoot();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanAddItem(TSubclassOf<UIGS_InventoryObjectFramework> inItemToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddPocketLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddItemWithData(TSubclassOf<UIGS_InventoryObjectFramework> inItemToAdd, UIGS_InventoryObjectFramework*& outItemAdded, FIGS_InventoryObjectUniversalData inUniversalData);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddItemToFirstAvailableSlot(UIGS_InventoryObjectFramework* inItem);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 AddItems(TSubclassOf<UIGS_InventoryObjectFramework> inItemToAdd, int32 inCount, TArray<UIGS_InventoryObjectFramework*>& outItemsAdded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool AddItem(TSubclassOf<UIGS_InventoryObjectFramework> inItemToAdd, UIGS_InventoryObjectFramework*& outItemAdded);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddBonusPocketLoot(TSubclassOf<UIGS_InventoryObjectFramework> inItemToAdd);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void AddAlreadyExistingItem(UIGS_InventoryObjectFramework* inItemToAdd);
    
};

