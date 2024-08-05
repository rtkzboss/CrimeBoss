#pragma once
#include "CoreMinimal.h"
#include "BPUniqueNetId.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BlueprintGroupOfficerDetailsDelegateDelegate.h"
#include "SteamRequestGroupOfficersCallbackProxy.generated.h"

class UObject;
class USteamRequestGroupOfficersCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USteamRequestGroupOfficersCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintGroupOfficerDetailsDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintGroupOfficerDetailsDelegate OnFailure;
    
    USteamRequestGroupOfficersCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static USteamRequestGroupOfficersCallbackProxy* GetSteamGroupOfficerList(UObject* WorldContextObject, FBPUniqueNetId GroupUniqueNetID);
    
};

