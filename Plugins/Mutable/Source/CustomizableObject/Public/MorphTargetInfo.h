#pragma once
#include "CoreMinimal.h"
#include "MorphTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct FMorphTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LodNum;
    
    CUSTOMIZABLEOBJECT_API FMorphTargetInfo();
};

