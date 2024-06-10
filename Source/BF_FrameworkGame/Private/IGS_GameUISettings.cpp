#include "IGS_GameUISettings.h"

UIGS_GameUISettings::UIGS_GameUISettings() {
    auto& gen601 = (*this).AllowedMenuInputActions;
    gen601.Empty();
    gen601.AddDefaulted(20);
    (*this).LeftThumbstickMenuThreshold = 5.000000000e-01f;
}


