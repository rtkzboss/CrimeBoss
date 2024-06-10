#include "IGS_DsFeedback2.h"

FIGS_DsFeedback2::FIGS_DsFeedback2() {
    auto& gen0 = (*this).Strengths;
    gen0.Empty();
    gen0.AddDefaulted(10);
}

