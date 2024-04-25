#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EIGS_TeamSideEnum.h"
#include "EnvQueryTest_IsCharacterOfTeamSide.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UEnvQueryTest_IsCharacterOfTeamSide : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_TeamSideEnum TeamSide;
    
    UEnvQueryTest_IsCharacterOfTeamSide();

};

