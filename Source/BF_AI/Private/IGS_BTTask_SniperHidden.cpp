#include "IGS_BTTask_SniperHidden.h"

UIGS_BTTask_SniperHidden::UIGS_BTTask_SniperHidden() {
    (*this).Cooldown.Min = 3.000000000e+00f;
    (*this).Cooldown.Max = 5.000000000e+00f;
    (*this).MaxThreatToFinish = 2.000000030e-01f;
    (*this).NodeName = TEXT("Sniper Hidden");
}


