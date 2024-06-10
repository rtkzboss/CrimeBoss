#include "IGS_CharacterEventNotificationData.h"

FIGS_CharacterEventNotificationData::FIGS_CharacterEventNotificationData() {
    (*this).Instigator = nullptr;
    (*this).Targets.Empty();
    (*this).ObjectOfInterest = nullptr;
    (*this).FloatValue = 0.000000000e+00f;
    (*this).VectorValue.X = 3.402823466e+38f;
    (*this).VectorValue.Y = 3.402823466e+38f;
    (*this).VectorValue.Z = 3.402823466e+38f;
    (*this).OptionalEnumData = 255;
}

