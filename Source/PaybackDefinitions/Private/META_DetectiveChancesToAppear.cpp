#include "META_DetectiveChancesToAppear.h"

FMETA_DetectiveChancesToAppear::FMETA_DetectiveChancesToAppear() {
    (*this).BaseChance = 0;
    (*this).MissionIsOnTileWithDetective = 100;
    (*this).MissionIsOnNeighbourTileWithDetective = 50;
    (*this).DetectiveIsOnAnyTileOnMap = 25;
}

