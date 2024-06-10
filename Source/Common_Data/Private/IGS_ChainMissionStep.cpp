#include "IGS_ChainMissionStep.h"

FIGS_ChainMissionStep::FIGS_ChainMissionStep() {
    auto& gen1864 = (*this).PossibleMissions;
    gen1864.Empty();
    auto& gen1865 = (*this).PostMissionActions;
    gen1865.Empty();
}

