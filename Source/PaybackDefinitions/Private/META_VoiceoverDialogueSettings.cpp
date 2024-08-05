#include "META_VoiceoverDialogueSettings.h"

UMETA_VoiceoverDialogueSettings::UMETA_VoiceoverDialogueSettings() {
    (*this).DelayAfterScreenSwitch = 5.000000000e-01f;
    (*this).DefaultTypeChance = 1.000000000e+00f;
}

FMETA_VODialoguesCommonTypeSettings UMETA_VoiceoverDialogueSettings::GetTypeSettings(FGameplayTag inType) {
    return FMETA_VODialoguesCommonTypeSettings{};
}

float UMETA_VoiceoverDialogueSettings::GetDelayAfterScreenSwitch() {
    return 0.0f;
}


