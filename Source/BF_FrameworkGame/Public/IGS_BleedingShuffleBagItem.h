#pragma once
#include "CoreMinimal.h"
#include "EIGS_BleedType.h"
#include "IGS_BleedingShuffleBagItem.generated.h"

USTRUCT(BlueprintType)
struct FIGS_BleedingShuffleBagItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_BleedType BleedType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    BF_FRAMEWORKGAME_API FIGS_BleedingShuffleBagItem();
};

