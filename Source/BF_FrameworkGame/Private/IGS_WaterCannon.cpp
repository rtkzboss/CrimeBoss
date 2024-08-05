#include "IGS_WaterCannon.h"
#include "EIGS_WeaponAttackType.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_WieldableSlot.h"
#include "Net/UnrealNetwork.h"

AIGS_WaterCannon::AIGS_WaterCannon(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TurretID = -1;
    auto& gen0 = (*this).WeaponModsArray;
    gen0.Empty();
    gen0.AddDefaulted(8);
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


