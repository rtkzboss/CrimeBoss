#include "IGS_PatrolPoint.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TeamSideEnum.h"

AIGS_PatrolPoint::AIGS_PatrolPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).DirectionLookAtPosDistance = 1.000000000e+03f;
}

void AIGS_PatrolPoint::SetVisitorManully(AIGS_GameCharacterFramework* inGameCharacter) {
}

AIGS_GameCharacterFramework* AIGS_PatrolPoint::GetVisitor() const {
    return NULL;
}

EIGS_AIMontageSOVariant AIGS_PatrolPoint::GetRandomAnimation() {
    return EIGS_AIMontageSOVariant::SO_Unknown;
}


