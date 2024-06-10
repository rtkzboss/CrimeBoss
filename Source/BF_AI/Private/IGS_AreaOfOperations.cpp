#include "IGS_AreaOfOperations.h"

FIGS_AreaOfOperations::FIGS_AreaOfOperations() {
    auto& gen2102 = (*this).AreaOfOperation;
    gen2102.Empty();
    auto& gen2103 = (*this).AllowedPath;
    gen2103.Empty();
    (*this).LastStartingRoom = nullptr;
    (*this).LastDepth = 0;
    (*this).Enabled = false;
}

