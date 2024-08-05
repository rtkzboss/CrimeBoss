#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EIGS_UserDifficulty.h"
#include "IGS_ChallengesUtilities.generated.h"

class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_ChallengesUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_ChallengesUtilities();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCompletedCampaignCount(UObject* inWCO, EIGS_UserDifficulty inDifficulty);
    
};

