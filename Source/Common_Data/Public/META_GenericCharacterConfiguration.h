#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "META_GenericCharacterConfiguration.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_GenericCharacterConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval LevelRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowedWeaponQualities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AllowedEquipmentQualities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StartingPerkCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumPerkCount;
    
    FMETA_GenericCharacterConfiguration();
};

