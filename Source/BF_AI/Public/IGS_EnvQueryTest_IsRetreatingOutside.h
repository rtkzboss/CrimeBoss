#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "IGS_EnvQueryTest_IsRetreatingOutside.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class BF_AI_API UIGS_EnvQueryTest_IsRetreatingOutside : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UEnvQueryContext>> Contexts;
    
    UIGS_EnvQueryTest_IsRetreatingOutside();

};

