#include "BreakableMeshProperties.h"

FBreakableMeshProperties::FBreakableMeshProperties() {
    auto& gen3108 = (*this).ChainedComponentsToBreak;
    gen3108.Empty();
    (*this).mR_IsBroken = false;
    (*this).mR_IsMaterialSwitched = false;
    (*this).bCanTakeBulletDamage = true;
    (*this).bCanTakeMeleeDamage = true;
    (*this).bCanTakeExplosiveDamage = true;
    (*this).bCanTakeBreachExplosiveDamage = false;
    (*this).HealthToSwitchMaterial = 0;
    (*this).bSimulatePhysicsOnBreak = false;
    auto& gen3109 = (*this).BreakOtherComponents;
    gen3109.Empty();
    (*this).StaticMeshBroken = nullptr;
    (*this).ParticleBreak = nullptr;
    auto& gen3110 = (*this).ParticleInstanceParameters;
    gen3110.Empty();
    (*this).ParticleSpawnOffset = FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
    auto& gen3111 = (*this).MaterialsOnBreak;
    gen3111.Empty();
    (*this).AkEventOnBreak = nullptr;
    (*this).AkEventOnImpact = nullptr;
}

