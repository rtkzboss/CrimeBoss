#include "META_HeatHeistsData.h"

FMETA_HeatHeistsData::FMETA_HeatHeistsData() {
    (*this).MissionDoneInStealth = -5;
    (*this).MissionFailed = 10;
    (*this).MissionDoneWith1Star = 5;
    (*this).MissionDoneWith2Stars = 0;
    (*this).MissionDoneWith3Stars = -5;
    (*this).ForEvery5PoliceCasualities = 1;
    (*this).PerCivilianCasualty = 5;
    (*this).MakingTheTruceWithEnemyGang = -40;
    (*this).NoTurfAttackAttamepWhenDayEnds = -40;
    (*this).AnyTurfAttackAttempt = -10;
    (*this).DetectiveKilled = 50;
}

