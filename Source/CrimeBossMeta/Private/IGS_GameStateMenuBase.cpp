#include "IGS_GameStateMenuBase.h"

AIGS_GameStateMenuBase::AIGS_GameStateMenuBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->EconomyBaseData = NULL;
    this->CommonBaseData = NULL;
}

void AIGS_GameStateMenuBase::SetUserDifficulty(EIGS_UserDifficulty inUserDifficulty) {
}

void AIGS_GameStateMenuBase::SetMPLobbyType(EIGS_MPLobbyType inMPLobbyType) {
}

void AIGS_GameStateMenuBase::SetLobbyVisibility(EMETA_LobbyVisibilityType inLobbyVisibility) {
}

void AIGS_GameStateMenuBase::SetIsPlayingChain(bool bIsChainMission) {
}

void AIGS_GameStateMenuBase::SetHeisterData(TArray<FCommonHeisterData> inHeisters) {
}

void AIGS_GameStateMenuBase::SetEnemyData(EIGS_GangsterVariationType inPrimaryEnemyVariation, EIGS_AITiers inPrimaryEnemyTier, EIGS_AITiers inAllyTier, EIGS_AITiers inSWATTier) {
}

void AIGS_GameStateMenuBase::PostInitGameData() {
}



void AIGS_GameStateMenuBase::GetMenuSlotBySlotIndex(int32 inSlotIndex, AIGS_MenuSlotBase*& outMenuSlot, bool& outFound) {
}

void AIGS_GameStateMenuBase::GetMenuSlotByPlayerState(APlayerState* inPlayerState, AIGS_MenuSlotBase*& outMenuSlot, bool& outFound) {
}

void AIGS_GameStateMenuBase::GetLocalMenuSlot(AIGS_MenuSlotBase*& outMenuSlot, bool& outFound) {
}

UMETA_LevelActorsManagerComponent* AIGS_GameStateMenuBase::GetLevelActorsManagerComponent_Implementation() {
    return NULL;
}


void AIGS_GameStateMenuBase::ClearHeisterData() {
}

void AIGS_GameStateMenuBase::AddHeisterData(FCommonHeisterData inHeister) {
}


