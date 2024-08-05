#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_GlobalInventoryNotificationWidget.generated.h"

class UIGS_GlobalInventoryObject;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_GlobalInventoryNotificationWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_GlobalInventoryNotificationWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RemovedItemMessage(TSubclassOf<UIGS_GlobalInventoryObject> inObject, int32 inCurrentCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddedItemMessage(TSubclassOf<UIGS_GlobalInventoryObject> inObject, int32 inCurrentCount);
    
};

