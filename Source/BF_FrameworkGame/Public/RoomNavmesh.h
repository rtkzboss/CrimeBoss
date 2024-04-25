#pragma once
#include "CoreMinimal.h"
#include "IGS_NavMeshBase.h"
#include "RoomNavmesh.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API ARoomNavmesh : public AIGS_NavMeshBase {
    GENERATED_BODY()
public:
    ARoomNavmesh(const FObjectInitializer& ObjectInitializer);

};

