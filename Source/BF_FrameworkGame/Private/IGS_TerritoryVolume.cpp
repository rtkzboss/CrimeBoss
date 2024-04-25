#include "IGS_TerritoryVolume.h"

AIGS_TerritoryVolume::AIGS_TerritoryVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bSolidWhenSelected = true;
    this->TeamSide = EIGS_TeamSideEnum::TS_SWAT;
    this->OwnersTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    this->Cooldown = 0.00f;
    this->CoolDownOnlyForPlayer = true;
    this->CoolDownReturnsToNeutral = false;
    this->ApplyRestrictionTagsAutomatically = false;
    this->IgnoreTrigger = false;
    this->ShouldRecomputeOnEmpty = false;
    this->HeistersCount = 0;
    this->EnemiesCount = 0;
}

void AIGS_TerritoryVolume::OnTerritoryVolumeEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void AIGS_TerritoryVolume::OnTerritoryVolumeBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}

void AIGS_TerritoryVolume::HandleCoolDown() {
}


