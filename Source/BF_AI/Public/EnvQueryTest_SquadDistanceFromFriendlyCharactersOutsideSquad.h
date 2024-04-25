#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_SquadDistanceFromFriendlyCharactersOutsideSquad.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class BF_AI_API UEnvQueryTest_SquadDistanceFromFriendlyCharactersOutsideSquad : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> FriendlyActorsContext;
    
    UEnvQueryTest_SquadDistanceFromFriendlyCharactersOutsideSquad();

};

