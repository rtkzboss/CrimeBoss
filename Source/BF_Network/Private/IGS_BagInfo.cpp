#include "IGS_BagInfo.h"

FIGS_BagInfo::FIGS_BagInfo() {
    (*this).BagCount = 0;
    auto& gen3395 = (*this).BagTypes;
    gen3395.Empty();
}

