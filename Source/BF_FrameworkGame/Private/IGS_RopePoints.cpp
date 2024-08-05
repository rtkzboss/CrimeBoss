#include "IGS_RopePoints.h"

FIGS_RopePoints::FIGS_RopePoints() {
    (*this).LeftHandSocketName = TEXT("Left_Hand_Rope_Socket");
    (*this).RightHandSocketName = TEXT("Right_Hand_Rope_Socket");
    (*this).MaxRightHandIndexOffset = 20;
    (*this).LeftHandPointOffset.X = 0.000000000e+00f;
    (*this).LeftHandPointOffset.Y = 0.000000000e+00f;
    (*this).LeftHandPointOffset.Z = 0.000000000e+00f;
    (*this).LeftHandPointIndexOffset = 0;
    (*this).EndParticleCollisionIndicies = 15;
    (*this).CollisionDistanceFromTheGround = 1.000000000e+02f;
}

