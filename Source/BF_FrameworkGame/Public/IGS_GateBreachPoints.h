#pragma once
#include "CoreMinimal.h"
#include "IGS_BreachPointsBase.h"
#include "IGS_GateBreachPoints.generated.h"

class UIGS_BreachPointComponent;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_GateBreachPoints : public AIGS_BreachPointsBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BreachPointComponent* StackEntryPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BreachPointComponent* BreachEntryPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BreachPointComponent* StackExitPoint;
    
    AIGS_GateBreachPoints(const FObjectInitializer& ObjectInitializer);

};

