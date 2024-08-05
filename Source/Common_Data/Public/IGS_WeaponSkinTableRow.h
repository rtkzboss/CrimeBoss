#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "IGS_UnlockProperties.h"
#include "IGS_WeaponSkinMaterialParameters.h"
#include "IGS_WeaponSkinStruct.h"
#include "Templates/SubclassOf.h"
#include "IGS_WeaponSkinTableRow.generated.h"

class UIGS_WeaponSkinData;
class UIGS_WieldableInventoryObjectBase;
class UTexture2D;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponSkinTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RootTagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SkinName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> SkinImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_WeaponSkinData> ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ItemQuality SkinQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_UnlockProperties UnlockProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WeaponSkinMaterialParameters MaterialParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<UIGS_WieldableInventoryObjectBase>, FIGS_WeaponSkinStruct> SkinMaterialSlot;
    
    FIGS_WeaponSkinTableRow();
};

