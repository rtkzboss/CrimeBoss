#include "IGS_EscapeVanVehicle.h"
#include "IGS_InteractiveComponent.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_VehicleSplineGroup.h"
#include "Net/UnrealNetwork.h"

AIGS_EscapeVanVehicle::AIGS_EscapeVanVehicle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MiddleRightDoorInteractive = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("MiddleRightDoorInteractive"));
    (*this).RearRightDoorInteractive = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("RearRightDoorInteractive"));
    (*this).RearLeftDoorInteractive = CreateDefaultSubobject<UIGS_InteractiveComponent>(TEXT("RearLeftDoorInteractive"));
}

void AIGS_EscapeVanVehicle::OnRep_IsRearDoorsOpened() {
}

void AIGS_EscapeVanVehicle::OnRep_IsPassDoorOpened() {
}

void AIGS_EscapeVanVehicle::OnRep_IsMiddleDoorOpened() {
}

void AIGS_EscapeVanVehicle::OnRearDoorInteraction(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_EscapeVanVehicle::OnPassengerDoorInteraction(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_EscapeVanVehicle::OnMiddleDoorInteraction(AIGS_GameCharacterFramework* inInstigator) {
}

void AIGS_EscapeVanVehicle::Multicast_OnRearDoorInteraction_Implementation(bool inIsOpened) {
}

void AIGS_EscapeVanVehicle::Multicast_OnPassengerDoorInteraction_Implementation(bool inIsOpened) {
}

void AIGS_EscapeVanVehicle::Multicast_OnMiddleDoorInteraction_Implementation(bool inIsOpened) {
}

void AIGS_EscapeVanVehicle::CloseDoors() {
}

void AIGS_EscapeVanVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AIGS_EscapeVanVehicle, mR_bIsRearDoorsOpened);
    DOREPLIFETIME(AIGS_EscapeVanVehicle, mR_bIsMiddleDoorOpened);
    DOREPLIFETIME(AIGS_EscapeVanVehicle, mR_bIsPassDoorOpened);
}


