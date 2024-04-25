#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_EntitlementItemsSaveData.generated.h"

USTRUCT(BlueprintType)
struct COMMON_SAVE_API FIGS_EntitlementItemsSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer IDs;
    
    FIGS_EntitlementItemsSaveData();
};

