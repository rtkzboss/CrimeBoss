#include "IGS_LootCollectionBase.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_LootCollectionBase::AIGS_LootCollectionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    this->CurrentValue = 0.00f;
    this->CurrentWeight = 0;
    this->TotalValue = 0.00f;
    this->TotalLootValue = 0.00f;
    this->TotalMoneyValue = 0.00f;
    this->TotalBagSize = 0.00f;
    this->LootCollectionInteraction = NULL;
    this->LootingCharacter = NULL;
    this->LootSuggestedFor = NULL;
    this->bIsCosmetic = false;
    this->DefaultSceneRoot = (USceneComponent*)RootComponent;
    this->bIsEmpty = false;
    this->bIsShineEnabled = true;
    this->m_AILootingBehavior = EIGS_AILootingBehavior::Allways;
}

void AIGS_LootCollectionBase::TestLootPosition() {
}

void AIGS_LootCollectionBase::SortLoot() {
}

void AIGS_LootCollectionBase::SetLootingCharacter(AIGS_GameCharacterFramework* inLootingCharacter) {
}

void AIGS_LootCollectionBase::SetLootHolder(AIGS_LootHolderBase* inLootHolder) {
}

void AIGS_LootCollectionBase::SetIsShineEnabled(bool inEnabled) {
}

void AIGS_LootCollectionBase::SetIsInCase(bool inIsInCase) {
}

void AIGS_LootCollectionBase::SetAILootingBehvaior(EIGS_AILootingBehavior inLootingBehavior) {
}

void AIGS_LootCollectionBase::RemoveAllowedCharacter(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_LootCollectionBase::RegisterLootComponent(UIGS_LootItemBaseComponent* inLootComponent) {
}

void AIGS_LootCollectionBase::OnRep_LootItems() {
}

void AIGS_LootCollectionBase::OnRep_bIsEmpty() {
}

void AIGS_LootCollectionBase::OnNavigationBuildFinished(ANavigationData* inNavData) {
}

void AIGS_LootCollectionBase::LootItemsChanged() {
}

bool AIGS_LootCollectionBase::IsLootValidForAI(const bool inIgnoreOnlyUnlocked) const {
    return false;
}

AIGS_LootHolderBase* AIGS_LootCollectionBase::GetLootHolder() const {
    return NULL;
}

void AIGS_LootCollectionBase::AddAllowedCharacter(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_LootCollectionBase::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_LootCollectionBase, LootItems);
    DOREPLIFETIME(AIGS_LootCollectionBase, bIsEmpty);
}


