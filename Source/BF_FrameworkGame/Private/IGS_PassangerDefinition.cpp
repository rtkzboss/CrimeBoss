#include "IGS_PassangerDefinition.h"

FIGS_PassangerDefinition::FIGS_PassangerDefinition() {
    (*this).SeatSocket = NAME_None;
    (*this).SeatVariant = EIGS_CarSeatVariant::CS_Unknown;
    (*this).GetOutDelay.Min = 3.000000119e-01f;
    (*this).GetOutDelay.Max = 1.000000000e+00f;
    (*this).UnitSpecialization = EIGS_UnitSpecialization::US_None;
    (*this).SettingsOverride = nullptr;
}

