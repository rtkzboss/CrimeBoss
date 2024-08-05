#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_AISpawnGroupSide.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UEnvQueryTest_AISpawnGroupSide : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> SideOf;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue SidesBitflag;
    
    UEnvQueryTest_AISpawnGroupSide();

};

