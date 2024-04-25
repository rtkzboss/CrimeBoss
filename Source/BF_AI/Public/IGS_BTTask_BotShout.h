#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ShoutScanData.h"
#include "IGS_BTTask_BotShout.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_BotShout : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShoutDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShoutScanData m_ShoutScanData;
    
public:
    UIGS_BTTask_BotShout();

};

