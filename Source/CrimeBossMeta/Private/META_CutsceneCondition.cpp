#include "META_CutsceneCondition.h"

UMETA_CutsceneCondition::UMETA_CutsceneCondition() {
    this->CutsceneID = FText::FromString(TEXT("ID_None"));
    this->ShouldBeDelayed = false;
    this->ExpireTimerDays = 1;
    this->ExpirationTimerEnabled = 0;
}

FText UMETA_CutsceneCondition::GetCutsceneID() {
    return FText::GetEmpty();
}



