#include "IGS_PlantData.h"

FIGS_PlantData::FIGS_PlantData() {
    (*this).IsPlanted = false;
    (*this).PlantRotation.Pitch = 0.000000000e+00f;
    (*this).PlantRotation.Yaw = 0.000000000e+00f;
    (*this).PlantRotation.Roll = 0.000000000e+00f;
}

