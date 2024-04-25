#include "IGS_WaterVolume.h"

AIGS_WaterVolume::AIGS_WaterVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bSolidWhenSelected = true;
    this->bWaterVolume = true;
    this->WaterType = EWaterType::Puddle;
    this->UnderWaterLoop = NULL;
    this->m_AudioComponent = NULL;
}

void AIGS_WaterVolume::OnTriggerEndOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex) {
}

void AIGS_WaterVolume::OnTriggerBeginOverlap(UPrimitiveComponent* inOverlappedComponent, AActor* inOtherActor, UPrimitiveComponent* inOtherComp, int32 inOtherBodyIndex, bool inFromSweep, const FHitResult& inSweepResult) {
}


