#pragma once
#include "CoreMinimal.h"
#include "BinkSubtitleItem.generated.h"

USTRUCT(BlueprintType)
struct PAYBACK_API FBinkSubtitleItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    FBinkSubtitleItem();
};

