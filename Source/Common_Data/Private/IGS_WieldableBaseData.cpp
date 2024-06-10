#include "IGS_WieldableBaseData.h"
#include "EMETA_ItemQuality.h"
#include "EIGS_ItemType.h"

FIGS_WieldableBaseData::FIGS_WieldableBaseData() {
    (*this).WieldableTortillaBaseFOV = 4.500000000e+01f;
    (*this).WieldableTortillaAimFOV = 4.500000000e+01f;
    (*this).HolsterTimeInSeconds = 5.000000000e-01f;
    (*this).WieldingMovementSpeedMultiplier = 1.000000000e+00f;
    (*this).Class = EIGS_WieldableClass::C_Generic;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ClassTag, 0)) = TEXT("Item.Wieldable");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).WieldingOffence, 0)) = NAME_None;
}

