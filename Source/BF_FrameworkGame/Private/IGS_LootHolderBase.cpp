#include "IGS_LootHolderBase.h"

AIGS_LootHolderBase::AIGS_LootHolderBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LootCollection = NULL;
    this->AttachableComponent = NULL;
    this->OpenManually = false;
    this->InteractOpenDelay = 0.00f;
    this->MaxAIAttempts = 2;
    this->AIStealthLooting = EIGS_AIStealthLootBehavior::Always;
    this->BreakToOpen = false;
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


