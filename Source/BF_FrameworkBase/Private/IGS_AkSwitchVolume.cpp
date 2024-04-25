#include "IGS_AkSwitchVolume.h"

AIGS_AkSwitchVolume::AIGS_AkSwitchVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
    this->bSolidWhenSelected = true;
    this->FootstepAkSwitch = NULL;
    this->FootstepNoneAkSwitch = NULL;
}


