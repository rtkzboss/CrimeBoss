#include "IGS_StealthVoiceovers.h"

UIGS_StealthVoiceovers::UIGS_StealthVoiceovers() {
    auto& gen0 = (*this).DefaultGuardRadioReactionsForStrikes;
    gen0.Empty();
    gen0.AddDefaulted(3);
    auto& gen1 = (*this).AmbientReportingEmpToGuard;
    gen1.Empty();
    gen1.AddDefaulted(3);
    auto& gen2 = (*this).AmbientReportingCivUsingPhones;
    gen2.Empty();
    gen2.AddDefaulted(3);
    (*this).ReactionVoiceoversCooldown = 1.500000000e+00f;
    (*this).ReactionVoiceoversDistanceMaxToPlayer = 2.500000000e+03f;
}


