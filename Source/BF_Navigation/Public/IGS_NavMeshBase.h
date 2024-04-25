#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "IGS_NavMeshBase.generated.h"

UCLASS(Blueprintable)
class BF_NAVIGATION_API AIGS_NavMeshBase : public ARecastNavMesh {
    GENERATED_BODY()
public:
    AIGS_NavMeshBase(const FObjectInitializer& ObjectInitializer);

};

