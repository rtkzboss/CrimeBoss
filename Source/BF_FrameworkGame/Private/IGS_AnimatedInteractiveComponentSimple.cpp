#include "IGS_AnimatedInteractiveComponentSimple.h"
#include "ComponentInstanceDataCache.h"

UIGS_AnimatedInteractiveComponentSimple::UIGS_AnimatedInteractiveComponentSimple(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).ObjectMontageToPlay = nullptr;
    (*this).bUncrouchBeforeUse = true;
}


