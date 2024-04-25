#pragma once
#include "CoreMinimal.h"
#include "META_WeaponClassChance.h"
#include "META_WeaponQualityChance.h"
#include "META_BMEventWeaponData.generated.h"

USTRUCT(BlueprintType)
struct FMETA_BMEventWeaponData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinAvailableCash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfWeaponsPerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_WeaponClassChance> WeaponClassesChances;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_WeaponQualityChance> WeaponQualitiesChances;
    
    PAYBACKDEFINITIONS_API FMETA_BMEventWeaponData();
};

