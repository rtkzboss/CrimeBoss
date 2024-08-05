#pragma once
#include "CoreMinimal.h"
#include "IGS_Widget.h"
#include "IGS_AnimatedWidget.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UIGS_AnimatedWidget : public UIGS_Widget {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_AnimationFinished);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_AnimationFinished OnWidgetAnimationFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* AnimationData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsPlayingWidgetAnimation;
    
public:
    UIGS_AnimatedWidget();

    UFUNCTION(BlueprintCallable)
    void SkipAnimationBP();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SkipAnimation_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetAnimationData(UObject* inAnimationData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetAnimation();
    
    UFUNCTION(BlueprintCallable)
    void PlayAnimationBP();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayAnimation_Internal();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnimationDataSet();
    
    UFUNCTION(BlueprintCallable)
    void FinishAnimation();
    
};

