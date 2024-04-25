#include "PaybackGameStateBase.h"
#include "IGS_AIGrenadeManager.h"
#include "IGS_DissolveManager.h"
#include "IGS_LootBagsManager.h"
#include "IGS_ObjectiveManager.h"
#include "IGS_PickupsManager.h"
#include "IGS_PlayerJoinManager.h"
#include "IGS_SuspicionManager.h"
#include "IGS_TextChatManager.h"
#include "IGS_WorldSpaceWidgetManager.h"
#include "IGS_NetworkComponentMusic.h"
#include "IGS_SubtitleManager.h"
#include "IGS_PropsManager.h"
#include "Net/UnrealNetwork.h"
#include "PaybackWaveManager.h"

APaybackGameStateBase::APaybackGameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->PickupsManager = CreateDefaultSubobject<UIGS_PickupsManager>(TEXT("Pickups Manager"));
    this->R_PlayersSpawned = false;
    this->MoneyGoal = 100.00f;
    this->MoneyGoalThresholdPercentage = 80.00f;
    this->MatchState = TEXT("EnteringMap");
    this->PreviousMatchState = TEXT("EnteringMap");
    this->SuspicionManager = CreateDefaultSubobject<UIGS_SuspicionManager>(TEXT("Suspicion Manager"));
    this->DissolveManager = CreateDefaultSubobject<UIGS_DissolveManager>(TEXT("Dissolve Manager"));
    this->ObjectiveManager2 = CreateDefaultSubobject<UIGS_ObjectiveManager>(TEXT("Objective Manager"));
    this->TextChatManager = CreateDefaultSubobject<UIGS_TextChatManager>(TEXT("Text Chat Manager"));
    this->LootBagsManager = CreateDefaultSubobject<UIGS_LootBagsManager>(TEXT("Loot Bags Manager"));
    this->WorldSpaceWidgetManager = CreateDefaultSubobject<UIGS_WorldSpaceWidgetManager>(TEXT("World Space Widget Manager"));
    this->WaveManager = CreateDefaultSubobject<UPaybackWaveManager>(TEXT("Wave Manager"));
    this->JoinManager = CreateDefaultSubobject<UIGS_PlayerJoinManager>(TEXT("Join Manager"));
    this->SubtitleManager = CreateDefaultSubobject<UIGS_SubtitleManager>(TEXT("Subtitle Manager 2"));
    this->AIGrenadeManager = CreateDefaultSubobject<UIGS_AIGrenadeManager>(TEXT("AI Grenade Manager"));
    this->PropsManager = CreateDefaultSubobject<UIGS_PropsManager>(TEXT("Props Manager"));
    this->MusicComponent = CreateDefaultSubobject<UIGS_NetworkComponentMusic>(TEXT("Music Component"));
    this->ElapsedTime = 0;
}


void APaybackGameStateBase::SetFinalDialogue(UObject* inWCO, const FText inID, AActor* inCharacter) {
}



void APaybackGameStateBase::OnRep_PlayersSpawned() {
}

void APaybackGameStateBase::OnRep_MatchState() {
}

void APaybackGameStateBase::OnRep_ElapsedTime() {
}




void APaybackGameStateBase::Multicast_PrepareRestart_Implementation() {
}

void APaybackGameStateBase::Multicast_OnServerTravel_Implementation() {
}



UIGS_TextChatManager* APaybackGameStateBase::GetTextChatManager() const {
    return NULL;
}

UIGS_SuspicionManager* APaybackGameStateBase::GetSuspicionManager() const {
    return NULL;
}

UIGS_SubtitleManager* APaybackGameStateBase::GetSubtitleManager() const {
    return NULL;
}

UIGS_PropsManager* APaybackGameStateBase::GetPropsManager() const {
    return NULL;
}

UIGS_ObjectiveManager* APaybackGameStateBase::GetObjectiveManager() const {
    return NULL;
}

UIGS_LootBagsManager* APaybackGameStateBase::GetLootBagsManager() const {
    return NULL;
}


void APaybackGameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APaybackGameStateBase, R_PlayersSpawned);
    DOREPLIFETIME(APaybackGameStateBase, MatchState);
    DOREPLIFETIME(APaybackGameStateBase, ElapsedTime);
}


