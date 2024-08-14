#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_BonusGameData.generated.h"

USTRUCT(BlueprintType)
struct FIGS_BonusGameData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FDateTime LastClaimedDailyMultiplayerDateTime;
    
    COMMON_SAVE_API FIGS_BonusGameData();
};

