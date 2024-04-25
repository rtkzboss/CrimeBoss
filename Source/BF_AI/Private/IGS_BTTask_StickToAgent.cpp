#include "IGS_BTTask_StickToAgent.h"

UIGS_BTTask_StickToAgent::UIGS_BTTask_StickToAgent() {
    this->NodeName = TEXT("Stick To Agent");
    this->RecalculateTimeMin = 1.10f;
    this->RecalculateTimeMax = 1.30f;
    this->QueryTemplate = NULL;
}


