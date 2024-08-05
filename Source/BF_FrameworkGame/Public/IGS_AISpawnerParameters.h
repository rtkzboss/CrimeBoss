#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "IGS_AISpawnerParameters.generated.h"

class UIGS_SettingsID;

USTRUCT(BlueprintType)
struct FIGS_AISpawnerParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_SettingsID> SettingsOverride;
    
    BF_FRAMEWORKGAME_API FIGS_AISpawnerParameters();
};

