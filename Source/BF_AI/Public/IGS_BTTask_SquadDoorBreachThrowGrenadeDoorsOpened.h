#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IGS_BTTask_SquadSwatBase.h"
#include "Templates/SubclassOf.h"
#include "IGS_BTTask_SquadDoorBreachThrowGrenadeDoorsOpened.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_AICommand;
class UIGS_ThrowableInventoryObject;

UCLASS(Blueprintable)
class BF_AI_API UIGS_BTTask_SquadDoorBreachThrowGrenadeDoorsOpened : public UIGS_BTTask_SquadSwatBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_ThrowableInventoryObject> Grenade;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* ContextActionCharacter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_AICommand* ContextActionCommand;
    
public:
    UIGS_BTTask_SquadDoorBreachThrowGrenadeDoorsOpened();

protected:
    UFUNCTION(BlueprintCallable)
    UIGS_AICommand* CommandToThrowGrenade(AIGS_GameCharacterFramework* inAgent, FVector position);
    
};

