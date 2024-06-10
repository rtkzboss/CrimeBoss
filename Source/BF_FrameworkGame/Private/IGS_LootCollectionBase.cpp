#include "IGS_LootCollectionBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Net/UnrealNetwork.h"

AIGS_LootCollectionBase::AIGS_LootCollectionBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).LootingPos.X = 3.402823466e+38f;
    (*this).LootingPos.Y = 3.402823466e+38f;
    (*this).LootingPos.Z = 3.402823466e+38f;
    (*this).LootingRotation.Pitch = 3.402823466e+38f;
    (*this).LootingRotation.Yaw = 3.402823466e+38f;
    (*this).LootingRotation.Roll = 3.402823466e+38f;
    (*this).DefaultSceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("DefaultSceneRoot"));
    (*this).bIsShineEnabled = true;
    (*this).PrimaryActorTick.bCanEverTick = true;
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = (USceneComponent*)DefaultSceneRoot;
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


