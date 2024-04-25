#include "IGS_PlayerJoinInfo.h"

FIGS_PlayerJoinInfo::FIGS_PlayerJoinInfo() {
    this->CurrentPlayerPawn = NULL;
    this->PlayerState = NULL;
    this->HeisterNumber = 0;
    this->InitialJoiningHeisterNumber = 0;
    this->IsBot = false;
    this->IsDisconnected = false;
    this->IsDead = false;
    this->IsOccupied = false;
    this->PreviouslyUsed = false;
    this->BotSwitchedAfterDeath = false;
    this->HeisterDataID = 0;
    this->bCachedMaxLevel = false;
    this->CachedCharID = EIGS_CharacterID::Char_Gen_Start;
    this->UniqueId = 0;
    this->CachedGenericID = 0;
}

