#include "IGS_SniperPoint.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "EIGS_ScenarioDifficulty.h"
#include "EIGS_TeamSideEnum.h"

AIGS_SniperPoint::AIGS_SniperPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).SnipeAngleVertical = 1.000000000e+01f;
    (*this).SnipeAngleHorizontal = 4.000000000e+01f;
}

void AIGS_SniperPoint::SetVisitorManually(AIGS_GameCharacterFramework* inGameCharacter) {
}

AIGS_GameCharacterFramework* AIGS_SniperPoint::GetVisitor() const {
    return NULL;
}


