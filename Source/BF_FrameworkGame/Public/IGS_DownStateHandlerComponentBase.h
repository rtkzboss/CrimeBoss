#pragma once
#include "CoreMinimal.h"
#include "IGS_DownStateHandlerComponentFramework.h"
#include "IGS_OnReviveStartEventDelegate.h"
#include "IGS_OnReviveStopEventDelegate.h"
#include "IGS_OnRevivedEventDelegate.h"
#include "IGS_DownStateHandlerComponentBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_DownStateHandlerComponentBase : public UIGS_DownStateHandlerComponentFramework {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnReviveStartEvent OnReviveStartedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnReviveStopEvent OnReviveStopEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnRevivedEvent OnRevivedEvent;
    
    UIGS_DownStateHandlerComponentBase(const FObjectInitializer& ObjectInitializer);

};

