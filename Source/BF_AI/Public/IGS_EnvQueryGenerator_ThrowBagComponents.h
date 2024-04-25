#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "IGS_EnvQueryGenerator_ThrowBagComponents.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_AI_API UIGS_EnvQueryGenerator_ThrowBagComponents : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistanceDefend;
    
public:
    UIGS_EnvQueryGenerator_ThrowBagComponents();

};

