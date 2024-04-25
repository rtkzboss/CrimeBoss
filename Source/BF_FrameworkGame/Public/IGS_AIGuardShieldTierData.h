#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseShieldTierData.h"
#include "IGS_AIGuardShieldTierData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIGuardShieldTierData : public FIGS_AIBaseShieldTierData {
    GENERATED_BODY()
public:
    FIGS_AIGuardShieldTierData();
};

