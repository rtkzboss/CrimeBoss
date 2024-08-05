#pragma once
#include "CoreMinimal.h"
#include "EIGS_BotCommandDefinition.h"
#include "IGS_PingableWidgetActor.h"
#include "IGS_SmartPingableWidgetActor.generated.h"

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_SmartPingableWidgetActor : public AIGS_PingableWidgetActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SmartPingHideTextTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldPingHideTextTime;
    
    AIGS_SmartPingableWidgetActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetActionData(EIGS_BotCommandDefinition inCommandDefinition, int32 playerNumber);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetProgress(float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHideText();
    
};

