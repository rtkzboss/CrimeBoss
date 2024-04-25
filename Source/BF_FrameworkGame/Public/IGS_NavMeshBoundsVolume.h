#pragma once
#include "CoreMinimal.h"
#include "NavMesh/NavMeshBoundsVolume.h"
#include "IGS_NavMeshBoundsVolume.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_NavMeshBoundsVolume : public ANavMeshBoundsVolume {
    GENERATED_BODY()
public:
    AIGS_NavMeshBoundsVolume(const FObjectInitializer& ObjectInitializer);

};

