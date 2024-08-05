#include "MeshInfoStruct.h"

FMeshInfoStruct::FMeshInfoStruct() {
    (*this).MeshSpawnerComponent = nullptr;
    (*this).bEnableTransformOffset = false;
    (*this).LocationOffset.X = 0.000000000e+00f;
    (*this).LocationOffset.Y = 0.000000000e+00f;
    (*this).LocationOffset.Z = 0.000000000e+00f;
    (*this).RotationOffset.Pitch = 0.000000000e+00f;
    (*this).RotationOffset.Yaw = 0.000000000e+00f;
    (*this).RotationOffset.Roll = 0.000000000e+00f;
    (*this).BreakableMeshProperties.ChainedComponentsToBreak.Empty();
    (*this).BreakableMeshProperties.mR_IsBroken = false;
    (*this).BreakableMeshProperties.mR_IsMaterialSwitched = false;
    (*this).BreakableMeshProperties.bCanTakeBulletDamage = true;
    (*this).BreakableMeshProperties.bCanTakeMeleeDamage = true;
    (*this).BreakableMeshProperties.bCanTakeExplosiveDamage = true;
    (*this).BreakableMeshProperties.bCanTakeBreachExplosiveDamage = false;
    (*this).BreakableMeshProperties.HealthToSwitchMaterial = 0;
    (*this).BreakableMeshProperties.bSimulatePhysicsOnBreak = false;
    (*this).BreakableMeshProperties.BreakOtherComponents.Empty();
    (*this).BreakableMeshProperties.StaticMeshBroken = nullptr;
    (*this).BreakableMeshProperties.ParticleBreak = nullptr;
    (*this).BreakableMeshProperties.ParticleInstanceParameters.Empty();
    (*this).BreakableMeshProperties.ParticleSpawnOffset = FTransform(FQuat(0.000000000e+00,0.000000000e+00,0.000000000e+00,1.000000000e+00), FVector(0.000000000e+00,0.000000000e+00,0.000000000e+00), FVector(1.000000000e+00,1.000000000e+00,1.000000000e+00));
    (*this).BreakableMeshProperties.MaterialsOnBreak.Empty();
    (*this).BreakableMeshProperties.AkEventOnBreak = nullptr;
    (*this).BreakableMeshProperties.AkEventOnImpact = nullptr;
}

