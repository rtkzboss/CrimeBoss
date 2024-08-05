#include "IGS_GUIUtilityFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UIGS_GUIUtilityFunctionLibrary::UIGS_GUIUtilityFunctionLibrary() {
}

void UIGS_GUIUtilityFunctionLibrary::SetMousePositionInViewport(UObject* inWorldContextObject, int32 inX, int32 inY) {
}

void UIGS_GUIUtilityFunctionLibrary::SetMouseCursorToWidget(UCanvasPanelSlot* inSlot) {
}

TSubclassOf<UUserWidget> UIGS_GUIUtilityFunctionLibrary::GetWidgetForWorldWidgetType(UObject* inWCO, EIGS_WorldWidgetType inType) {
    return NULL;
}

bool UIGS_GUIUtilityFunctionLibrary::GetInputActionKeySymbolForCurrentInputDevice(UObject* inWCO, EIGS_InputAction InAction, FName& OutText) {
    return false;
}

bool UIGS_GUIUtilityFunctionLibrary::GetInputActionKeySymbol(UObject* inWCO, EIGS_InputAction InAction, FName& OutText, EIGS_InputDevice inInputDevice) {
    return false;
}

bool UIGS_GUIUtilityFunctionLibrary::GetAlternativeInputActionKeySymbol(UObject* inWCO, EIGS_InputAction InAction, FName& OutText, EIGS_InputDevice inInputDevice) {
    return false;
}


