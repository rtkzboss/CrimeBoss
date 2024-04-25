#pragma once
#include "CoreMinimal.h"
#include "MeshSpawnerIndexPairStruct.generated.h"

class UIGS_PropMeshSpawner;

USTRUCT(BlueprintType)
struct FMeshSpawnerIndexPairStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_PropMeshSpawner* PropMeshSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Index;
    
    PAYBACK_API FMeshSpawnerIndexPairStruct();
};

