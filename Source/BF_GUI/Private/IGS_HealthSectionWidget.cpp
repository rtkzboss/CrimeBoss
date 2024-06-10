#include "IGS_HealthSectionWidget.h"
#include "Layout/FlowDirection.h"
#include "Layout/Clipping.h"
#include "Components/SlateWrapperTypes.h"
#include "Blueprint/UserWidget.h"
#include "EIGS_HUDVisibilityMode.h"

UIGS_HealthSectionWidget::UIGS_HealthSectionWidget() {
    (*this).bLocalPlayer = true;
}


void UIGS_HealthSectionWidget::SetPawnToMonitor(AIGS_GameCharacterFramework* inCharacter) {
}










void UIGS_HealthSectionWidget::LootBagCountChanged(int32 inCount, const TArray<EIGS_BagType>& inBagTypes) {
}


