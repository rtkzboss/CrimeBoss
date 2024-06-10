#include "IGS_SniperPoint.h"

AIGS_SniperPoint::AIGS_SniperPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SnipeAngleVertical = 10.00f;
    this->SnipeAngleHorizontal = 40.00f;
    this->SnipeAngleVerticalOffset = 0.00f;
    this->bRandomSnipingPoints = false;
}

void AIGS_SniperPoint::SetVisitorManually(AIGS_GameCharacterFramework* inGameCharacter) {
}

AIGS_GameCharacterFramework* AIGS_SniperPoint::GetVisitor() const {
    return NULL;
}


