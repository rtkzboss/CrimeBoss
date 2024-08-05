#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_SquadDoorBreachBase.h"
#include "IGS_BTTask_SquadDoorBreachFight.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AICommand;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_SquadDoorBreachFight : public UIGS_BTTask_SquadDoorBreachBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* FightingCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AICommand* BreachFightCommand;
    
public:
    UIGS_BTTask_SquadDoorBreachFight();

};

