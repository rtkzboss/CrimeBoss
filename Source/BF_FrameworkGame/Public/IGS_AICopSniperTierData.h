#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseSniperTierData.h"
#include "IGS_AICopSniperTierData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AICopSniperTierData : public FIGS_AIBaseSniperTierData {
    GENERATED_BODY()
public:
    FIGS_AICopSniperTierData();
};

