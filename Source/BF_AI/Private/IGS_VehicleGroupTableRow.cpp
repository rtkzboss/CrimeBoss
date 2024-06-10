#include "IGS_VehicleGroupTableRow.h"

FIGS_VehicleGroupTableRow::FIGS_VehicleGroupTableRow() {
    (*this).ID = EIGS_VehicleGroup::CommonCivilian;
    auto& gen2112 = (*this).Data.Colors;
    gen2112.Empty();
    auto& gen2113 = (*this).Data.VehiclesData;
    gen2113.Empty();
}

