#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "IGS_ClassTagSettingPair.generated.h"

class UIGS_WeaponClassSettingsDataAsset;

USTRUCT(BlueprintType)
struct COMMON_DATA_API FIGS_ClassTagSettingPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ClassTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_WeaponClassSettingsDataAsset* Settings;
    
    FIGS_ClassTagSettingPair();
};

