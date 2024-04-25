#pragma once
#include "CoreMinimal.h"
#include "IGS_AISwatHeavyTierData.h"
#include "IGS_AISwatTierDef.h"
#include "IGS_AISwatHeavyTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AISwatHeavyTierDef : public FIGS_AISwatTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AISwatHeavyTierData SpecStats;
    
    FIGS_AISwatHeavyTierDef();
};

