#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_HasLosThroughCharacters.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class BF_AI_API UEnvQueryTest_HasLosThroughCharacters : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> LosTargetContext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> OtherCharactersContext;
    
    UEnvQueryTest_HasLosThroughCharacters();

};

