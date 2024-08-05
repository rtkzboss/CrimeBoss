#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "EIGS_TeamSideEnum.h"
#include "IGS_EnvQueryGenerator_GetCharactersForShoutAt.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_AI_API UIGS_EnvQueryGenerator_GetCharactersForShoutAt : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EIGS_TeamSideEnum> TeamSides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceCalm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceDetecting;
    
    UIGS_EnvQueryGenerator_GetCharactersForShoutAt();

};

