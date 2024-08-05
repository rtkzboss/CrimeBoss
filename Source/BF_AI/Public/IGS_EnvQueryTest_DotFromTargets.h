#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "IGS_EnvQueryTest_DotFromTargets.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class BF_AI_API UIGS_EnvQueryTest_DotFromTargets : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Characters;
    
    UIGS_EnvQueryTest_DotFromTargets();

};

