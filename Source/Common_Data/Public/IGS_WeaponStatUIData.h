#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponStatUIData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponStatUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisplayAsBar;
    
    FIGS_WeaponStatUIData();
};

