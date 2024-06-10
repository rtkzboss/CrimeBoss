#include "IGS_LootHolderBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_LootHolderBase::AIGS_LootHolderBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MaxAIAttempts = 2;
}

bool AIGS_LootHolderBase::ShouldBotBreakToOpen() const {
    return false;
}

void AIGS_LootHolderBase::SetLootHolderOpened(AActor* inInstigator) {
}

void AIGS_LootHolderBase::ReportLootCollectionConnected() {
}

void AIGS_LootHolderBase::OpenByAI(AActor* inInstigator) {
}

void AIGS_LootHolderBase::OnLockPicked(AIGS_GameCharacterFramework* inInstigator, const bool inSuccess) {
}

void AIGS_LootHolderBase::OnInteracted(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_LootHolderBase::OnComponentBroken(AActor* inDmgCauser, const bool inOpen) {
}


bool AIGS_LootHolderBase::IsOpened() const {
    return false;
}

bool AIGS_LootHolderBase::IsBroken() const {
    return false;
}

bool AIGS_LootHolderBase::CanBeOpenedSilently() const {
    return false;
}


