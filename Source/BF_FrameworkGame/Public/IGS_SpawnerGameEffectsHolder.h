#pragma once
#include "CoreMinimal.h"
#include "IGS_SpawnerGameEffectsHolder.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FIGS_SpawnerGameEffectsHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> AIBaseUnitMultipliersGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> AISpreadIncreasedGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> FlashedGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UGameplayEffect> StunnedGE;
    
    BF_FRAMEWORKGAME_API FIGS_SpawnerGameEffectsHolder();
};

