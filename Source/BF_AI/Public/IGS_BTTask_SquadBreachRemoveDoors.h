#pragma once
#include "CoreMinimal.h"
#include "IGS_BTTask_SquadDoorBreachBase.h"
#include "IGS_BTTask_SquadBreachRemoveDoors.generated.h"

class AActor;
class AIGS_GameCharacterFramework;
class UIGS_AICommand;
class UIGS_AICommandBreachRemoveObstacle;
class UObject;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_SquadBreachRemoveDoors : public UIGS_BTTask_SquadDoorBreachBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* ContextActionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AICommand* ContextActionCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* BreachObject;
    
public:
    UIGS_BTTask_SquadBreachRemoveDoors();

protected:
    UFUNCTION(BlueprintCallable)
    static bool IsObstacleCleared(UIGS_AICommandBreachRemoveObstacle* Command);
    
    UFUNCTION(BlueprintCallable)
    static UIGS_AICommand* CommandToClearObstacle(AIGS_GameCharacterFramework* inAgent, AActor* BreachableObject, bool IsRight);
    
};

