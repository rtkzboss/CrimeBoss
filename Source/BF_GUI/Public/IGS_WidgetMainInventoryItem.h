#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetMainInventoryItem.generated.h"

class AIGS_PlayerControllerRoot;
class UIGS_InventoryObjectFramework;
class UIGS_ListInventory;
class UImage;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetMainInventoryItem : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_InventoryObjectFramework> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemSlotID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ItemImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* WieldedText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* StackSizeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_PlayerControllerRoot> OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_ListInventory> OwningPlayerInventory;
    
public:
    UIGS_WidgetMainInventoryItem();

    UFUNCTION(BlueprintCallable)
    void TemporaryOnClickItem();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupInventory(UIGS_ListInventory* inInventory);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetItemWielded(bool inIsWielded) const;
    
};

