#include "META_CutsceneUIData.h"

FMETA_CutsceneUIData::FMETA_CutsceneUIData() {
    this->Partner = EMETA_Partner::None;
    this->CanStartDelayed = false;
    this->ShouldExpire = false;
    this->DaysToExpire = 0;
    this->GraphRef = NULL;
    this->OriginalID = 0;
    this->ExpiredID = 0;
}

