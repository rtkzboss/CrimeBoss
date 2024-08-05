#pragma once
#include "CoreMinimal.h"
#include "EIGS_LightingScenarioType.h"
#include "IGS_LightingScenarioWorldSettings.generated.h"

class UWorld;

USTRUCT(BlueprintType)
struct BF_LEVELGENERATOR_API FIGS_LightingScenarioWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LightingScenarioHelp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLevelIsPersistent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> DefaultLightingScenarioLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDefaultScenario;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EIGS_LightingScenarioType, TSoftObjectPtr<UWorld>> LightingScenarioMapPairs;
    
    FIGS_LightingScenarioWorldSettings();
};

