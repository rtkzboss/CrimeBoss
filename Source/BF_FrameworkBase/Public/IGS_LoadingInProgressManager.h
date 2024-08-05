#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "IGS_OnLoadingFinishedDynamicSignatureDelegate.h"
#include "IGS_LoadingInProgressManager.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_LoadingInProgressManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnLoadingFinishedDynamicSignature OnLoadingFinishedEvent;
    
    UIGS_LoadingInProgressManager();

};

