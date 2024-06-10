#include "IGS_TrafficPathfidingResult.h"

FIGS_TrafficPathfidingResult::FIGS_TrafficPathfidingResult() {
    (*this).Spawner = nullptr;
    auto& gen2110 = (*this).Path;
    gen2110.Empty();
}

