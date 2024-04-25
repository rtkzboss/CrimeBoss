#include "IGS_WidgetPingRadialMenu.h"

UIGS_WidgetPingRadialMenu::UIGS_WidgetPingRadialMenu() : UUserWidget(FObjectInitializer::Get()) {
    this->MaxItemCount = 12;
    this->MinimalItemCountRadius = 8;
    this->RadiusIncreasePerItem = 24.00f;
    this->ClampRadiusPercentage = 0.50f;
    this->EffectiveRadiusPercentage = 0.50f;
    this->CurrentRadius = 0.00f;
    this->CurrentSliceAngle = 0.00f;
    this->AnalogDeadzone = 0.15f;
    this->RadialMenuCanvasPanel = NULL;
    this->CurrentlyHoveredSlice = NULL;
}


