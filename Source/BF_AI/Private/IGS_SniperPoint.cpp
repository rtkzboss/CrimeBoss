#include "IGS_SniperPoint.h"

AIGS_SniperPoint::AIGS_SniperPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SnipeAngleVertical = 10.00f;
    this->SnipeAngleHorizontal = 40.00f;
}

void AIGS_SniperPoint::SetVisitorManually(AIGS_GameCharacterFramework* inGameCharacter) {
}

AIGS_GameCharacterFramework* AIGS_SniperPoint::GetVisitor() const {
    return NULL;
}


