#include "META_AILastTileStrengthConfig.h"

FMETA_AILastTileStrengthConfig::FMETA_AILastTileStrengthConfig() {
    (*this).AI_ArmySizeForPlayersAttackOnLastTile.Min = 0;
    (*this).AI_ArmySizeForPlayersAttackOnLastTile.Max = 0;
    (*this).PlayersAttack_MaxConcurrentlySpawnedAISoldiersOnLastTile = 0;
    (*this).PlayersAttack_MaxConcurrentlySpawnedPlayerSoldiersOnLastTile = 0;
}

