#include "META_HeatManagerComponent.h"

UMETA_HeatManagerComponent::UMETA_HeatManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SheriffTarget = EMETA_Gang::None;
    this->LastAmountDetectivesToSpawn = 0;
    this->HeatState = EMETA_Heat::VeryLow;
    this->PoliceInvestigationValue = 0.00f;
    this->PreviousPoliceInvestigationValue = 0.00f;
    this->HeatValue = 0.00f;
}


