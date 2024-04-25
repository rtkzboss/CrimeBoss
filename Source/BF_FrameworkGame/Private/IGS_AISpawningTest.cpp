#include "IGS_AISpawningTest.h"

AIGS_AISpawningTest::AIGS_AISpawningTest(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->TeamSide = EIGS_TeamSideEnum::TS_Cops;
    this->Count = 1;
    this->UnitSpecialization = EIGS_UnitSpecialization::US_None;
    this->SpawnAnim = EIGS_SpawnAnimType::SA_None;
    this->SpawnPeriod = 5.00f;
}


