#include "IGS_ImpactBuffer.h"

FIGS_ImpactBuffer::FIGS_ImpactBuffer() {
    auto& gen3423 = (*this).Impacts;
    gen3423.Empty();
    (*this).ImpactClass = nullptr;
}

