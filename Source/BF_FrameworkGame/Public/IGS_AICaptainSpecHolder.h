#pragma once
#include "CoreMinimal.h"
#include "IGS_AICaptainSpecData.h"
#include "IGS_AICaptainSpecHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AICaptainSpecHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_AICaptainSpecData> Captains;
    
    FIGS_AICaptainSpecHolder();
};

