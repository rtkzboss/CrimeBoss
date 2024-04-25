#include "IGS_AIMemoryComponent.h"

UIGS_AIMemoryComponent::UIGS_AIMemoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_AIMemoryComponent::SetCurrentTarget(AActor* inNewTarget) {
}

AActor* UIGS_AIMemoryComponent::GetCurrentTarget() const {
    return NULL;
}

TArray<AActor*> UIGS_AIMemoryComponent::GetAllSensedEnemies() {
    return TArray<AActor*>();
}

TArray<AActor*> UIGS_AIMemoryComponent::GetAllDmgDealers() {
    return TArray<AActor*>();
}

FIGS_SuspicionComponentHolder UIGS_AIMemoryComponent::BPGetSuspicionComponentByOwner(const AActor* inSuspicionComponentActor) {
    return FIGS_SuspicionComponentHolder{};
}

FIGS_SuspicionComponentHolder UIGS_AIMemoryComponent::BPGetSuspicionComponent(const UIGS_SuspicionComponent* inSuspicionComponent) {
    return FIGS_SuspicionComponentHolder{};
}

FIGS_EnemyHolder UIGS_AIMemoryComponent::BPGetEnemyHolder(const AActor* inEnemyActor) {
    return FIGS_EnemyHolder{};
}


