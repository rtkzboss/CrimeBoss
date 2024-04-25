#include "IGS_TeammateHealthInfoSingleWidget.h"

UIGS_TeammateHealthInfoSingleWidget::UIGS_TeammateHealthInfoSingleWidget() {
    this->CurrentRelativeHealth = 0.00f;
    this->IsBot = false;
    this->TeammatePawn = NULL;
    this->TeammateObjectStatus = NULL;
    this->TeammatePlayerStatus = NULL;
    this->TeammatePlayerState = NULL;
}

void UIGS_TeammateHealthInfoSingleWidget::UnregisterGameCharacterEvents_Implementation(AIGS_GameCharacterFramework* inGameCharacter) {
}


void UIGS_TeammateHealthInfoSingleWidget::RegisterGameCharacterEvents_Implementation(AIGS_GameCharacterFramework* inGameCharacter) {
}





