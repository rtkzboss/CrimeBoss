#include "RigUnit_PowerIK.h"

FRigUnit_PowerIK::FRigUnit_PowerIK() {
    (*this).CharacterRoot = TEXT("pelvis");
    (*this).RootRotationMultiplier = 1.000000000e+00f;
    (*this).Effectors.Empty();
    (*this).BendDirections.Empty();
    (*this).ExcludedBones.Empty();
    (*this).JointLimits.Empty();
    (*this).CenterOfGravityConstraint.Alpha = 0.000000000e+00f;
    (*this).CenterOfGravityConstraint.HorizAmount = 1.200000048e+00f;
    (*this).CenterOfGravityConstraint.VertAmount = 3.000000119e-01f;
    (*this).CenterOfGravityConstraint.PullBodyAmount = 4.000000060e-01f;
    (*this).Inertia.ApplyInertiaToBody = false;
    (*this).Inertia.SmoothFactor = 5.000000000e+00f;
    (*this).Inertia.UseSpring = false;
    (*this).Inertia.SpringStrength = 1.000000000e+02f;
    (*this).Inertia.SpringDamping = 2.000000030e-01f;
    (*this).MaxSquashIterations = 6;
    (*this).MaxStretchIterations = 6;
    (*this).MaxFinalIterations = 6;
    (*this).AllowBoneTranslation = false;
    (*this).SolverAlpha = 1.000000000e+00f;
}

