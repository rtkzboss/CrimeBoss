#include "BreakableMeshProperties.h"

FBreakableMeshProperties::FBreakableMeshProperties() {
    (*this).ChainedComponentsToBreak.Empty();
    (*this).mR_IsBroken = false;
    (*this).mR_IsMaterialSwitched = false;
    (*this).bCanTakeBulletDamage = true;
    (*this).bCanTakeMeleeDamage = true;
    (*this).bCanTakeExplosiveDamage = true;
    (*this).bCanTakeBreachExplosiveDamage = false;
    (*this).HealthToSwitchMaterial = 0;
    (*this).bSimulatePhysicsOnBreak = false;
    (*this).BreakOtherComponents.Empty();
    (*this).StaticMeshBroken = nullptr;
    (*this).ParticleBreak = nullptr;
    (*this).ParticleInstanceParameters.Empty();
    (*this).ParticleSpawnOffset = FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
    (*this).MaterialsOnBreak.Empty();
    (*this).AkEventOnBreak = nullptr;
    (*this).AkEventOnImpact = nullptr;
}

