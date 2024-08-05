#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseShieldTierData.h"
#include "IGS_AISwatShieldTierData.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AISwatShieldTierData : public FIGS_AIBaseShieldTierData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShieldGlassHP;
    
    FIGS_AISwatShieldTierData();
};

