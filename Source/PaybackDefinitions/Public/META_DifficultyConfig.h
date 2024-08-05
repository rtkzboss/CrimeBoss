#pragma once
#include "CoreMinimal.h"
#include "EIGS_ScenarioDifficulty.h"
#include "META_DifficultyConfig.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_DifficultyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_ScenarioDifficulty, int32> Config;
    
    FMETA_DifficultyConfig();
};

