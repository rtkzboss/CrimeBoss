#include "META_VoiceoverDialogueSettings.h"

UMETA_VoiceoverDialogueSettings::UMETA_VoiceoverDialogueSettings() {
    this->DelayAfterScreenSwitch = 0.50f;
    this->DefaultTypePriority = 0;
    this->DefaultTypeChance = 1.00f;
}

FMETA_VODialoguesCommonTypeSettings UMETA_VoiceoverDialogueSettings::GetTypeSettings(FGameplayTag inType) {
    return FMETA_VODialoguesCommonTypeSettings{};
}

float UMETA_VoiceoverDialogueSettings::GetDelayAfterScreenSwitch() {
    return 0.0f;
}


