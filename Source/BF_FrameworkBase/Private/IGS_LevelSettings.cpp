#include "IGS_LevelSettings.h"

FIGS_LevelSettings::FIGS_LevelSettings() {
    (*this).PlayerSpawnDelay = 0.000000000e+00f;
    (*this).CivilianDensity = 3.000000000e+01f;
    (*this).AmountOfBots = 0;
    (*this).RandomNumberOfBots = 0;
    (*this).TerritoryData = nullptr;
    (*this).WaveManagerData = nullptr;
}

