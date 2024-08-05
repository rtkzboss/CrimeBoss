#pragma once
#include "CoreMinimal.h"
#include "EIGS_InfoMessageType.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_InfoMessageManagerWidget.generated.h"

class UIGS_GlobalInventoryObject;
class UIGS_InfoMessagesManager;
class UIGS_InventoryObjectFramework;
class UIGS_ListInventory;
class UIGS_SuspicionManager;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_InfoMessageManagerWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_SuspicionManager> SuspicionManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_InfoMessagesManager> InfoMessagesManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_ListInventory> PlayerInventory;
    
public:
    UIGS_InfoMessageManagerWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddItemMessage(UIGS_InventoryObjectFramework* inItem);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddInfoMessage(const FText& InText, EIGS_InfoMessageType inMessageType, float inDuration, int32 inHeisterNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddGlobalItemMessage(TSubclassOf<UIGS_GlobalInventoryObject> inClass);
    
};

