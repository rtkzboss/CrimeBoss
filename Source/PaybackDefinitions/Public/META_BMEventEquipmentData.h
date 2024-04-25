#pragma once
#include "CoreMinimal.h"
#include "META_EquipmentQualityChance.h"
#include "META_BMEventEquipmentData.generated.h"

USTRUCT(BlueprintType)
struct FMETA_BMEventEquipmentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinAvailableCash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfEquipmentPerEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ExpirationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_EquipmentQualityChance> EquipmentQualitiesChances;
    
    PAYBACKDEFINITIONS_API FMETA_BMEventEquipmentData();
};

