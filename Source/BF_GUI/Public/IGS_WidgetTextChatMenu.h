#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "IGS_HUDSubwidgetBase.h"
#include "IGS_WidgetTextChatMenu.generated.h"

class APlayerController;
class UEditableTextBox;
class UIGS_GUIController;

UCLASS(Blueprintable, EditInlineNew)
class BF_GUI_API UIGS_WidgetTextChatMenu : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<APlayerController> OwningPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UIGS_GUIController> GUIController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableTextBox* ChatInput;
    
public:
    UIGS_WidgetTextChatMenu();

protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OpenChat();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTextCommited(const FText& Text, ETextCommit::Type CommitMethod);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTextChatStateChangedEvent(bool inOpen);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnTextChatStateChanged(bool inOpen);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnTextChatSetup();
    
    UFUNCTION(BlueprintCallable)
    void HideVirtualKeyboard();
    
    UFUNCTION(BlueprintCallable)
    void ForceCloseChat();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FocusChat() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void FocusAndShowVirtualKeyboard();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void CloseChat();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void BindToMessages();
    
};

