#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CommonHeisterLoadout.h"
#include "META_PerkData.h"
#include "META_HeisterRandomizedData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_HeisterRandomizedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FinalCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FinalUpkeep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MissionCut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Traits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_PerkData> Perks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCommonHeisterLoadout Loadout;
    
    FMETA_HeisterRandomizedData();
};

