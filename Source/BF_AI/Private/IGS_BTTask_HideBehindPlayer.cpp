#include "IGS_BTTask_HideBehindPlayer.h"

UIGS_BTTask_HideBehindPlayer::UIGS_BTTask_HideBehindPlayer() {
    this->NodeName = TEXT("Hide Behind Player");
    this->RecalculateTimeMin = 1.10f;
    this->RecalculateTimeMax = 1.30f;
    this->QueryTemplate = NULL;
}


