#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_ErrorNotificationHolderWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_ErrorNotificationHolderWidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
    UIGS_ErrorNotificationHolderWidget();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddErrorMessage(const FText& inErrorMessage);
    
};

