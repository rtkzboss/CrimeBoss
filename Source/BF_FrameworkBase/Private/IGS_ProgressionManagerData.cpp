#include "IGS_ProgressionManagerData.h"

UIGS_ProgressionManagerData::UIGS_ProgressionManagerData() {
    this->InitialLevel = 1;
    this->UseLevelCap = false;
    this->LevelCap = 0;
    this->LevelUpCount = 1;
    this->MissionNotSupportingStars = 15.00f;
    this->WithHumanPlayers = 5.00f;
}


