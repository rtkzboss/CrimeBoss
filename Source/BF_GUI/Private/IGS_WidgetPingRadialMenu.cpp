#include "IGS_WidgetPingRadialMenu.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetPingRadialMenu::UIGS_WidgetPingRadialMenu() : UUserWidget(FObjectInitializer::Get()) {
    (*this).MaxItemCount = 12;
    (*this).MinimalItemCountRadius = 8;
    (*this).RadiusIncreasePerItem = 2.400000000e+01f;
    (*this).ClampRadiusPercentage = 5.000000000e-01f;
    (*this).EffectiveRadiusPercentage = 5.000000000e-01f;
    (*this).AnalogDeadzone = 1.500000060e-01f;
    (*this).SliceSlotSize.X = 1.280000000e+02f;
    (*this).SliceSlotSize.Y = 1.280000000e+02f;
}


