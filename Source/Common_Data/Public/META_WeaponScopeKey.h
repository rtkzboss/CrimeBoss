#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EMETA_ItemQuality.h"
#include "META_WeaponScopeKey.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_WeaponScopeKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WieldableClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ItemQuality Quality;
    
    FMETA_WeaponScopeKey();
};
FORCEINLINE uint32 GetTypeHash(const FMETA_WeaponScopeKey) { return 0; }

