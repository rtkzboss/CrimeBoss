#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_GameplayEffectTarget.h"
#include "Templates/SubclassOf.h"
#include "BTTask_ApplyGameplayEffect.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable)
class BF_AI_API UBTTask_ApplyGameplayEffect : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_GameplayEffectTarget Target;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFloatInterval Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> GameplayEffect;
    
    UBTTask_ApplyGameplayEffect();

};

