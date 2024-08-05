#pragma once
#include "CoreMinimal.h"
#include "Net/OnlineBlueprintCallProxyBase.h"
#include "BPSteamWorkshopID.h"
#include "BlueprintWorkshopDetailsDelegateDelegate.h"
#include "SteamWSRequestUGCDetailsCallbackProxy.generated.h"

class UObject;
class USteamWSRequestUGCDetailsCallbackProxy;

UCLASS(Blueprintable, MinimalAPI)
class USteamWSRequestUGCDetailsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintWorkshopDetailsDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintWorkshopDetailsDelegate OnFailure;
    
    USteamWSRequestUGCDetailsCallbackProxy();

    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static USteamWSRequestUGCDetailsCallbackProxy* GetWorkshopItemDetails(UObject* WorldContextObject, FBPSteamWorkshopID WorkShopID);
    
};

