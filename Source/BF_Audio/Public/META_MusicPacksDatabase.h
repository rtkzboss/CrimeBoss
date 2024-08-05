#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "META_MusicPacksTableRow.h"
#include "META_MusicPacksDatabase.generated.h"

class UObject;

UCLASS(Blueprintable)
class BF_AUDIO_API UMETA_MusicPacksDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UMETA_MusicPacksDatabase();

    UFUNCTION(BlueprintCallable)
    static FMETA_MusicPacksTableRow GetMusicData(UObject* inWCO, const FGameplayTag inMusicID, bool& outSucceeded);
    
};

