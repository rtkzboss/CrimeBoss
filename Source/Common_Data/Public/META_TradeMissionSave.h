#pragma once
#include "CoreMinimal.h"
#include "META_BaseMissionSave.h"
#include "META_TradeMissionSave.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_TradeMissionSave : public FMETA_BaseMissionSave {
    GENERATED_BODY()
public:
    FMETA_TradeMissionSave();
};

