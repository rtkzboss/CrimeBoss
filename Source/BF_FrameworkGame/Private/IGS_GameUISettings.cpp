#include "IGS_GameUISettings.h"

UIGS_GameUISettings::UIGS_GameUISettings() {
    auto& gen0 = (*this).AllowedMenuInputActions;
    gen0.Empty();
    gen0.AddDefaulted(20);
    (*this).LeftThumbstickMenuThreshold = 5.000000000e-01f;
}


