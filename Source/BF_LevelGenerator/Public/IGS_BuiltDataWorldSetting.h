#pragma once
#include "CoreMinimal.h"
#include "IGS_BuiltDataWorldSetting.generated.h"

USTRUCT(BlueprintType)
struct BF_LEVELGENERATOR_API FIGS_BuiltDataWorldSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsesRotatedData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsedWithGenerator;
    
    FIGS_BuiltDataWorldSetting();
};

