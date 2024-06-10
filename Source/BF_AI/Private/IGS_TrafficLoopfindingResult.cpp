#include "IGS_TrafficLoopfindingResult.h"

FIGS_TrafficLoopfindingResult::FIGS_TrafficLoopfindingResult() {
    auto& gen2107 = (*this).ClassicLoops;
    gen2107.Empty();
    auto& gen2108 = (*this).ReversedLoops;
    gen2108.Empty();
}

