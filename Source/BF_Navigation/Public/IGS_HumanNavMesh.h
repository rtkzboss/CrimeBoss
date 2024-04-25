#pragma once
#include "CoreMinimal.h"
#include "IGS_NavMeshBase.h"
#include "IGS_HumanNavMesh.generated.h"

UCLASS(Blueprintable)
class BF_NAVIGATION_API AIGS_HumanNavMesh : public AIGS_NavMeshBase {
    GENERATED_BODY()
public:
    AIGS_HumanNavMesh(const FObjectInitializer& ObjectInitializer);

};

