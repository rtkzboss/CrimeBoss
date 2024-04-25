#include "IGS_SettingsHelpersLibrary.h"

UIGS_SettingsHelpersLibrary::UIGS_SettingsHelpersLibrary() {
}

bool UIGS_SettingsHelpersLibrary::UseCoverInCombatRange(AIGS_AIControllerGame* Controller) {
    return false;
}

float UIGS_SettingsHelpersLibrary::GetTotalTimeInCover(AIGS_AIControllerGame* Controller) {
    return 0.0f;
}

float UIGS_SettingsHelpersLibrary::GetTimeInCover(AIGS_AIControllerGame* Controller) {
    return 0.0f;
}

float UIGS_SettingsHelpersLibrary::GetStrafeShootingChance(AIGS_AIControllerGame* Controller) {
    return 0.0f;
}

float UIGS_SettingsHelpersLibrary::GetReactionThrashTreshold(AIGS_AIControllerGame* Controller) {
    return 0.0f;
}

float UIGS_SettingsHelpersLibrary::GetReactionTargetFirstTimeSeenCooldown(AIGS_AIControllerGame* Controller) {
    return 0.0f;
}

float UIGS_SettingsHelpersLibrary::GetReactionRollToCoverCooldown(AIGS_AIControllerGame* Controller) {
    return 0.0f;
}

float UIGS_SettingsHelpersLibrary::GetReactionCooldown(AIGS_AIControllerGame* Controller, bool Randomize) {
    return 0.0f;
}

float UIGS_SettingsHelpersLibrary::GetMaxHealthForReaction(AIGS_AIControllerGame* Controller) {
    return 0.0f;
}

float UIGS_SettingsHelpersLibrary::GetMaxHealthForCover(AIGS_AIControllerGame* Controller) {
    return 0.0f;
}

FIGS_FollowSettings UIGS_SettingsHelpersLibrary::GetFollowSettings(AIGS_GameCharacterFramework* Character) {
    return FIGS_FollowSettings{};
}

EIGS_CoverPreset UIGS_SettingsHelpersLibrary::GetCoverPreset(AIGS_AIControllerGame* Controller) {
    return EIGS_CoverPreset::AICS_None;
}

float UIGS_SettingsHelpersLibrary::GetCombatRangeMin(AIGS_AIControllerGame* InController, const bool inRawValue) {
    return 0.0f;
}

float UIGS_SettingsHelpersLibrary::GetCombatRangeMax(AIGS_AIControllerGame* InController, const bool inRawValue) {
    return 0.0f;
}

float UIGS_SettingsHelpersLibrary::GetCombatMoveCooldown(AIGS_AIControllerGame* Controller) {
    return 0.0f;
}


