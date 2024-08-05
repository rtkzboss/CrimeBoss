#include "AnimNode_PowerIK_Walk.h"
#include "Animation/InputScaleBias.h"

FAnimNode_PowerIK_Walk::FAnimNode_PowerIK_Walk() {
    (*this).CharacterRoot = TEXT("pelvis");
    (*this).RootRotationMultiplier = 1.000000000e+00f;
    (*this).BodyInertia.ApplyInertiaToBody = false;
    (*this).BodyInertia.SmoothFactor = 5.000000000e+00f;
    (*this).BodyInertia.UseSpring = false;
    (*this).BodyInertia.SpringStrength = 1.000000000e+02f;
    (*this).BodyInertia.SpringDamping = 2.000000030e-01f;
    (*this).Limbs.Empty();
    (*this).StepMaxReachDistance = 2.000000000e+02f;
    (*this).StepDurationMultiplier = 1.000000000e+00f;
    (*this).StepHeightMultiplier = 1.000000000e+00f;
    (*this).StepHeightCurve = nullptr;
    (*this).StepSpeedCurve = nullptr;
    (*this).TeleportDistance = 1.000000000e+03f;
    (*this).PrintTeleportWarning = false;
    (*this).CollisionChannel = ECC_WorldStatic;
    (*this).TraceComplex = true;
    (*this).BendDirections.Empty();
    (*this).ExcludedBones.Empty();
    (*this).JointLimits.Empty();
    (*this).MaxSquashIterations = 6;
    (*this).MaxStretchIterations = 6;
    (*this).MaxFinalIterations = 3;
    (*this).AllowBoneTranslation = false;
    (*this).SolverAlpha = 1.000000000e+00f;
    (*this).DebugDrawSize = 2.000000000e+01f;
}

