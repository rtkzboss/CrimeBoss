#include "IGS_CameraShake.h"

FIGS_CameraShake::FIGS_CameraShake() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).CameraShakeTag, 0)) = NAME_None;
    (*this).Intensity = 0.000000000e+00f;
}

