#include "IGS_GameUISettings.h"

UIGS_GameUISettings::UIGS_GameUISettings() {
    auto& gen0 = (*this).AllowedMenuInputActions;
    gen0.Empty();
    gen0.AddDefaulted(25);
    (*this).LeftThumbstickMenuThreshold = 5.000000000e-01f;
    (*this).ChatWheelDataTable = FSoftObjectPath(TEXT("/Game/00_Main/UI/HUD/DT_ChatWheelDefinitions.DT_ChatWheelDefinitions"), TEXT(""));
    (*this).ChatWheelActionLimit = 3;
    (*this).ChatWheelActionLimitTime = 5.000000000e+00f;
    (*this).ChatWheelCooldownTime = 5.000000000e+00f;
    (*this).IconVisibilityDuration = 5.000000000e+00f;
}


