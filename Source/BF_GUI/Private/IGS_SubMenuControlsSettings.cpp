#include "IGS_SubMenuControlsSettings.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"

UIGS_SubMenuControlsSettings::UIGS_SubMenuControlsSettings() {
    (*this).ControllerSensitivityMultiplier = 10;
    (*this).DeadzoneMultiplier = 1.000000000e+02f;
    (*this).MouseSensitivityMultiplier = 1.000000000e+02f;
}


