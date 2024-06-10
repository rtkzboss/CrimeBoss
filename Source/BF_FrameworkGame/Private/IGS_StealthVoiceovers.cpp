#include "IGS_StealthVoiceovers.h"

UIGS_StealthVoiceovers::UIGS_StealthVoiceovers() {
    auto& gen630 = (*this).DefaultGuardRadioReactionsForStrikes;
    gen630.Empty();
    gen630.AddDefaulted(3);
    auto& gen631 = (*this).AmbientReportingEmpToGuard;
    gen631.Empty();
    gen631.AddDefaulted(3);
    auto& gen632 = (*this).AmbientReportingCivUsingPhones;
    gen632.Empty();
    gen632.AddDefaulted(3);
    (*this).ReactionVoiceoversCooldown = 1.500000000e+00f;
    (*this).ReactionVoiceoversDistanceMaxToPlayer = 2.500000000e+03f;
}


