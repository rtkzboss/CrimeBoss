#include "META_TutorialTextDatabase.h"

UMETA_TutorialTextDatabase::UMETA_TutorialTextDatabase() {
}

void UMETA_TutorialTextDatabase::ScreenSwitchedTo(FGameplayTag inScreenTag) {
}

void UMETA_TutorialTextDatabase::RemoveActiveTag(FGameplayTag inTag, bool inExactMatch) {
}

void UMETA_TutorialTextDatabase::RegisterWidget(UMETA_TutorialWidgetBase* InWidget) {
}

bool UMETA_TutorialTextDatabase::IsTagsActive(FGameplayTagContainer inTagContainer, bool inExactMatch) {
    return false;
}

bool UMETA_TutorialTextDatabase::IsTagActive(FGameplayTag inTag, bool inExactMatch) {
    return false;
}

bool UMETA_TutorialTextDatabase::IsAnyTagsActive(FGameplayTagContainer inTagContainer, bool inExactMatch) {
    return false;
}

FMETA_TutorialTextTableRow UMETA_TutorialTextDatabase::GetTutorialTextData(UObject* inWCO, const FGameplayTag inTag, bool& outSucceeded) {
    return FMETA_TutorialTextTableRow{};
}

void UMETA_TutorialTextDatabase::AddActiveTag(FGameplayTag inTag, bool inPersistent) {
}


