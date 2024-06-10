#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_ChallengeTableRow.h"
#include "IGS_ChallengesDatabase.generated.h"

class UObject;

UCLASS(Blueprintable)
class COMMON_DATA_API UIGS_ChallengesDatabase : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UIGS_ChallengesDatabase();

    UFUNCTION(BlueprintCallable)
    static FIGS_ChallengeTableRow GetChallenge(UObject* inWCO, FGameplayTag inTagID, bool& outSucceeded);
    
};

