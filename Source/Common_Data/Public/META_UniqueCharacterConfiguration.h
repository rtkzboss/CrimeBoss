#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_UniqueCharacterConfiguration.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_UniqueCharacterConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval LevelRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingPerkCount;
    
    FMETA_UniqueCharacterConfiguration();
};

