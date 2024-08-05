#pragma once
#include "CoreMinimal.h"
#include "PendingReleaseSkeletalMeshInfo.generated.h"

class USkeletalMesh;

USTRUCT(BlueprintType)
struct FPendingReleaseSkeletalMeshInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* SkeletalMesh;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double Timestamp;
    
    CUSTOMIZABLEOBJECT_API FPendingReleaseSkeletalMeshInfo();
};

