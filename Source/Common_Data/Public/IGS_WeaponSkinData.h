#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_WeaponSkinMaterial.h"
#include "IGS_WeaponSkinData.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_WeaponSkinData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FIGS_WeaponSkinMaterial> SkinMaterialSlot;
    
    UIGS_WeaponSkinData();

};

