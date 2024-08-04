#pragma once
#include "CoreMinimal.h"
#include "EIGS_InputAction.h"
#include "EIGS_InputDevice.h"
#include "EIGS_InputThumbstickType.h"
#include "CommonActivatableWidget.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EScreenInputMode.h"
#include "EScreenInputPass.h"
#include "EScreenModifier.h"
#include "EScreenZOrder.h"
#include "IGS_ScreenEventDelegate.h"
#include "IGS_Screen.generated.h"

class UIGS_ScreenHandler;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class IGS_UIFRAMEWORK_API UIGS_Screen : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag screenTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScreenZOrder ScreenZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScreenModifier ScreenModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseScreenModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScreenInputMode ScreenInputMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EScreenInputPass InputPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool SupressSystemMenuOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InputDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool RefreshFocusAfterClose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool CallOnOpenAfterClosePreviousScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOverlay;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ScreenEvent OnOpenEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_ScreenEvent OnClosedEvent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_ScreenHandler* m_ScreenHandler;
    
public:
    UIGS_Screen();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshFocus();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpen();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnMenuInputReleased(EIGS_InputAction InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnMenuInputPressed(EIGS_InputAction InAction);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputDeviceChanged(EIGS_InputDevice newDevice);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnClosed();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnAnalogInput(EIGS_InputThumbstickType Type, const FVector2D& Value);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThisScreenOnTop() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GoBack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    FText GetTitleOverride() const;
    
public:
    UFUNCTION(BlueprintCallable)
    void Close();
    
    UFUNCTION(BlueprintCallable)
    void AddScreenToViewport();
    
protected:
    void NativeOnActivated() override;
    void NativeOnDeactivated() override;
};

