#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_MissionOnTileInfo.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_MissionOnTileInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag OwningTileTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TilePositionIndex;
    
    FMETA_MissionOnTileInfo();
};

