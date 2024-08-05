#pragma once
#include "CoreMinimal.h"
#include "IGS_BotOrderData.generated.h"

class AIGS_GameCharacterFramework;

USTRUCT(BlueprintType)
struct FIGS_BotOrderData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnterTime;
    
    BF_AI_API FIGS_BotOrderData();
};

