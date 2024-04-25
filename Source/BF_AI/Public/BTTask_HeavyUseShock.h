#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BTTask_HeavyUseShock.generated.h"

class AActor;

UCLASS(Blueprintable)
class BF_AI_API UBTTask_HeavyUseShock : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_Target;
    
public:
    UBTTask_HeavyUseShock();

};

