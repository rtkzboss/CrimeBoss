#pragma once
#include "CoreMinimal.h"
#include "IGS_NavMeshBase.h"
#include "IGS_CarNavMesh.generated.h"

UCLASS(Blueprintable)
class BF_NAVIGATION_API AIGS_CarNavMesh : public AIGS_NavMeshBase {
    GENERATED_BODY()
public:
    AIGS_CarNavMesh(const FObjectInitializer& ObjectInitializer);

};

