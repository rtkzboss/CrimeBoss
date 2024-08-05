#pragma once
#include "CoreMinimal.h"
#include "IGS_ListItemHolder.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_SlotHighlight.h"
#include "Templates/SubclassOf.h"
#include "IGS_WidgetMainInventory.generated.h"

class UIGS_ListInventory;
class UIGS_WidgetDragItem;
class UIGS_WidgetMainInventoryItem;
class UScrollBox;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetMainInventory : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* WeaponsScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* GadgetsScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ItemsScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* LootScrollBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WidgetMainInventoryItem> WidgetMainInventoryItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WidgetDragItem> WidgetDragItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_ListInventory* OwningInventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* InventoryCategorySwitcher;
    
public:
    UIGS_WidgetMainInventory();

    UFUNCTION(BlueprintCallable)
    void Setup(UIGS_ListInventory* inOwningContainer);
    
    UFUNCTION(BlueprintCallable)
    void SetHighlightItem(int32 inSlotId, EIGS_SlotHighlight inHighlight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSlotBind(int32 inSlotNumber);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshSlotBinds();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemWielded(const FIGS_ListItemHolder& inItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemRemoved(const FIGS_ListItemHolder& inItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnItemAdded(const FIGS_ListItemHolder& inItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContainerItemsUpdated(const TArray<FIGS_ListItemHolder>& inItems);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitItem(FIGS_ListItemHolder inHolder);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_ListInventory* GetOwningContainer() const;
    
};

