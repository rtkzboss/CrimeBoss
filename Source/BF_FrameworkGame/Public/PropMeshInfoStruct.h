#pragma once
#include "CoreMinimal.h"
#include "MeshInfoStruct.h"
#include "PropMeshInfoStruct.generated.h"

USTRUCT(BlueprintType)
struct FPropMeshInfoStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PivotVariationMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshInfoStruct> MeshesToSpawn;
    
    BF_FRAMEWORKGAME_API FPropMeshInfoStruct();
};

