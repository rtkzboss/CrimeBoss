#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "CommonButtonBase.h"
#include "IGS_WidgetButtonEventBlueprintSignatureDelegate.h"
#include "IGS_WidgetButtonWithReferenceEventBlueprintSignatureDelegate.h"
#include "IGS_WidgetButtonSimple.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetButtonSimple : public UCommonButtonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_InputAction BoundInputAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WidgetButtonWithReferenceEventBlueprintSignature OnClickedWithReferenceEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WidgetButtonEventBlueprintSignature OnReleasedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WidgetButtonEventBlueprintSignature OnClickedEvent;
    
    UIGS_WidgetButtonSimple();

    UFUNCTION(BlueprintCallable)
    void SimulateClick();
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool inSelected);
    
};

