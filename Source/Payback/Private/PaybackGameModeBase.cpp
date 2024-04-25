#include "PaybackGameModeBase.h"
#include "GameMetaTransferComponent.h"
#include "PaybackGameStateBase.h"
#include "PaybackPlayerSwapper.h"

APaybackGameModeBase::APaybackGameModeBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GameStateClass = APaybackGameStateBase::StaticClass();
    this->GuardsCount = 6;
    this->MatchState = TEXT("EnteringMap");
    this->bDelayedStart = false;
    this->NumSpectators = 0;
    this->NumPlayers = 0;
    this->BotControllerClass = NULL;
    this->BotPawnClass = NULL;
    this->QuickPlayBotCount = 3;
    this->SpawnUniqueBotIDsInQuickPlay = true;
    this->numBots = 0;
    this->MinRespawnDelay = 1.00f;
    this->NumTravelingPlayers = 0;
    this->InactivePlayerStateLifeSpan = 300.00f;
    this->MaxInactivePlayers = 16;
    this->m_PlayerSwapper = CreateDefaultSubobject<UPaybackPlayerSwapper>(TEXT("Player Swapper"));
    this->MetaTransferComponent = CreateDefaultSubobject<UGameMetaTransferComponent>(TEXT("MetaTransferComponent"));
}

void APaybackGameModeBase::SwitchToPlayerSpectating(AIGS_PlayerControllerRoot* inSpectatingController) {
}

void APaybackGameModeBase::SwapToNextPlayer(AController* inInstigatorController) {
}

void APaybackGameModeBase::SwapPlayerFromDeadPlayer(AController* inInstigatorController, int32 inBotHeisterNum) {
}

void APaybackGameModeBase::SwapHeisters(int32 inPlayerHeisterNum, int32 inBotHeisterNum) {
}

void APaybackGameModeBase::StartPlayingMatch() {
}

bool APaybackGameModeBase::StartMatchInPreparation() {
    return false;
}

bool APaybackGameModeBase::StartMatchInAction() {
    return false;
}

void APaybackGameModeBase::SpectateNextPlayer(AIGS_PlayerControllerRoot* inSpectatingController) {
}

void APaybackGameModeBase::RestartGame() {
}

bool APaybackGameModeBase::ReadyToStartMatch_Implementation() {
    return false;
}

bool APaybackGameModeBase::ReadyToEndMatch_Implementation() {
    return false;
}

void APaybackGameModeBase::OnRoomPolysGathered() {
}



void APaybackGameModeBase::OnLevelGenerated() {
}


void APaybackGameModeBase::OnBossDiedEvent_Implementation(const EIGS_CharacterID inCharacterID) {
}

void APaybackGameModeBase::OnAllDiedOrDownedEvent_Implementation() {
}


bool APaybackGameModeBase::IsMatchInProgress() const {
    return false;
}

bool APaybackGameModeBase::IsMapGenerationFinished() const {
    return false;
}

FName APaybackGameModeBase::GetMatchState() const {
    return NAME_None;
}

int32 APaybackGameModeBase::GetJoinedHeistersCount(UObject* inWorldContextObject) {
    return 0;
}


int32 APaybackGameModeBase::GetBotIndex(AController* inBotController) {
    return 0;
}

int32 APaybackGameModeBase::GetBotCount() {
    return 0;
}

AController* APaybackGameModeBase::GetBotByIndex(int32 inIndex) {
    return NULL;
}

void APaybackGameModeBase::EndMatch() {
}

void APaybackGameModeBase::DespawnAndSpectate(AIGS_PlayerControllerRoot* InController) {
}

void APaybackGameModeBase::DebugSetMatchAction(bool inIsAction) {
}

void APaybackGameModeBase::AbortMatch() {
}


