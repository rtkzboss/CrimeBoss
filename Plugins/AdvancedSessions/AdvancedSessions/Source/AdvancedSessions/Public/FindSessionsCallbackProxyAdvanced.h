#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "FindSessionsCallbackProxy.h"
#include "FindSessionsCallbackProxy.h"
#include "EBPServerPresenceSearchType.h"
#include "SessionsSearchSetting.h"
#include "FindSessionsCallbackProxyAdvanced.generated.h"

class APlayerController;
class UFindSessionsCallbackProxyAdvanced;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UFindSessionsCallbackProxyAdvanced : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindSessionsResultDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindSessionsResultDelegate OnFailure;
    
    UFindSessionsCallbackProxyAdvanced();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UFindSessionsCallbackProxyAdvanced* FindSessionsAdvanced(UObject* WorldContextObject, APlayerController* PlayerController, int32 MaxResults, bool bUseLAN, EBPServerPresenceSearchType ServerTypeToSearch, const TArray<FSessionsSearchSetting>& Filters, bool bEmptyServersOnly, bool bNonEmptyServersOnly, bool bSecureServersOnly, bool bSearchLobbies, int32 MinSlotsAvailable);
    
    UFUNCTION(BlueprintCallable)
    static void FilterSessionResults(const TArray<FBlueprintSessionResult>& SessionResults, const TArray<FSessionsSearchSetting>& Filters, TArray<FBlueprintSessionResult>& FilteredResults);
    
};

