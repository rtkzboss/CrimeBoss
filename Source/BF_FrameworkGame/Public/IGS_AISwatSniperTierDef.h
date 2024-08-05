#pragma once
#include "CoreMinimal.h"
#include "IGS_AISwatSniperTierData.h"
#include "IGS_AISwatTierDef.h"
#include "IGS_AISwatSniperTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AISwatSniperTierDef : public FIGS_AISwatTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AISwatSniperTierData SpecStats;
    
    FIGS_AISwatSniperTierDef();
};

