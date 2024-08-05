#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_CallWalkieTalkieBase.h"
#include "BTTask_CallWalkieTalkieAlertedByOtherChar.generated.h"

class UIGS_AISuspiciousnessComponentBase;

UCLASS(Blueprintable)
class BF_AI_API UBTTask_CallWalkieTalkieAlertedByOtherChar : public UBTTask_CallWalkieTalkieBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector OffenceDataKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_AISuspiciousnessComponentBase* m_SusComp;
    
public:
    UBTTask_CallWalkieTalkieAlertedByOtherChar();

};

