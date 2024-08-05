#pragma once
#include "CoreMinimal.h"
#include "META_WeaponCachedData.h"
#include "META_WeaponsArrayCached.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_WeaponsArrayCached {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_WeaponCachedData> Weapons;
    
    FMETA_WeaponsArrayCached();
};

