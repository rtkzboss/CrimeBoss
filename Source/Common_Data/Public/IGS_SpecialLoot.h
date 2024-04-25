#pragma once
#include "CoreMinimal.h"
#include "IGS_SpecificSpecialLoot.h"
#include "IGS_SpecialLoot.generated.h"

USTRUCT(BlueprintType)
struct FIGS_SpecialLoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_SpecificSpecialLoot> Loot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Money;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFilled;
    
    COMMON_DATA_API FIGS_SpecialLoot();
};

