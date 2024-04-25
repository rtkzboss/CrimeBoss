#pragma once
#include "CoreMinimal.h"
#include "SpawnIntensitySetup.generated.h"

USTRUCT(BlueprintType)
struct FSpawnIntensitySetup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FakeSpawnUsedPercantage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDelayBetweenWavesCoef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxEnemiesInSceneAddon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AssaultDurationAddon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EnemyDispersionCoef;
    
    BF_FRAMEWORKGAME_API FSpawnIntensitySetup();
};

