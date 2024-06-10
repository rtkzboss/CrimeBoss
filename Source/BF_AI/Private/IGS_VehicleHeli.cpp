#include "IGS_VehicleHeli.h"
#include "GameFramework/Actor.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EIGS_VehicleSplineGroup.h"
#include "Net/UnrealNetwork.h"

AIGS_VehicleHeli::AIGS_VehicleHeli(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).StartBrakingDistance = 5.000000000e+01f;
    (*this).NeedsPassengers = true;
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*AActor::StaticClass()->FindPropertyByName("ReplicatedMovement")->ContainerPtrToValuePtr<FRepMovement>(&(*this), 0)).RotationQuantizationLevel = ERotatorQuantization::ShortComponents;
}

void AIGS_VehicleHeli::SetLookAt(AActor* Actor) {
}

void AIGS_VehicleHeli::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_VehicleHeli, mR_bCharactersSpawned);
    DOREPLIFETIME(AIGS_VehicleHeli, mR_TargetPosition);
    DOREPLIFETIME(AIGS_VehicleHeli, mR_TargetLookAtPosition);
}


