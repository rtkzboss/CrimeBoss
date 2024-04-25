#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "UObject/NoExportTypes.h"
#include "IGS_BTTask_SniperHidden.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_SniperHidden : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Cooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxThreatToFinish;
    
public:
    UIGS_BTTask_SniperHidden();

};

