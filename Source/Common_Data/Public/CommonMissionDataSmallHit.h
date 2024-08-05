#pragma once
#include "CoreMinimal.h"
#include "CommonMissionDataBase.h"
#include "CommonMissionDataSmallHit.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FCommonMissionDataSmallHit : public FCommonMissionDataBase {
    GENERATED_BODY()
public:
    FCommonMissionDataSmallHit();
};

