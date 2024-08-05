#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Styling/SlateColor.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/Button.h"
#include "IGS_WidgetButtonSimple.h"
#include "IGS_WidgetHoldableButton.generated.h"

class UBorder;
class UIGS_WidgetInputKeyIcon;
class UImage;
class UMaterialInstanceDynamic;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetHoldableButton : public UIGS_WidgetButtonSimple {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoldTicksPerSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ProgressColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor TextColor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonClickedEvent OnHoldFinished;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* HoldBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ProgressMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetInputKeyIcon* InputKeyIcon;
    
public:
    UIGS_WidgetHoldableButton();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldTick_Internal(float InProgress);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldStarted_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHoldStarted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldFinished_Internal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHoldCancelled_Internal();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnHoldCancelled();
    
private:
    UFUNCTION(BlueprintCallable)
    FEventReply OnHoldBorderMouseButtonUp(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    
    UFUNCTION(BlueprintCallable)
    FEventReply OnHoldBorderMouseButtonDown(FGeometry Geometry, const FPointerEvent& PointerEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void NativePreConstruct();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleHoldTick();
    
    UFUNCTION(BlueprintCallable)
    void HandleHoldFinished();
    
};

