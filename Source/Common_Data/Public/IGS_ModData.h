#pragma once
#include "CoreMinimal.h"
#include "EIGS_ModType.h"
#include "IGS_BarrelModData.h"
#include "IGS_CommonItemData.h"
#include "IGS_CommonModData.h"
#include "IGS_MagazineModData.h"
#include "IGS_ScopeModData.h"
#include "IGS_VisibilityModData.h"
#include "Templates/SubclassOf.h"
#include "IGS_ModData.generated.h"

class UIGS_WeaponInventoryObject;
class UStaticMesh;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ModData : public FIGS_CommonItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WeaponInventoryObject> CompatibleWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ModType ModType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> ModMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_CommonModData CommonModData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_BarrelModData BarrelModData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ScopeModData ScopeModData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_MagazineModData MagazineModData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_VisibilityModData VisibilityModData;
    
    FIGS_ModData();
};

