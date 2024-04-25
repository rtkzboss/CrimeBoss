#pragma once
#include "CoreMinimal.h"
#include "IGS_AISwatShieldTierData.h"
#include "IGS_AISwatTierDef.h"
#include "IGS_AISwatShieldTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AISwatShieldTierDef : public FIGS_AISwatTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AISwatShieldTierData SpecStats;
    
    FIGS_AISwatShieldTierDef();
};

