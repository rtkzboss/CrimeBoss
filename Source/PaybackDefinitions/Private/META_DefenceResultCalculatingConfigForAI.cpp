#include "META_DefenceResultCalculatingConfigForAI.h"

FMETA_DefenceResultCalculatingConfigForAI::FMETA_DefenceResultCalculatingConfigForAI() {
    (*this).BaseChance = 60;
    (*this).DefenceChancePerMissingTurf = 4;
    (*this).ChanceTweakingPerArmyTierDifference = 15;
    (*this).ChanceTweakingIfItIsLastTileOfGang = 10;
}

