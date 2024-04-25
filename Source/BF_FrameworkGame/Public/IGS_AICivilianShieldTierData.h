#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseShieldTierData.h"
#include "IGS_AICivilianShieldTierData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AICivilianShieldTierData : public FIGS_AIBaseShieldTierData {
    GENERATED_BODY()
public:
    FIGS_AICivilianShieldTierData();
};

