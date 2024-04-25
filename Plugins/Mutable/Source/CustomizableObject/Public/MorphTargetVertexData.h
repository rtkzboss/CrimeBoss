#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MorphTargetVertexData.generated.h"

USTRUCT(BlueprintType)
struct FMorphTargetVertexData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PositionDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TangentZDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MorphIndex;
    
    CUSTOMIZABLEOBJECT_API FMorphTargetVertexData();
};

