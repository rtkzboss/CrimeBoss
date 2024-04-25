#include "IGS_PatrolPoint.h"

AIGS_PatrolPoint::AIGS_PatrolPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MinWaitTime = 0.00f;
    this->MaxWaitTime = 0.00f;
    this->bHasDirection = false;
    this->bRedirectPoint = false;
    this->bCannotSkipPoint = false;
    this->DirectionLookAtPosDistance = 1000.00f;
    this->NextPoint = NULL;
    this->NextPointCasted = NULL;
}

void AIGS_PatrolPoint::SetVisitorManully(AIGS_GameCharacterFramework* inGameCharacter) {
}

AIGS_GameCharacterFramework* AIGS_PatrolPoint::GetVisitor() const {
    return NULL;
}

EIGS_AIMontageSOVariant AIGS_PatrolPoint::GetRandomAnimation() {
    return EIGS_AIMontageSOVariant::SO_Unknown;
}


