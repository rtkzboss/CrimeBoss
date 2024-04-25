#include "IGS_StealthVoiceoversInstance.h"

UIGS_StealthVoiceoversInstance::UIGS_StealthVoiceoversInstance() {
    this->StealthVoiceovers = NULL;
}

float UIGS_StealthVoiceoversInstance::GetReactionVoiceoversDistanceMaxToPlayer() const {
    return 0.0f;
}

float UIGS_StealthVoiceoversInstance::GetReactionVoiceoversCooldown() const {
    return 0.0f;
}

FText UIGS_StealthVoiceoversInstance::GetIdle() const {
    return FText::GetEmpty();
}

FText UIGS_StealthVoiceoversInstance::GetGangstersOffenceReaction() const {
    return FText::GetEmpty();
}

FText UIGS_StealthVoiceoversInstance::GetGangstersBumpInto() const {
    return FText::GetEmpty();
}

TArray<FText> UIGS_StealthVoiceoversInstance::GetDefaultGuardRadioReactionsForStrikes() const {
    return TArray<FText>();
}

TArray<FText> UIGS_StealthVoiceoversInstance::GetAmbientReportingEmpToGuard() const {
    return TArray<FText>();
}

TArray<FText> UIGS_StealthVoiceoversInstance::GetAmbientReportingCivUsingPhones() const {
    return TArray<FText>();
}

FText UIGS_StealthVoiceoversInstance::GetAmbientReportingCivToGuard() const {
    return FText::GetEmpty();
}

FText UIGS_StealthVoiceoversInstance::GetAmbientReportingCivToEmp() const {
    return FText::GetEmpty();
}

FText UIGS_StealthVoiceoversInstance::GetAmbientPanicShootout() const {
    return FText::GetEmpty();
}

FText UIGS_StealthVoiceoversInstance::GetAmbientPanicAimAt() const {
    return FText::GetEmpty();
}

FText UIGS_StealthVoiceoversInstance::GetAmbientPanic() const {
    return FText::GetEmpty();
}

FText UIGS_StealthVoiceoversInstance::GetAmbientInspect() const {
    return FText::GetEmpty();
}

FText UIGS_StealthVoiceoversInstance::GetAmbientDutyPlayer() const {
    return FText::GetEmpty();
}

FText UIGS_StealthVoiceoversInstance::GetAmbientDutyItem() const {
    return FText::GetEmpty();
}


