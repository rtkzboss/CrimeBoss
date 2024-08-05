#pragma once
#include "CoreMinimal.h"
#include "META_WeaponAmountInfo.generated.h"

class UMETA_Weapon;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_WeaponAmountInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMETA_Weapon*> WeaponObjects;
    
    FMETA_WeaponAmountInfo();
};

