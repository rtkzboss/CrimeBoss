#include "IGS_PickupSpawn.h"

FIGS_PickupSpawn::FIGS_PickupSpawn() {
    (*this).PickupBlueprint = nullptr;
    (*this).ItemPickup = nullptr;
    (*this).ObjectiveType = EIGS_ObjectiveComponentType::Default;
}

