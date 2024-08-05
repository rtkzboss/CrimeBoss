#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_ShootingOverrideType.h"
#include "BTDecorator_HasShootOverrideType.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_HasShootOverrideType : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_ShootingOverrideType ShootingType;
    
public:
    UBTDecorator_HasShootOverrideType();

};

