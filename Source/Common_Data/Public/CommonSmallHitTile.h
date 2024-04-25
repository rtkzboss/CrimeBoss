#pragma once
#include "CoreMinimal.h"
#include "CommonSmallHitTile.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FCommonSmallHitTile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpecificTiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> SpecifiedTiles;
    
    FCommonSmallHitTile();
};

