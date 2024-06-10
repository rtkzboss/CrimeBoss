#include "IGS_HitMarkerWidget.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_HUDVisibilityMode.h"

UIGS_HitMarkerWidget::UIGS_HitMarkerWidget() {
}




bool UIGS_HitMarkerWidget::IsAiming() const {
    return false;
}

FVector2D UIGS_HitMarkerWidget::GetSightScreenPosition() {
    return FVector2D{};
}

FVector2D UIGS_HitMarkerWidget::GetSightOffsetFromScreenCenter() {
    return FVector2D{};
}

void UIGS_HitMarkerWidget::BindToSimpleShooter(UIGS_SimpleHitScanShooter* inShooter) {
}


