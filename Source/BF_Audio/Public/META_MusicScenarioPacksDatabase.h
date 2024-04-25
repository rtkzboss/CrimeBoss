#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "META_MusicScenarioPacksTableRow.h"
#include "META_MusicScenarioPacksDatabase.generated.h"

class UObject;

UCLASS(Blueprintable)
class BF_AUDIO_API UMETA_MusicScenarioPacksDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_MusicScenarioPacksDatabase();

    UFUNCTION(BlueprintCallable)
    static FMETA_MusicScenarioPacksTableRow GetMusicData(UObject* inWCO, const FGameplayTag inMusicID, bool& outSucceeded);
    
};

