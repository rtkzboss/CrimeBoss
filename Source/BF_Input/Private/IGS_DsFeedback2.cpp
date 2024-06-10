#include "IGS_DsFeedback2.h"

FIGS_DsFeedback2::FIGS_DsFeedback2() {
    auto& gen2000 = (*this).Strengths;
    gen2000.Empty();
    gen2000.AddDefaulted(10);
}

