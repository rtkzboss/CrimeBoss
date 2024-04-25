#pragma once
#include "CoreMinimal.h"
#include "CommonMissionDataBase.h"
#include "CommonMissionDataStory.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FCommonMissionDataStory : public FCommonMissionDataBase {
    GENERATED_BODY()
public:
    FCommonMissionDataStory();
};

