#include "IGS_NetProjectileHitResult.h"

FIGS_NetProjectileHitResult::FIGS_NetProjectileHitResult() {
    (*this).TraceStart.X = 0.000000000e+00f;
    (*this).TraceStart.Y = 0.000000000e+00f;
    (*this).TraceStart.Z = 0.000000000e+00f;
    (*this).TraceEnd.X = 0.000000000e+00f;
    (*this).TraceEnd.Y = 0.000000000e+00f;
    (*this).TraceEnd.Z = 0.000000000e+00f;
    (*this).ImpactPointOffset.X = 0.000000000e+00f;
    (*this).ImpactPointOffset.Y = 0.000000000e+00f;
    (*this).ImpactPointOffset.Z = 0.000000000e+00f;
    (*this).ImpactNormal.X = 0.000000000e+00f;
    (*this).ImpactNormal.Y = 0.000000000e+00f;
    (*this).ImpactNormal.Z = 0.000000000e+00f;
    (*this).Actor = nullptr;
    (*this).Component = nullptr;
    (*this).PhysMaterial = nullptr;
    (*this).BoneName = NAME_None;
    (*this).Distance = 0.000000000e+00f;
    (*this).bBlockingHit = false;
    (*this).bIsPenetratingHit = false;
}

