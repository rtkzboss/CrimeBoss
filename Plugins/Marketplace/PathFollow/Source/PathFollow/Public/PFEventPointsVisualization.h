#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "PFEventPointsVisualization.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct PATHFOLLOW_API FPFEventPointsVisualization {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideEventPoints;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideEventPointInfoText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor EventPointsColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EventPointHitProxySize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* _EventPointSpriteTexture;
    
    FPFEventPointsVisualization();
};

