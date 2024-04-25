#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "IGS_ClassTagSettingPair.h"
#include "IGS_PerWeaponClassSettingsDataAsset.generated.h"

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_PerWeaponClassSettingsDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_ClassTagSettingPair> PerClassWeaponSettings;
    
    UIGS_PerWeaponClassSettingsDataAsset();

};

