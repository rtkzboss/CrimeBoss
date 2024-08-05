#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest_MountedGunIsContextInFireDot.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable)
class BF_AI_API UEnvQueryTest_MountedGunIsContextInFireDot : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationBoundsMutlipier;
    
    UEnvQueryTest_MountedGunIsContextInFireDot();

};

