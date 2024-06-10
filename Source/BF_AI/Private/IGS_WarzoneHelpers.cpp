#include "IGS_WarzoneHelpers.h"

UIGS_WarzoneHelpers::UIGS_WarzoneHelpers() {
}

void UIGS_WarzoneHelpers::WarzoneInitialSpawn(UObject* inWCO, TArray<AIGS_AIEnemyGroupSpawner*> inFriendlySpawners, int32 inFriendliesCount, TArray<AIGS_AIEnemyGroupSpawner*> inEnemySpawners, int32 inEnemyCounts, float spawnRectLenghtAllies, float spawnRectWidthAllies, float playerLenghtRatio, float spawnRectLenghtEnemies, float spawnRectWidthEnemies, float rectDistancesMin, float rectDistancesMax) {
}

TArray<AIGS_GameCharacterFramework*> UIGS_WarzoneHelpers::GetWarzoneAttackGroupAddon(AIGS_GameCharacterFramework* inLeader, TArray<AIGS_GameCharacterFramework*> inCurrGroup, float inDistance, int32 inCount) {
    return TArray<AIGS_GameCharacterFramework*>();
}

int32 UIGS_WarzoneHelpers::CallWarzoneReinforcment(UObject* inWCO, int32 inCount, bool inAllies) {
    return 0;
}

int32 UIGS_WarzoneHelpers::CallWarzoneCaptain(UObject* inWCO, int32 inCount) {
    return 0;
}


