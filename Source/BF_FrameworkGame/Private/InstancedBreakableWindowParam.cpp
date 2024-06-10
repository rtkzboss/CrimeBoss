#include "InstancedBreakableWindowParam.h"

FInstancedBreakableWindowParam::FInstancedBreakableWindowParam() {
    (*this).ParticleOverride = nullptr;
    (*this).ParticleImpactOverride = nullptr;
    (*this).InstanceParticleWidth = 2.500000000e+01f;
    (*this).InstanceParticleHeight = 2.500000000e+01f;
    (*this).InstanceParticleAmount = 1.000000000e+00f;
    (*this).InstanceLocationOffset.X = 0.000000000e+00f;
    (*this).InstanceLocationOffset.Y = 0.000000000e+00f;
    (*this).InstanceLocationOffset.Z = 0.000000000e+00f;
    (*this).InstanceRotationOffset.Pitch = 0.000000000e+00f;
    (*this).InstanceRotationOffset.Yaw = 0.000000000e+00f;
    (*this).InstanceRotationOffset.Roll = 0.000000000e+00f;
    (*this).InstanceParticleVelocity.X = 1.000000000e+02f;
    (*this).InstanceParticleVelocity.Y = 0.000000000e+00f;
    (*this).InstanceParticleVelocity.Z = 0.000000000e+00f;
    (*this).InstanceParticleParameters.Empty();
    (*this).BulletsToDestroyInstance = 1;
}

