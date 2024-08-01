#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "CommonButtonBase.h"
#include "UObject/NoExportTypes.h"
#include "Layout/Geometry.h"
#include "Input/Events.h"
#include "Styling/SlateColor.h"
#include "Components/SlateWrapperTypes.h"
#include "Components/Button.h"
#include "IGS_GenericButtonEventBlueprintSignatureDelegate.h"
#include "IGS_GenericButton.generated.h"

class UBorder;
class UIGS_WidgetInputKeyIcon;
class UImage;
class UMaterialInstanceDynamic;
class UNamedSlot;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_GenericButton : public UCommonButtonBase {
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
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsHoldable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideInputActionsByDevice;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_InputAction BoundInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_InputAction KeyboardMouseInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EIGS_InputAction GamepadInputAction;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonClickedEvent OnHoldFinished;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GenericButtonEventBlueprintSignature OnReleasedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GenericButtonEventBlueprintSignature OnClickedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UBorder* HoldBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* ProgressMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UImage* Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UNamedSlot* ContentSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UTextBlock* ButtonText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetInputKeyIcon* InputKeyIcon;
    
public:
    UIGS_GenericButton();

    UFUNCTION(BlueprintCallable)
    void SimulateClick();
    
    UFUNCTION(BlueprintCallable)
    void SetSelected(bool inSelected);
    
    UFUNCTION(BlueprintCallable)
    void SetHasContent(bool inHasContent);
    
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
    void InitInputActionIcon();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleHoldTick();
    
    UFUNCTION(BlueprintCallable)
    void HandleHoldFinished();
    
};

