#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_DistanceFromDestinationBase.generated.h"

class UEnvQueryContext;

UCLASS(Abstract, Blueprintable)
class BF_AI_API UEnvQueryTest_DistanceFromDestinationBase : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Characters;
    
    UEnvQueryTest_DistanceFromDestinationBase();

};

