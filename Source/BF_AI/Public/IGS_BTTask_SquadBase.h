#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "DelayedCommand.h"
#include "IGS_BTTask_SquadBase.generated.h"

class AIGS_GameCharacterFramework;
class AIGS_SquadBase;
class UIGS_AICommand;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_SquadBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_SquadBase* Squad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UIGS_AICommand*> Commands;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<AIGS_GameCharacterFramework*, FDelayedCommand> DelayedCommands;
    
public:
    UIGS_BTTask_SquadBase();

};

