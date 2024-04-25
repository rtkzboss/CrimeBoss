#include "IGS_StealthVoiceovers.h"

UIGS_StealthVoiceovers::UIGS_StealthVoiceovers() {
    this->DefaultGuardRadioReactionsForStrikes.AddDefaulted(3);
    this->AmbientReportingEmpToGuard.AddDefaulted(3);
    this->AmbientReportingCivUsingPhones.AddDefaulted(3);
    this->ReactionVoiceoversCooldown = 1.50f;
    this->ReactionVoiceoversDistanceMaxToPlayer = 2500.00f;
}


