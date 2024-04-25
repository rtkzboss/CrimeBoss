#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMETA_ItemQuality.h"
#include "META_ItemSpawnSettings.generated.h"

USTRUCT(BlueprintType)
struct FMETA_ItemSpawnSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ItemQuality ItemQuality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDaily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDaily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StayInShopDays;
    
    CRIMEBOSSMETA_API FMETA_ItemSpawnSettings();
};

