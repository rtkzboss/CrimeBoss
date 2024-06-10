#include "AnimNode_PowerIK_Ground.h"
#include "Animation/InputScaleBias.h"

FAnimNode_PowerIK_Ground::FAnimNode_PowerIK_Ground() {
    (*this).CharacterRoot = TEXT("pelvis");
    (*this).BodyInertia.ApplyInertiaToBody = false;
    (*this).BodyInertia.SmoothFactor = 5.000000000e+00f;
    (*this).BodyInertia.UseSpring = false;
    (*this).BodyInertia.SpringStrength = 1.000000000e+02f;
    (*this).BodyInertia.SpringDamping = 2.000000030e-01f;
    auto& gen1644 = (*this).Feet;
    gen1644.Empty();
    (*this).FeetDeltaSmoothSpeed = 2.000000000e+02f;
    (*this).RootRotationMultiplier = 1.000000000e+00f;
    (*this).GroundCollision.CollisionChannel = ECC_WorldStatic;
    (*this).GroundCollision.TraceComplex = true;
    (*this).GroundCollision.RayCastUp = 2.000000000e+02f;
    (*this).GroundCollision.RayCastDown = 2.000000000e+02f;
    (*this).GroundCollision.EnableWallCollision = false;
    (*this).GroundCollision.WallOffset = 2.000000000e+01f;
    (*this).GroundSlope.StrideDirection.X = 0.000000000e+00f;
    (*this).GroundSlope.StrideDirection.Y = 1.000000000e+00f;
    (*this).GroundSlope.StrideDirection.Z = 0.000000000e+00f;
    (*this).GroundSlope.MaxGroundAngle = 4.500000000e+01f;
    (*this).GroundSlope.MaxNormalAngularSpeed = 4.000000000e+01f;
    (*this).GroundSlope.OrientToGround = false;
    (*this).GroundSlope.OrientToPitch = 8.000000119e-01f;
    (*this).GroundSlope.OrientToRoll = 1.000000015e-01f;
    (*this).GroundSlope.ScaleStride = false;
    (*this).GroundSlope.UphillStrideScale = 4.000000060e-01f;
    (*this).GroundSlope.DownhillStrideScale = 2.000000030e-01f;
    (*this).GroundSlope.SidehillStrideScale = 1.000000000e+00f;
    (*this).GroundSlope.SidehillPushOuterFeet = 2.000000000e+01f;
    (*this).GroundSlope.Lean = false;
    (*this).GroundSlope.UphillLean = 3.000000119e-01f;
    (*this).GroundSlope.DownhillLean = 5.000000000e-01f;
    (*this).GroundSlope.SidehillLean = 0.000000000e+00f;
    (*this).GroundSlope.CounterLean = false;
    (*this).GroundSlope.CounterLeanBoneName = TEXT("head");
    (*this).GroundSlope.UphillCounterLean = 8.000000119e-01f;
    (*this).GroundSlope.DownhillCounterLean = 1.000000000e+00f;
    (*this).GroundSlope.SidehillCounterLean = 0.000000000e+00f;
    (*this).GroundSlope.MoveRoot = false;
    (*this).GroundSlope.UphillVertOffset = 1.000000000e+01f;
    (*this).GroundSlope.UphillHorizOffset = -2.000000000e+01f;
    (*this).GroundSlope.DownhillVertOffset = 1.000000000e+01f;
    (*this).GroundSlope.DownhillHorizOffset = 2.000000000e+01f;
    (*this).GroundSlope.SidehillHorizOffset = -1.000000000e+01f;
    (*this).GroundSlope.SidehillVertOffset = -1.000000000e+01f;
    (*this).GroundSlope.RotateFootToGround = false;
    (*this).GroundSlope.PitchFootAmount = 1.000000000e+00f;
    (*this).GroundSlope.RollFootAmount = 6.000000238e-01f;
    (*this).GroundSlope.FootAngleDeltaSmoothSpeed = 0.000000000e+00f;
    (*this).GroundSlope.OffsetFeetPositions = false;
    (*this).GroundSlope.StaticFootOffset = 4.000000000e+00f;
    auto& gen1645 = (*this).BendDirections;
    gen1645.Empty();
    auto& gen1646 = (*this).ExcludedBones;
    gen1646.Empty();
    auto& gen1647 = (*this).JointLimits;
    gen1647.Empty();
    (*this).MaxSquashIterations = 6;
    (*this).MaxStretchIterations = 6;
    (*this).MaxFinalIterations = 3;
    (*this).AllowBoneTranslation = false;
    (*this).SolverAlpha = 1.000000000e+00f;
    (*this).DebugDrawSize = 2.000000000e+01f;
}

