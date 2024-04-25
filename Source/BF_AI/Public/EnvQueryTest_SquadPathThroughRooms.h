#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EIGS_NavFilterType.h"
#include "EnvQueryTest_SquadPathThroughRooms.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UEnvQueryTest_SquadPathThroughRooms : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_NavFilterType NavFilterType;
    
    UEnvQueryTest_SquadPathThroughRooms();

};

