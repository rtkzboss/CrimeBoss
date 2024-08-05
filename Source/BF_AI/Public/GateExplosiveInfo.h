#pragma once
#include "CoreMinimal.h"
#include "GateExplosiveInfo.generated.h"

class UIGS_BreachPointComponent;

USTRUCT(BlueprintType)
struct FGateExplosiveInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BreachPointComponent* ExplosivePoint;
    
    BF_AI_API FGateExplosiveInfo();
};

