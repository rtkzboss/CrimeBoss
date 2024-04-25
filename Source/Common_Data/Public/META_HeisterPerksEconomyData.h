#pragma once
#include "CoreMinimal.h"
#include "EMETA_PerksPreference.h"
#include "META_Interval.h"
#include "EIGS_PerkClass.h"
#include "META_HeisterPerksEconomyData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_HeisterPerksEconomyData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval AmountOfPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval PowerfulPerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNegativePerks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNegativePerksForPromotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinPerksForPromotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PerkClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_PerkClass, EMETA_PerksPreference> Preference;
    
    FMETA_HeisterPerksEconomyData();
};

