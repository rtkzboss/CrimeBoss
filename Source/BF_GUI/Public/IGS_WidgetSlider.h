#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetSliderBlueprintEventSignatureDelegate.h"
#include "IGS_WidgetSlider.generated.h"

class USlider;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetSlider : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USlider* Slider;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WidgetSliderBlueprintEventSignature OnValueChangedEvent;
    
    UIGS_WidgetSlider();

    UFUNCTION(BlueprintCallable)
    void SetValue(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRange(const FVector2D& InRange);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnValueChanged(float InValue);
    
    UFUNCTION(BlueprintCallable)
    void MouseDragStart();
    
    UFUNCTION(BlueprintCallable)
    void MouseDragEnd();
    
public:
    UFUNCTION(BlueprintCallable)
    float GetValue();
    
    UFUNCTION(BlueprintCallable)
    FVector2D GetRange();
    
protected:
    UFUNCTION(BlueprintCallable)
    void ControllerDragStart();
    
    UFUNCTION(BlueprintCallable)
    void ControllerDragEnd();
    
};

