#pragma once
#include "CoreMinimal.h"
#include "IGS_DualSenseWeaponMode.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_DualSenseWeaponMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OverrideEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 StartPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 EndPosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Strength;
    
    FIGS_DualSenseWeaponMode();
};

