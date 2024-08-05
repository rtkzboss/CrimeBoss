#pragma once
#include "CoreMinimal.h"
#include "IGS_PoolableBaseActor.h"
#include "IGS_PingableWidgetActor.generated.h"

class UIGS_WorldSpaceWidgetBase;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_PingableWidgetActor : public AIGS_PoolableBaseActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PingDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NetworkDormantTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WorldSpaceWidgetBase* PingWidget;
    
public:
    AIGS_PingableWidgetActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_ShowPingWidget(float inPingDuration);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void Multicast_Release();
    
};

