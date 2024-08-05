#include "IGS_SentrySenseHolder.h"

FIGS_SentrySenseHolder::FIGS_SentrySenseHolder() {
    (*this).LastKnowLocation.X = 3.402823466e+38f;
    (*this).LastKnowLocation.Y = 3.402823466e+38f;
    (*this).LastKnowLocation.Z = 3.402823466e+38f;
    (*this).SeenTimestamp = -3.402823466e+38f;
    (*this).IsSeen = false;
    (*this).IsSeenAndInCone = false;
}

