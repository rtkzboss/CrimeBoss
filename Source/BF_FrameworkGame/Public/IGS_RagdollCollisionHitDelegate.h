#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_RagdollCollisionHitDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIGS_RagdollCollisionHit, float, inVelocity, float, inBodyMass, FVector, inBodyLocation);

