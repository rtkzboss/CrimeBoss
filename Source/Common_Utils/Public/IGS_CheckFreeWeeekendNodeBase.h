#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "IGS_FreeWeekendDelegateDelegate.h"
#include "IGS_CheckFreeWeeekendNodeBase.generated.h"

class UIGS_CheckFreeWeeekendNodeBase;
class UObject;

UCLASS(Blueprintable)
class COMMON_UTILS_API UIGS_CheckFreeWeeekendNodeBase : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FreeWeekendDelegate FreeWeekendActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FreeWeekendDelegate FreeWeekendNonActive;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_FreeWeekendDelegate FreeWeekendCheckFailed;
    
    UIGS_CheckFreeWeeekendNodeBase();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_CheckFreeWeeekendNodeBase* CheckFreeWeekendNodeBase(UObject* inWorldContextObject);
    
};

