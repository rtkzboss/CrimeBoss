#pragma once
#include "CoreMinimal.h"
#include "EIGS_AmmoBoxItem.h"
#include "IGS_AmmoBoxSpawnItem.generated.h"

USTRUCT(BlueprintType)
struct BF_FRAMEWORKGAME_API FIGS_AmmoBoxSpawnItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_AmmoBoxItem ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnChance;
    
    FIGS_AmmoBoxSpawnItem();
};

