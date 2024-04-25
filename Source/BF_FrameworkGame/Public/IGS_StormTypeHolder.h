#pragma once
#include "CoreMinimal.h"
#include "EIGS_ScenarioDifficulty.h"
#include "IGS_StormHolder.h"
#include "IGS_StormTypeHolder.generated.h"

USTRUCT(BlueprintType)
struct FIGS_StormTypeHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ScenarioDifficulty, FIGS_StormHolder> StormHolders;
    
    BF_FRAMEWORKGAME_API FIGS_StormTypeHolder();
};

