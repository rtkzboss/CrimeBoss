#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "IGS_WidgetFocusableSpinBoxBlueprintEventSignatureDelegate.h"
#include "IGS_WidgetFocusableSpinBox.generated.h"

class UIGS_WidgetButton;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetFocusableSpinBox : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UTextBlock* SpinBoxName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UTextBlock* SpinBoxText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetButton* LeftButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetButton* RightButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true, BindWidget))
    UIGS_WidgetButton* ClickDetector;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText SpinBoxNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StepSizeValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftThumbstickThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnalogInputDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseEnumMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> EnumNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor FontColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DisabledFontColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DisabledBackgroundColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NormalButtonColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HoveredButtonColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PressedButtonColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SelectedButtonColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DisabledButtonColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NormalImageTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HoveredImageTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PressedImageTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SelectedImageTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DisabledImageTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor NormalBorderTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor HoveredBorderTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PressedBorderTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor SelectedBorderTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DisabledBorderTint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WidgetFocusableSpinBoxBlueprintEventSignature OnValueDecreasedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WidgetFocusableSpinBoxBlueprintEventSignature OnValueIncreasedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_WidgetFocusableSpinBoxBlueprintEventSignature OnValueChangedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoveredCount;
    
public:
    UIGS_WidgetFocusableSpinBox();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void UpdateText() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetUseEnumMode(bool inUseEnumMode);
    
    UFUNCTION(BlueprintCallable)
    void SetStepSizeValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMinValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxValue(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEnumNames(const TArray<FText>& inEnumNames);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentValue(int32 InValue);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ScrollRight();
    
    UFUNCTION(BlueprintCallable)
    void ScrollLeft();
    
private:
    UFUNCTION(BlueprintCallable)
    void ProcessSettingFontColor(FLinearColor InColor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnValueIncreased(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void OnValueDecreased(int32 InValue);
    
    UFUNCTION(BlueprintCallable)
    void OnValueChanged(int32 InValue);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateVisuals();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRefreshSpinBox();
    
};

