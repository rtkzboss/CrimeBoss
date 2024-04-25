#include "IGS_WaterCannon.h"
#include "Net/UnrealNetwork.h"

AIGS_WaterCannon::AIGS_WaterCannon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->WeaponModsArray.AddDefaulted(8);
    this->WaterHoseObject = NULL;
    this->TurretID = -1;
    this->IsItemInInventory = false;
}

void AIGS_WaterCannon::RemoveUnusedTurrets_MULTICAST_Implementation() {
}

void AIGS_WaterCannon::MakeVisible_MULTICAST_Implementation() {
}

void AIGS_WaterCannon::CheckItemAndMakeVisible_SERVER_Implementation() {
}

void AIGS_WaterCannon::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_WaterCannon, IsItemInInventory);
}


