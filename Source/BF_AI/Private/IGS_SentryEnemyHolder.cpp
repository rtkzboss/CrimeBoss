#include "IGS_SentryEnemyHolder.h"

FIGS_SentryEnemyHolder::FIGS_SentryEnemyHolder() {
    (*this).Enemy = nullptr;
    (*this).SenseHolder.LastKnowLocation.X = 3.402823466e+38f;
    (*this).SenseHolder.LastKnowLocation.Y = 3.402823466e+38f;
    (*this).SenseHolder.LastKnowLocation.Z = 3.402823466e+38f;
    (*this).SenseHolder.SeenTimestamp = -3.402823466e+38f;
    (*this).SenseHolder.IsSeen = false;
    (*this).SenseHolder.IsSeenAndInCone = false;
    (*this).DetectionMeter = 0.000000000e+00f;
    (*this).Detected = false;
    (*this).Detecting = false;
    (*this).Spotted = false;
}

