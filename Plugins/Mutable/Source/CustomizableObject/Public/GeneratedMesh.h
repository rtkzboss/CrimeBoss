#pragma once
#include "CoreMinimal.h"
#include "GeneratedMesh.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FGeneratedMesh {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    CUSTOMIZABLEOBJECT_API FGeneratedMesh();
};

