#pragma once
#include "CoreMinimal.h"
#include "META_DailyManagerSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FMETA_DailyManagerSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 CurrentDay;
    
    FMETA_DailyManagerSaveData();
};

