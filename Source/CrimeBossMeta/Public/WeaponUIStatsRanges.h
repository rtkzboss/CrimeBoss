#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "WeaponUIStatsRanges.generated.h"

USTRUCT(BlueprintType)
struct CRIMEBOSSMETA_API FWeaponUIStatsRanges : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Range;
    
    FWeaponUIStatsRanges();
};

