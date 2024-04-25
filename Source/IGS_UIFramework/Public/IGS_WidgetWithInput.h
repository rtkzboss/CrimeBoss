#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "EIGS_InputDevice.h"
#include "EIGS_InputThumbstickType.h"
#include "UObject/NoExportTypes.h"
#include "IGS_Widget.h"
#include "IGS_WidgetWithInput.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class IGS_UIFRAMEWORK_API UIGS_WidgetWithInput : public UIGS_Widget {
    GENERATED_BODY()
public:
    UIGS_WidgetWithInput();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnMenuInputReleased(EIGS_InputAction InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnMenuInputPressed(EIGS_InputAction InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputDeviceChanged(EIGS_InputDevice newDevice);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnAnalogInput(EIGS_InputThumbstickType Type, const FVector2D& Value);
    
};

