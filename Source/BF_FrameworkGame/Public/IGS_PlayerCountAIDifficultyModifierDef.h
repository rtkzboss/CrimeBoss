#pragma once
#include "CoreMinimal.h"
#include "IGS_AIUnitBaseDataMultipliers.h"
#include "IGS_PlayerCountAIDifficultyModifierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_PlayerCountAIDifficultyModifierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIUnitBaseDataMultipliers TwoPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIUnitBaseDataMultipliers ThreePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AIUnitBaseDataMultipliers FourPlayers;
    
    FIGS_PlayerCountAIDifficultyModifierDef();
};

