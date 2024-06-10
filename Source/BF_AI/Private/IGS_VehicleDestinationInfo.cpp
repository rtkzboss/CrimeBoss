#include "IGS_VehicleDestinationInfo.h"

FIGS_VehicleDestinationInfo::FIGS_VehicleDestinationInfo() {
    (*this).Position.X = 0.000000000e+00f;
    (*this).Position.Y = 0.000000000e+00f;
    (*this).Position.Z = 0.000000000e+00f;
    (*this).Amount = 1;
    (*this).DestinationPoint = nullptr;
    (*this).DestinationArea = nullptr;
}

