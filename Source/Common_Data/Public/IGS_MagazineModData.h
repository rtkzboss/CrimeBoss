#pragma once
#include "CoreMinimal.h"
#include "IGS_MagazineModData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_MagazineModData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtendedAmmoCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExtendedReserveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReloadTimeMultiplier;
    
    FIGS_MagazineModData();
};

