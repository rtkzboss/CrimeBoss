#pragma once
#include "CoreMinimal.h"
#include "IGS_Screen.h"
#include "IGS_BlackScreenWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_BlackScreenWidget : public UIGS_Screen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ShowBlackScreen;
    
    UIGS_BlackScreenWidget();

    UFUNCTION(BlueprintCallable)
    void ToggleGlobalInvalidation(bool inEnabled);
    
};

