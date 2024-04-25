#include "IGS_ChokeVolume.h"
#include "IGS_NavArea_Choke.h"

AIGS_ChokeVolume::AIGS_ChokeVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->AreaClass = UIGS_NavArea_Choke::StaticClass();
}

void AIGS_ChokeVolume::OnComponentEndOverlap(UPrimitiveComponent* inPrimitiveComponent, AActor* inOther, UPrimitiveComponent* inPrimitiveComponent1, int32 ini) {
}

void AIGS_ChokeVolume::OnComponentBeginOverlap(UPrimitiveComponent* inPrimitiveComponent, AActor* inOther, UPrimitiveComponent* inPrimitiveComponent1, int32 ini, bool inArg, const FHitResult& inHitResult) {
}


