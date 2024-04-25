#pragma once
#include "CoreMinimal.h"
#include "IGS_PlayerBotOverrideSettings.h"
#include "IGS_PlayerBotSettings.h"
#include "IGS_PlayerBotItemsData.generated.h"

USTRUCT(BlueprintType)
struct BF_AI_API FIGS_PlayerBotItemsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_PlayerBotSettings DefaultSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_PlayerBotOverrideSettings> OverridetSettings;
    
    FIGS_PlayerBotItemsData();
};

