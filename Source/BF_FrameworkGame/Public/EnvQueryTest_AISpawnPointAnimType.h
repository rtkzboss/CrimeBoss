#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvQueryTest_AISpawnPointAnimType.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UEnvQueryTest_AISpawnPointAnimType : public UEnvQueryTest {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue AnimType;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderIntValue CheckAnimType;
    
public:
    UEnvQueryTest_AISpawnPointAnimType();

};

