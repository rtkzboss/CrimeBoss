#include "IGS_WidgetButtonSimple.h"
#include "Input/CommonInputMode.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetButtonSimple::UIGS_WidgetButtonSimple() {
    (*this).BoundInputAction = EIGS_InputAction::IA_UNKNOWN;
}

void UIGS_WidgetButtonSimple::SimulateClick() {
}

void UIGS_WidgetButtonSimple::SetSelected(bool inSelected) {
}


