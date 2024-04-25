#include "IGS_HealthSectionWidget.h"

UIGS_HealthSectionWidget::UIGS_HealthSectionWidget() {
    this->CurrentHealth = 0.00f;
    this->MaxHealth = 0.00f;
    this->bLocalPlayer = true;
    this->PawnToMonitor = NULL;
}


void UIGS_HealthSectionWidget::SetPawnToMonitor(AIGS_GameCharacterFramework* inCharacter) {
}










void UIGS_HealthSectionWidget::LootBagCountChanged(int32 inCount, const TArray<EIGS_BagType>& inBagTypes) {
}


