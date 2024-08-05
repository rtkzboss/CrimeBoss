#include "IGS_LightingScenariosSubsystem.h"

UIGS_LightingScenariosSubsystem::UIGS_LightingScenariosSubsystem() {
    (*this).bForceMovableSkylight = true;
}

void UIGS_LightingScenariosSubsystem::SetUseLightScenarios(bool inUseLightScenarios) {
}

void UIGS_LightingScenariosSubsystem::SetLightingScenario(EIGS_LightingScenarioType inType) {
}

void UIGS_LightingScenariosSubsystem::RepropagateLightingScenarioChangesOnStaticMeshes() {
}

UIGS_LightingScenariosSubsystem* UIGS_LightingScenariosSubsystem::Instance(const UObject* inWorldContextObject) {
    return NULL;
}

bool UIGS_LightingScenariosSubsystem::GetUseLightScenarios() const {
    return false;
}

TArray<FIGS_LightingScenarioLevelPair> UIGS_LightingScenariosSubsystem::GetLoadedLightingScenarios() {
    return TArray<FIGS_LightingScenarioLevelPair>();
}

EIGS_LightingScenarioType UIGS_LightingScenariosSubsystem::GetCurrentLightingScenarioType() const {
    return EIGS_LightingScenarioType::Midday;
}

void UIGS_LightingScenariosSubsystem::DeleteStaticLights() {
}


