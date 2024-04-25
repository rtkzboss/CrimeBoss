#pragma once
#include "CoreMinimal.h"
#include "IGS_NoSpawnPointSpawnDefinition.h"
#include "IGS_NoSpawnPointDefinition.generated.h"

USTRUCT(BlueprintType)
struct FIGS_NoSpawnPointDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FIGS_NoSpawnPointSpawnDefinition> PassengerSpawnDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFilled;
    
    BF_FRAMEWORKGAME_API FIGS_NoSpawnPointDefinition();
};

