#include "IGS_ShotgunReloader.h"

UIGS_ShotgunReloader::UIGS_ShotgunReloader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bIsInterruptible = true;
    this->AmmoPerStep = 1;
}


