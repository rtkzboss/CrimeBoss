#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "IGS_InteractionIndicatorSingleWidget.generated.h"

class UIGS_InteractiveComponent;

UCLASS(Blueprintable, EditInlineNew)
class BF_FRAMEWORKGAME_API UIGS_InteractionIndicatorSingleWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UIGS_InteractionIndicatorSingleWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOnScreenChanged(bool inOnScreen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseByChanged(bool inClose);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChosenChanged(bool inChosen);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CanvasTick(UIGS_InteractiveComponent* inInteraction);
    
};

