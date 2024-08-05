#pragma once
#include "CoreMinimal.h"
#include "IGS_VisibilityModData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_VisibilityModData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsFlashlight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsLaser;
    
    FIGS_VisibilityModData();
};

