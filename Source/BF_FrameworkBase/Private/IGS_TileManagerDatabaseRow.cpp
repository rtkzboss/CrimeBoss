#include "IGS_TileManagerDatabaseRow.h"

FIGS_TileManagerDatabaseRow::FIGS_TileManagerDatabaseRow() {
    this->HasSunsetLightScenario = false;
    this->SunsetLightScenarioLoadDynamic = false;
    this->HasDuskLightScenario = false;
    this->DuskLightScenarioLoadDynamic = false;
    this->NumberOfExternalConnectionPoints = 0;
    this->NumberOfSpawnPoints = 0;
    this->NumberOfNavMeshBounds = 0;
    this->IsEnabled = false;
    this->NumberOfPlayerSpawns = 0;
    this->NumberOfBpRooms = 0;
    this->NumberOfHelicopers = 0;
}

