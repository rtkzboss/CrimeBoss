#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponModeUIData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponModeUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    FIGS_WeaponModeUIData();
};

