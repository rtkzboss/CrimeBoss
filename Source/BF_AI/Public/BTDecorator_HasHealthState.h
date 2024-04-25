#pragma once
#include "CoreMinimal.h"
#include "EIGS_HealthState.h"
#include "IGS_BTDecorator_Base.h"
#include "BTDecorator_HasHealthState.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_HasHealthState : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_HealthState DesiredHealthState;
    
    UBTDecorator_HasHealthState();

};

