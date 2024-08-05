#include "META_GameStateBase.h"
#include "IGS_SubtitleManager.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Net/UnrealNetwork.h"

AMETA_GameStateBase::AMETA_GameStateBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SubtitleManager = CreateDefaultSubobject<UIGS_SubtitleManager>(TEXT("Subtitle Manager"));
}

void AMETA_GameStateBase::StartSequence(FGameplayTag inSequenceTag) {
}

void AMETA_GameStateBase::ServerInitialize_Internal_Implementation() {
}

void AMETA_GameStateBase::Server_Initialize_Implementation() {
}

void AMETA_GameStateBase::OnRep_bInitialized() {
}

bool AMETA_GameStateBase::IsSequenceInProgress() const {
    return false;
}



void AMETA_GameStateBase::ExecuteNextSequenceItem() {
}

void AMETA_GameStateBase::ClientInitialize_Internal_Implementation() {
}

void AMETA_GameStateBase::Client_Initialize_Implementation() {
}

void AMETA_GameStateBase::AddSequence(FMETA_Sequence& InSequence) {
}

void AMETA_GameStateBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AMETA_GameStateBase, bInitialized);
}


