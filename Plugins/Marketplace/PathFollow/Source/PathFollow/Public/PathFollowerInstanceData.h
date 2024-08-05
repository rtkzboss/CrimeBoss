#pragma once
#include "CoreMinimal.h"
#include "ComponentInstanceDataCache.h"
#include "PathFollowerInstanceData.generated.h"

USTRUCT(BlueprintType)
struct FPathFollowerInstanceData : public FActorComponentInstanceData {
    GENERATED_BODY()
public:
    PATHFOLLOW_API FPathFollowerInstanceData();
};

