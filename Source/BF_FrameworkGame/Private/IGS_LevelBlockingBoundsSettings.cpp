#include "IGS_LevelBlockingBoundsSettings.h"
#include "NavAreas/NavArea_Obstacle.h"

UIGS_LevelBlockingBoundsSettings::UIGS_LevelBlockingBoundsSettings() {
    this->NoHeisterAreaClass = UNavArea_Obstacle::StaticClass();
}


