#pragma once
#include "CoreMinimal.h"
#include "IGS_AIGangsterSniperTierData.h"
#include "IGS_AIGangsterTierDef.h"
#include "IGS_AIGangsterSniperTierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIGangsterSniperTierDef : public FIGS_AIGangsterTierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterSniperTierData SpecStats;
    
    FIGS_AIGangsterSniperTierDef();
};

