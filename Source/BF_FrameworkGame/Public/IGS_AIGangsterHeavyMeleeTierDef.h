#pragma once
#include "CoreMinimal.h"
#include "IGS_AIGangsterHeavyMeleeTierData.h"
#include "IGS_AIGangsterTierDef.h"
#include "IGS_AIGangsterHeavyMeleeTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIGangsterHeavyMeleeTierDef : public FIGS_AIGangsterTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterHeavyMeleeTierData SpecStats;
    
    FIGS_AIGangsterHeavyMeleeTierDef();
};

