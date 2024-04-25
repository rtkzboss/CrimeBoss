#pragma once
#include "CoreMinimal.h"
#include "META_Interval.h"
#include "Templates/SubclassOf.h"
#include "META_JobLootSettings.generated.h"

class UIGS_LootItemInventoryObject;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FMETA_JobLootSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_LootItemInventoryObject> Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_Interval RandomAmountInterval;
    
    FMETA_JobLootSettings();
};

