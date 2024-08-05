#pragma once
#include "CoreMinimal.h"
#include "IGS_AmmoBoxSpawnItem.h"
#include "IGS_AmmoBoxSpawnArray.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AmmoBoxSpawnArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_AmmoBoxSpawnItem> Items;
    
    FIGS_AmmoBoxSpawnArray();
};

