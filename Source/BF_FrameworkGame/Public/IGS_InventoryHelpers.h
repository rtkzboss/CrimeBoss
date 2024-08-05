#pragma once
#include "CoreMinimal.h"
#include "EIGS_ItemPropertyFlags.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_GlobalInventoryModifiedDelegateDelegate.h"
#include "IGS_GlobalItemChangedDelegateDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_InventoryHelpers.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_GlobalInventory;
class UIGS_GlobalInventoryObject;
class UIGS_InventoryObjectFramework;
class UIGS_ListInventory;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_InventoryHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_InventoryHelpers();

    UFUNCTION(BlueprintCallable)
    static bool RemoveItemFromGlobalInventory(const UObject* inWCO, TSubclassOf<UIGS_GlobalInventoryObject> inItemClass);
    
    UFUNCTION(BlueprintCallable)
    static bool HasWTInGlobalInventory(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_ListInventory* GetPlayerInventory(AIGS_GameCharacterFramework* inPlayer);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetItemCountInPlayerInventory(AIGS_GameCharacterFramework* inPlayer, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetItemCountInGlobalInventory(const UObject* inWCO, TSubclassOf<UIGS_GlobalInventoryObject> inItemClass);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetGlobalInventoryFreeSlotsCount(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UIGS_GlobalInventory* GetGlobalInventory(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable)
    static float GetCurrentInventoryValue(AIGS_GameCharacterFramework* inPlayer);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesPlayerHaveItemWithPropertyInInventory(AIGS_GameCharacterFramework* inPlayer, EIGS_ItemPropertyFlags inItemFlag);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesPlayerHaveItemInInventory(AIGS_GameCharacterFramework* inPlayer, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass);
    
    UFUNCTION(BlueprintCallable)
    static bool DoesPlayerHaveItemCountInInventory(AIGS_GameCharacterFramework* inPlayer, TSubclassOf<UIGS_InventoryObjectFramework> inItemClass, int32 inCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesGlobalInventoryHaveItem(const UObject* inWCO, TSubclassOf<UIGS_GlobalInventoryObject> inItemClass);
    
    UFUNCTION(BlueprintCallable)
    static bool BindOnGlobalInventoryWTAdded(const UObject* inWCO, FIGS_GlobalItemChangedDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static bool BindOnGlobalInventoryModified(const UObject* inWCO, FIGS_GlobalInventoryModifiedDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static bool BindOnGlobalInventoryItemRemoved(const UObject* inWCO, FIGS_GlobalItemChangedDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static bool BindOnGlobalInventoryItemAdded(const UObject* inWCO, FIGS_GlobalItemChangedDelegate InDelegate);
    
    UFUNCTION(BlueprintCallable)
    static bool AddWTToGlobalInventory(const UObject* inWCO, TSubclassOf<UIGS_GlobalInventoryObject> inWTClass);
    
    UFUNCTION(BlueprintCallable)
    static bool AddItemToGlobalInventory(const UObject* inWCO, TSubclassOf<UIGS_GlobalInventoryObject> inItemClass);
    
    UFUNCTION(BlueprintCallable)
    static bool AddItemsToGlobalInventory(const UObject* inWCO, TSubclassOf<UIGS_GlobalInventoryObject> inItemClass, int32 inCount);
    
};

