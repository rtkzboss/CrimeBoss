#include "IGS_PlayerPingComponent.h"

UIGS_PlayerPingComponent::UIGS_PlayerPingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->GenericPingWidgetActor = NULL;
    this->SmartPingWidgetActor = NULL;
    this->GenericPingDuration = 5.00f;
    this->ValidSmartPingDuration = 5.00f;
    this->InvalidSmartPingDuration = 1.00f;
    this->PingRange = 100000.00f;
    this->PingMaxAngle = 5.00f;
    this->SmartPingHoldDuration = 1.00f;
    this->SmartPingMagnetismDegrees = 3.00f;
    this->m_CharacterController = NULL;
}

void UIGS_PlayerPingComponent::Server_Ping_Implementation(EIGS_PingableType inType, FVector_NetQuantize InLocation, UIGS_PingableComponent* InComponent, AActor* inActor) {
}

void UIGS_PlayerPingComponent::Multicast_Ping_Implementation(UIGS_PingableComponent* InComponent, EIGS_PingableType inType, FVector_NetQuantize InLocation) {
}


