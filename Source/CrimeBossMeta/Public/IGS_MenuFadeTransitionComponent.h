#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_OnTransitionFinishedDelegate.h"
#include "IGS_MenuFadeTransitionComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_MenuFadeTransitionComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnTransitionFinished OnTransitionFinished;
    
    UIGS_MenuFadeTransitionComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Show(bool ShouldFade, float FadeTime, bool inShowLoader);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Hide(bool ShouldFade, float FadeTime);
    
};

