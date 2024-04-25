#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LiveLinkTypes.h"
#include "FTIAnimationValueData.h"
#include "FTIAnimationBlueprintData.generated.h"

USTRUCT(BlueprintType)
struct FTILIVELINK_API FFTIAnimationBlueprintData : public FLiveLinkBaseBlueprintData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFTIAnimationValueData AnimationValues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector HeadPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat HeadRot;
    
    FFTIAnimationBlueprintData();
};

