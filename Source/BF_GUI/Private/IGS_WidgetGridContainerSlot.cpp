#include "IGS_WidgetGridContainerSlot.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetGridContainerSlot::UIGS_WidgetGridContainerSlot() : UUserWidget(FObjectInitializer::Get()) {
    (*this).NormalColor.R = 5.000000000e-01f;
    (*this).NormalColor.G = 5.000000000e-01f;
    (*this).NormalColor.B = 5.000000000e-01f;
    (*this).NormalColor.A = 1.000000000e+00f;
    (*this).NormalOccupiedColor.R = 5.000000000e-01f;
    (*this).NormalOccupiedColor.G = 5.000000000e-01f;
    (*this).NormalOccupiedColor.B = 5.000000000e-01f;
    (*this).NormalOccupiedColor.A = 1.000000000e+00f;
    (*this).HoverColor.R = 1.000000000e+00f;
    (*this).HoverColor.G = 1.000000000e+00f;
    (*this).HoverColor.B = 1.000000000e+00f;
    (*this).HoverColor.A = 1.000000000e+00f;
    (*this).HoverOccupiedColor.R = 1.000000000e+00f;
    (*this).HoverOccupiedColor.G = 1.000000000e+00f;
    (*this).HoverOccupiedColor.B = 1.000000000e+00f;
    (*this).HoverOccupiedColor.A = 1.000000000e+00f;
    (*this).DropOkColor.G = 1.000000000e+00f;
    (*this).DropOkColor.A = 1.000000000e+00f;
    (*this).DropErrorColor.R = 8.962693214e-01f;
    (*this).DropErrorColor.G = 3.324515224e-01f;
    (*this).DropErrorColor.B = 6.048833020e-03f;
    (*this).DropErrorColor.A = 1.000000000e+00f;
    (*this).ContainerSlotRow = -1;
    (*this).ContainerSlotColumn = -1;
    (*this).ContainerSlotId = -1;
    (*this).ItemRootSlotId = -1;
}

void UIGS_WidgetGridContainerSlot::SetIsOccupied(bool inOccupied) {
}

bool UIGS_WidgetGridContainerSlot::GetIsOccupied() const {
    return false;
}


