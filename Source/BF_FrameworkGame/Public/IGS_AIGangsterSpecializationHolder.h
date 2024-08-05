#pragma once
#include "CoreMinimal.h"
#include "EIGS_GangsterVariationType.h"
#include "IGS_AIBaseSpecializationHolder.h"
#include "IGS_AIGangsterDefaultTierDef.h"
#include "IGS_AIGangsterDetectiveTierDef.h"
#include "IGS_AIGangsterHeavyMeleeTierDef.h"
#include "IGS_AIGangsterHeavyTierDef.h"
#include "IGS_AIGangsterShieldTierDef.h"
#include "IGS_AIGangsterSniperTierDef.h"
#include "IGS_AIGangsterTurfwarDefaultTierDef.h"
#include "IGS_AIGangsterSpecializationHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AIGangsterSpecializationHolder : public FIGS_AIBaseSpecializationHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_GangsterVariationType Variation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterDefaultTierDef Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterSniperTierDef Sniper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterShieldTierDef Shield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterHeavyTierDef Heavy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterDetectiveTierDef Detective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterTurfwarDefaultTierDef TurfWar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIGangsterHeavyMeleeTierDef HeavyMelee;
    
    FIGS_AIGangsterSpecializationHolder();
};

