#include "IGS_MovableVehicleGroupTableRow.h"

FIGS_MovableVehicleGroupTableRow::FIGS_MovableVehicleGroupTableRow() {
    (*this).ID = nullptr;
    (*this).VehicleSpawnGroup = EIGS_VehicleSpawnGroup::None;
    (*this).VehicleSplineGroup = EIGS_VehicleSplineGroup::None;
    (*this).Data.IsDefault = false;
    (*this).Data.Vehicle = nullptr;
}

