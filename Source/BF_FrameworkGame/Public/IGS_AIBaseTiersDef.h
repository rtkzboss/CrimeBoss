#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseTiersDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIBaseTiersDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TierSelection;
    
    FIGS_AIBaseTiersDef();
};

