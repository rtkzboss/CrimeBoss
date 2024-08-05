#include "IGS_DissolveManager.h"
#include "ComponentInstanceDataCache.h"

UIGS_DissolveManager::UIGS_DissolveManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).MaxBodiesCount = 20;
    (*this).DissolveTime = 6.000000000e+00f;
}


