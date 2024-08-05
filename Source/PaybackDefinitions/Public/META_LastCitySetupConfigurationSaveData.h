#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "META_LastCitySetupConfigurationSaveData.generated.h"

USTRUCT(BlueprintType)
struct PAYBACKDEFINITIONS_API FMETA_LastCitySetupConfigurationSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastPlayerTileGroupIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> LastPlayerInitialTileGroup;
    
    FMETA_LastCitySetupConfigurationSaveData();
};

