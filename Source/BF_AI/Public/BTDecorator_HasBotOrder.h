#pragma once
#include "CoreMinimal.h"
#include "EIGS_BotCommandDefinition.h"
#include "IGS_BTDecorator_Base.h"
#include "BTDecorator_HasBotOrder.generated.h"

UCLASS(Blueprintable)
class BF_AI_API UBTDecorator_HasBotOrder : public UIGS_BTDecorator_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EIGS_BotCommandDefinition> ExcludedTypes;
    
    UBTDecorator_HasBotOrder();

};

