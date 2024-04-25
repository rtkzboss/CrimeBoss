#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerCountBotDamageReceivedModifierDef.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_PlayerCountBotDamageReceivedModifierDef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* OnePlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TwoPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* ThreePlayers;
    
    FIGS_PlayerCountBotDamageReceivedModifierDef();
};

