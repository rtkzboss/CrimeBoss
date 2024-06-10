#include "WaterTurretElements.h"

FWaterTurretElements::FWaterTurretElements() {
    (*this).Turret = nullptr;
    (*this).Hose = nullptr;
    auto& gen2552 = (*this).HoseMeshes;
    gen2552.Empty();
}

