#pragma once
#include "CoreMinimal.h"
#include "EIGS_GRWaitType.h"
#include "IGS_GeneralReactionsDef.h"
#include "IGS_GeneralReactionsDefsHolder.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_GeneralReactionsDefsHolder {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_GRWaitType, FIGS_GeneralReactionsDef> ReactionOverrides;
    
    FIGS_GeneralReactionsDefsHolder();
};

