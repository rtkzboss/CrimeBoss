#include "IGS_TerritoryVolume.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"

AIGS_TerritoryVolume::AIGS_TerritoryVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).TeamSide = EIGS_TeamSideEnum::TS_SWAT;
    (*this).OwnersTeamSide = EIGS_TeamSideEnum::TS_Unknown;
    (*this).CoolDownOnlyForPlayer = true;
    (*this).BrushColor.G = 255;
    (*this).BrushColor.A = 255;
    (*this).bColored = true;
    (*this).bSolidWhenSelected = true;
}

void AIGS_TerritoryVolume::OnTerritoryVolumeEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void AIGS_TerritoryVolume::OnTerritoryVolumeBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}

void AIGS_TerritoryVolume::HandleCoolDown() {
}


