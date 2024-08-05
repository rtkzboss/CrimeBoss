#include "IGS_ChokeVolume.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "IGS_NavArea_Choke.h"

AIGS_ChokeVolume::AIGS_ChokeVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AreaClass = UIGS_NavArea_Choke::StaticClass();
    (*this).BrushColor.G = 255;
    (*this).BrushColor.R = 255;
    (*this).BrushColor.A = 255;
    (*this).bColored = true;
}

void AIGS_ChokeVolume::OnComponentEndOverlap(UPrimitiveComponent* inPrimitiveComponent, AActor* inOther, UPrimitiveComponent* inPrimitiveComponent1, int32 ini) {
}

void AIGS_ChokeVolume::OnComponentBeginOverlap(UPrimitiveComponent* inPrimitiveComponent, AActor* inOther, UPrimitiveComponent* inPrimitiveComponent1, int32 ini, bool inArg, const FHitResult& inHitResult) {
}


