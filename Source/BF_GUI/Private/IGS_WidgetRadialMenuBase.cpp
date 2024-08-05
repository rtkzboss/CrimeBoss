#include "IGS_WidgetRadialMenuBase.h"
#include "EScreenInputMode.h"
#include "EScreenInputPass.h"
#include "EScreenModifier.h"
#include "EScreenZOrder.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_WidgetRadialMenuBase::UIGS_WidgetRadialMenuBase() {
    (*this).MaxItemCount = 12;
    (*this).MinimalItemCountRadius = 8;
    (*this).RadiusIncreasePerItem = 2.400000000e+01f;
    (*this).ClampRadiusPercentage = 5.000000000e-01f;
    (*this).EffectiveRadiusPercentage = 7.699999809e-01f;
    (*this).AnalogDeadzone = 5.000000075e-02f;
    (*this).SliceSlotSize.X = 1.280000000e+02f;
    (*this).SliceSlotSize.Y = 1.280000000e+02f;
}

void UIGS_WidgetRadialMenuBase::RequestSwitchToWheelType(EIGS_WheelMenuType inType) {
}




int32 UIGS_WidgetRadialMenuBase::GetItemCount() {
    return 0;
}


