#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "EIGS_BleedType.h"
#include "BTDecorator_HasBleedingType.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_HasBleedingType : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_BleedType DesiredBleedType;
    
    UBTDecorator_HasBleedingType();

};

