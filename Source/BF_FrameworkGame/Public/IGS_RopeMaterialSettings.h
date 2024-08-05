#pragma once
#include "CoreMinimal.h"
#include "IGS_RopeMaterialSettings.generated.h"

USTRUCT(BlueprintType)
struct FIGS_RopeMaterialSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParNameTilingU;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaterialTilingU;
    
    BF_FRAMEWORKGAME_API FIGS_RopeMaterialSettings();
};

