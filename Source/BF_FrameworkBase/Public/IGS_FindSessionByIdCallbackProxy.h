#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FindSessionsCallbackProxy.h"
#include "FindSessionsCallbackProxy.h"
#include "IGS_FindSessionByIdCallbackProxy.generated.h"

class APlayerController;
class UIGS_FindSessionByIdCallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UIGS_FindSessionByIdCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindSessionsResultDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindSessionsResultDelegate OnFailure;
    
    UIGS_FindSessionByIdCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UIGS_FindSessionByIdCallbackProxy* FindSessionById(UObject* WorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SessionToCheck, bool bUseLAN);
    
};

