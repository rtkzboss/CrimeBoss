#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EIGS_TeamSideEnum.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryGenerator_GetAllCharactersOfTeamsides.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, EditInlineNew)
class BF_AI_API UEnvQueryGenerator_GetAllCharactersOfTeamsides : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> GenerateAround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIGS_TeamSideEnum> TeamSides;
    
    UEnvQueryGenerator_GetAllCharactersOfTeamsides();

};

