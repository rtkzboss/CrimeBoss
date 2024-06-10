#include "META_ArmySizeConfigForAI.h"

FMETA_ArmySizeConfigForAI::FMETA_ArmySizeConfigForAI() {
    (*this).AI_ArmySizeForPlayersAttack.Min = 0;
    (*this).AI_ArmySizeForPlayersAttack.Max = 0;
    (*this).AI_ArmySizeForPlayersDefense.Min = 0;
    (*this).AI_ArmySizeForPlayersDefense.Max = 0;
    (*this).PlayersAttack_MaxConcurrentlySpawnedAISoldiers = 0;
    (*this).PlayersAttack_MaxConcurrentlySpawnedPlayerSoldiers = 0;
    (*this).PlayersDefense_MaxConcurrentlySpawnedAISoldiers = 0;
    (*this).PlayersDefense_MaxConcurrentlySpawnedPlayerSoldiers = 0;
}

