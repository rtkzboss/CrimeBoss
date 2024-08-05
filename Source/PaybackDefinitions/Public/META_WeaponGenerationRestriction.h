#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_WeaponGenerationRestriction.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_WeaponGenerationRestriction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer WaponFilter;
    
    FMETA_WeaponGenerationRestriction();
};

