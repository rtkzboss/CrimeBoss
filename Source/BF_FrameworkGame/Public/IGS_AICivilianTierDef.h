#pragma once
#include "CoreMinimal.h"
#include "IGS_AIBaseTierDef.h"
#include "IGS_AICivilianBaseDataModifiers.h"
#include "IGS_AICivilianTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AICivilianTierDef : public FIGS_AIBaseTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AICivilianBaseDataModifiers Stats;
    
    FIGS_AICivilianTierDef();
};

