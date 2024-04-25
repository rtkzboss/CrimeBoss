#pragma once
#include "CoreMinimal.h"
#include "IGS_AIGangsterHeavyTierData.h"
#include "IGS_AIGangsterTierDef.h"
#include "IGS_AIGangsterHeavyTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIGangsterHeavyTierDef : public FIGS_AIGangsterTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterHeavyTierData SpecStats;
    
    FIGS_AIGangsterHeavyTierDef();
};

