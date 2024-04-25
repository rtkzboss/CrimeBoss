#include "IGS_BTTask_FollowPlayer.h"

UIGS_BTTask_FollowPlayer::UIGS_BTTask_FollowPlayer() {
    this->NodeName = TEXT("Follow player");
    this->RecalculateTimeMin = 1.10f;
    this->RecalculateTimeMax = 1.30f;
    this->QueryTemplate = NULL;
}


