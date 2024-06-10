#include "IGS_AISpawningTest.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_AISpawningTest::AIGS_AISpawningTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TeamSide = EIGS_TeamSideEnum::TS_Cops;
    (*this).Count = 1;
    (*this).SpawnPeriod = 5.000000000e+00f;
}


