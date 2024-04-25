#pragma once
#include "CoreMinimal.h"
#include "IGS_SettingsValueChangedEventDelegate.h"
#include "IGS_WidgetSubMenuBase.h"
#include "IGS_WidgetSubMenuSettingsBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetSubMenuSettingsBase : public UIGS_WidgetSubMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_SettingsValueChangedEvent OnSettingsValueChanged;
    
    UIGS_WidgetSubMenuSettingsBase();

    UFUNCTION(BlueprintCallable)
    void SetDirty();
    
    UFUNCTION(BlueprintCallable)
    void RevertToDefaults();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RefreshFocus();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRevertToDefaults();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRevert();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnApply();
    
};

