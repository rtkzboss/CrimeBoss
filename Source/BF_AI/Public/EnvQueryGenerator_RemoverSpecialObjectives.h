#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_RemoverSpecialObjectives.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class BF_AI_API UEnvQueryGenerator_RemoverSpecialObjectives : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Querier;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue Range;
    
    UEnvQueryGenerator_RemoverSpecialObjectives();

};

