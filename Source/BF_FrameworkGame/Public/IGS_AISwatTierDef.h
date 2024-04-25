#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseTierDef.h"
#include "IGS_AISwatBaseDataModifiers.h"
#include "IGS_AISwatTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AISwatTierDef : public FIGS_AIBaseTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AISwatBaseDataModifiers Stats;
    
    FIGS_AISwatTierDef();
};

