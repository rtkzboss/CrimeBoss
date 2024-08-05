#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PlayerStateReadyOutputPinDelegate.h"
#include "IGS_WaitForPlayerState.generated.h"

class UIGS_WaitForPlayerState;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_WaitForPlayerState : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStateReadyOutputPin WhenPlayerStateReady;
    
    UIGS_WaitForPlayerState();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_WaitForPlayerState* WaitForPlayerState(UObject* inWorldContextObject);
    
};

