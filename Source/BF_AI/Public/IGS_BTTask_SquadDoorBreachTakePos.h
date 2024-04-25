#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EIGS_AIMontageBreachVariant.h"
#include "EIGS_AINotif.h"
#include "IGS_BTTask_SquadDoorBreachBase.h"
#include "IGS_BTTask_SquadDoorBreachTakePos.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AICommand;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_SquadDoorBreachTakePos : public UIGS_BTTask_SquadDoorBreachBase {
    GENERATED_BODY()
public:
    UIGS_BTTask_SquadDoorBreachTakePos();

    UFUNCTION(BlueprintCallable)
    void OnNotifyReceived(EIGS_AINotif Type, AIGS_GameCharacterFramework* Instigator, AIGS_GameCharacterFramework* Target, FVector Pos, FVector dir);
    
protected:
    UFUNCTION(BlueprintCallable)
    static bool IsCommandActive(UIGS_AICommand* AICommand);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommand* CommandToTakePosition(AIGS_GameCharacterFramework* agent, FVector InPos, FVector inMoveLookPos, FVector inFinalLookPos, EIGS_AIMontageBreachVariant MontageVariant);
    
};

