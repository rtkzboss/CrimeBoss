#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "ClassLoadedPinDelegate.h"
#include "IGS_AsyncLoadClassHighPrio.generated.h"

class UIGS_AsyncLoadClassHighPrio;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_AsyncLoadClassHighPrio : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClassLoadedPin ClassLoaded;
    
    UIGS_AsyncLoadClassHighPrio();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=inWorldContextObject))
    static UIGS_AsyncLoadClassHighPrio* AsyncLoadClassHighPrio(UObject* inWorldContextObject, TSoftClassPtr<UObject> inClass);
    
};

