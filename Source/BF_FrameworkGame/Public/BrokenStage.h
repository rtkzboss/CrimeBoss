#pragma once
#include "CoreMinimal.h"
#include "BrokenStage.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FBrokenStage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HealthPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    BF_FRAMEWORKGAME_API FBrokenStage();
};

