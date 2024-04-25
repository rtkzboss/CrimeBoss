#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PlayerStateFromPawnReadyOutputPinDelegate.h"
#include "IGS_WaitForPlayerStateFromPawn.generated.h"

class AIGS_PlayerCharacter;
class UIGS_WaitForPlayerStateFromPawn;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_WaitForPlayerStateFromPawn : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStateFromPawnReadyOutputPin WhenPlayerStateReady;
    
    UIGS_WaitForPlayerStateFromPawn();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_WaitForPlayerStateFromPawn* WaitForPlayerStateFromPawn(UObject* inWorldContextObject, AIGS_PlayerCharacter* inPlayer);
    
};

