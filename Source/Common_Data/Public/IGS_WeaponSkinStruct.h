#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_WeaponSkinStruct.generated.h"

class UIGS_WeaponSkinData;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_WeaponSkinStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TagID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UIGS_WeaponSkinData> WeaponSkinID;
    
    FIGS_WeaponSkinStruct();
};

