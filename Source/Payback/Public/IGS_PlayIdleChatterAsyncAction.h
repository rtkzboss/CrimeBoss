#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IdleChatterOutputPinDelegate.h"
#include "IGS_PlayIdleChatterAsyncAction.generated.h"

class AIGS_GameCharacterFramework;
class UIGS_PlayIdleChatterAsyncAction;

UCLASS(Blueprintable)
class PAYBACK_API UIGS_PlayIdleChatterAsyncAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIdleChatterOutputPin Succeed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIdleChatterOutputPin Canceled;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AIGS_GameCharacterFramework*> m_Characters;
    
public:
    UIGS_PlayIdleChatterAsyncAction();

    UFUNCTION(BlueprintCallable)
    static UIGS_PlayIdleChatterAsyncAction* PlayIdleChatterAsyncAction(TArray<AIGS_GameCharacterFramework*> inCharacters);
    
};

