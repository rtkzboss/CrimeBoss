#include "IGS_ShotgunReloader.h"
#include "ComponentInstanceDataCache.h"

UIGS_ShotgunReloader::UIGS_ShotgunReloader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).AmmoPerStep = 1;
    (*this).bIsInterruptible = true;
}


