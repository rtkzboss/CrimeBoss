#pragma once
#include "CoreMinimal.h"
#include "IGS_WeaponSkinMaterial.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponSkinMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* TortillaMaterial;
    
    FIGS_WeaponSkinMaterial();
};

