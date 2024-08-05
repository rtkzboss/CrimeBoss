#include "IGS_PlayerPingComponent.h"
#include "ComponentInstanceDataCache.h"

UIGS_PlayerPingComponent::UIGS_PlayerPingComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).GenericPingDuration = 5.000000000e+00f;
    (*this).ValidSmartPingDuration = 5.000000000e+00f;
    (*this).InvalidSmartPingDuration = 1.000000000e+00f;
    (*this).PingRange = 1.000000000e+05f;
    (*this).PingMaxAngle = 5.000000000e+00f;
    (*this).SmartPingHoldDuration = 1.000000000e+00f;
    (*this).SmartPingMagnetismDegrees = 3.000000000e+00f;
}

void UIGS_PlayerPingComponent::Server_Ping_Implementation(EIGS_PingableType inType, FVector_NetQuantize InLocation, UIGS_PingableComponent* InComponent, AActor* inActor) {
}

void UIGS_PlayerPingComponent::Multicast_Ping_Implementation(UIGS_PingableComponent* InComponent, EIGS_PingableType inType, FVector_NetQuantize InLocation) {
}


