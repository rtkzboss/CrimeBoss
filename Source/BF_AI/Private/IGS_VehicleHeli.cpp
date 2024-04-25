#include "IGS_VehicleHeli.h"
#include "Net/UnrealNetwork.h"

AIGS_VehicleHeli::AIGS_VehicleHeli(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->RopeClass = NULL;
    this->StartBrakingDistance = 50.00f;
    this->ParkingAnimation = NULL;
    this->LeavingAnimation = NULL;
    this->NeedsPassengers = true;
    this->mR_bCharactersSpawned = false;
}

void AIGS_VehicleHeli::SetLookAt(AActor* Actor) {
}

void AIGS_VehicleHeli::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_VehicleHeli, mR_bCharactersSpawned);
    DOREPLIFETIME(AIGS_VehicleHeli, mR_TargetPosition);
    DOREPLIFETIME(AIGS_VehicleHeli, mR_TargetLookAtPosition);
}


