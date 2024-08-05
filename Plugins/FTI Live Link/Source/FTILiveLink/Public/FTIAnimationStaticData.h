#pragma once
#include "CoreMinimal.h"
#include "LiveLinkTypes.h"
#include "FTIAnimationStaticData.generated.h"

USTRUCT(BlueprintType)
struct FTILIVELINK_API FFTIAnimationStaticData : public FLiveLinkBaseStaticData {
    GENERATED_BODY()
public:
    FFTIAnimationStaticData();
};

