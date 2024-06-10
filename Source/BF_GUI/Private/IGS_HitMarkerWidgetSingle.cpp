#include "IGS_HitMarkerWidgetSingle.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_HUDVisibilityMode.h"

UIGS_HitMarkerWidgetSingle::UIGS_HitMarkerWidgetSingle() {
}

bool UIGS_HitMarkerWidgetSingle::IsAiming() const {
    return false;
}

FVector2D UIGS_HitMarkerWidgetSingle::GetSightScreenPosition() {
    return FVector2D{};
}

FVector2D UIGS_HitMarkerWidgetSingle::GetSightOffsetFromScreenCenter() {
    return FVector2D{};
}


