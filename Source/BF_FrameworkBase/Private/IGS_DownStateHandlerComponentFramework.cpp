#include "IGS_DownStateHandlerComponentFramework.h"
#include "ComponentInstanceDataCache.h"
#include "Net/UnrealNetwork.h"

UIGS_DownStateHandlerComponentFramework::UIGS_DownStateHandlerComponentFramework(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_DownStateHandlerComponentFramework::Revive(APawn* healer) {
}

float UIGS_DownStateHandlerComponentFramework::GetReviveTime(APawn* healer) {
    return 0.0f;
}

float UIGS_DownStateHandlerComponentFramework::GetDownStateLengthInSeconds() const {
    return 0.0f;
}

void UIGS_DownStateHandlerComponentFramework::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_DownStateHandlerComponentFramework, UseDownState);
}


