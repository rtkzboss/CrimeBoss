#pragma once
#include "CoreMinimal.h"
#include "IGS_ThrowableCooldownModifierDef.h"
#include "IGS_PlayerCountThrowableCooldownModifierDef.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_PlayerCountThrowableCooldownModifierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ThrowableCooldownModifierDef TwoPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ThrowableCooldownModifierDef ThreePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ThrowableCooldownModifierDef FourPlayers;
    
    FIGS_PlayerCountThrowableCooldownModifierDef();
};

