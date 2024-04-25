#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CustomizableObjectMeshToMeshVertData.generated.h"

USTRUCT(BlueprintType)
struct FCustomizableObjectMeshToMeshVertData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 PositionBaryCoordsAndDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 NormalBaryCoordsAndDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector4 TangentBaryCoordsAndDist;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 SourceMeshVertIndices[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 SourceAssetIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 SourceAssetLodIndex;
    
    CUSTOMIZABLEOBJECT_API FCustomizableObjectMeshToMeshVertData();
};

