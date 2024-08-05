#include "IGS_LootBagPickup.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SkeletalMeshComponent.h"
#include "EIGS_TeamSideEnum.h"

AIGS_LootBagPickup::AIGS_LootBagPickup(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer.SetDefaultSubobjectClass<USkeletalMeshComponent>(TEXT("RootComp"))) {
    (*this).PlacedInLevelItemType = EIGS_ItemType::Item_UNKNOWN;
    (*this).SkeletalMesh = (USkeletalMeshComponent*)RootComponent;
    (*this).IsPickableByAI = true;
    (*this).PickupMeshComp = (UPrimitiveComponent*)RootComponent;
    (*this).SceneRoot = (USceneComponent*)RootComponent;
}


void AIGS_LootBagPickup::NotifyPickup(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_LootBagPickup::NotifyCatchInAir(AIGS_GameCharacterFramework* inCharacter) {
}

void AIGS_LootBagPickup::Multicast_LootBagGrabbed_Implementation() {
}

EIGS_ItemType AIGS_LootBagPickup::GetItemType() const {
    return EIGS_ItemType::Item_Weapon;
}

TArray<FIGS_LootBagSingleItem> AIGS_LootBagPickup::GetItems() {
    return TArray<FIGS_LootBagSingleItem>();
}




