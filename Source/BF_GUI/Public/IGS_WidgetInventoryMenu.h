#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetInventoryMenu.generated.h"

class AIGS_PlayerControllerRoot;
class UIGS_GUIController;
class UIGS_ListInventory;
class UIGS_WidgetMainInventory;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetInventoryMenu : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_PlayerControllerRoot> OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_GUIController> GUIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetMainInventory* InventoryWidget;
    
public:
    UIGS_WidgetInventoryMenu();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void SetupInventoryContainer(UIGS_ListInventory* inOwningContainer) const;
    
};

