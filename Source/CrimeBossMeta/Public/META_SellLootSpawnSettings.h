#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMETA_ItemQuality.h"
#include "META_SellLootSpawnSettings.generated.h"

USTRUCT(BlueprintType)
struct FMETA_SellLootSpawnSettings : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_ItemQuality Quality;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinDaily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxDaily;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCountInStack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool OnlyIfPlayerHasSom;
    
    CRIMEBOSSMETA_API FMETA_SellLootSpawnSettings();
};

