#include "META_GangPriorityChangeInfo.h"

FMETA_GangPriorityChangeInfo::FMETA_GangPriorityChangeInfo() {
    (*this).ChangeWhenTileLost = 10;
    (*this).ChangeWhenTileDefended = 15;
    (*this).ChangeWhenPlayerLosesTile = 10;
    (*this).ChangeWhenPlayerDefendsTile = 10;
    (*this).ChangeWhenNewDay = -15;
}

