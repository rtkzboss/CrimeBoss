#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "IGS_EnvQueryGenerator_ThreatPoints.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class BF_AI_API UIGS_EnvQueryGenerator_ThreatPoints : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Querier;
    
public:
    UIGS_EnvQueryGenerator_ThreatPoints();

};

