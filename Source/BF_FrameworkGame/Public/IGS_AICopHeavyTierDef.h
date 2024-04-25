#pragma once
#include "CoreMinimal.h"
#include "IGS_AICopHeavyTierData.h"
#include "IGS_AICopTierDef.h"
#include "IGS_AICopHeavyTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AICopHeavyTierDef : public FIGS_AICopTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AICopHeavyTierData SpecStats;
    
    FIGS_AICopHeavyTierDef();
};

