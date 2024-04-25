#pragma once
#include "CoreMinimal.h"
#include "EIGS_WorldWidgetType.h"
#include "EIGS_InputAction.h"
#include "EIGS_InputDevice.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Templates/SubclassOf.h"
#include "IGS_GUIUtilityFunctionLibrary.generated.h"

class UCanvasPanelSlot;
class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class BF_GUI_API UIGS_GUIUtilityFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_GUIUtilityFunctionLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static void SetMousePositionInViewport(UObject* inWorldContextObject, int32 inX, int32 inY);
    
    UFUNCTION(BlueprintCallable)
    static void SetMouseCursorToWidget(UCanvasPanelSlot* inSlot);
    
    UFUNCTION(BlueprintCallable)
    static TSubclassOf<UUserWidget> GetWidgetForWorldWidgetType(UObject* inWCO, EIGS_WorldWidgetType inType);
    
    UFUNCTION(BlueprintCallable)
    static bool GetInputActionKeySymbolForCurrentInputDevice(UObject* inWCO, EIGS_InputAction InAction, FName& OutText);
    
    UFUNCTION(BlueprintCallable)
    static bool GetInputActionKeySymbol(UObject* inWCO, EIGS_InputAction InAction, FName& OutText, EIGS_InputDevice inInputDevice);
    
    UFUNCTION(BlueprintCallable)
    static bool GetAlternativeInputActionKeySymbol(UObject* inWCO, EIGS_InputAction InAction, FName& OutText, EIGS_InputDevice inInputDevice);
    
};

