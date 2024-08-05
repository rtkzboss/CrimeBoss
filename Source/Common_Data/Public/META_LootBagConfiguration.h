#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_LootBagConfiguration.generated.h"

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_LootBagConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Missions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalLootbagCount;
    
    FMETA_LootBagConfiguration();
};

