#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_GUIVisibilityChangedDelegate.h"
#include "IGS_TextChatInputStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_GUIController.generated.h"

class AIGS_PlayerControllerRoot;
class UIGS_GameScreenHandler;
class UIGS_SystemMenuScreen;
class UIGS_WidgetDoorUnlockRadialMenu;
class UIGS_WidgetRadialMenuBase;
class UIGS_WidgetTextChatMenu;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_GUI_API UIGS_GUIController : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_TextChatInputStateChanged OnTextChatInputStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GUIVisibilityChanged OnGUIVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_SystemMenuScreen> WidgetSystemMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WidgetRadialMenuBase> WidgetUnlockRadialMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WidgetRadialMenuBase> WidgetBotSelectionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WidgetRadialMenuBase> WidgetPingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WidgetTextChatMenu> WidgetTextChatClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetDoorUnlockRadialMenu* WidgetUnlockMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetRadialMenuBase* WidgetBotSelectionMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetRadialMenuBase* WidgetPingMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AIGS_PlayerControllerRoot> OwningPlayerController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsGUIOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTextChatOpen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPendingClose;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_GameScreenHandler* m_GameScreenHandler;
    
public:
    UIGS_GUIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ToggleTextChatMenu();
    
    UFUNCTION(BlueprintCallable)
    void ToggleGameMenu();
    
    UFUNCTION(BlueprintCallable)
    void SetupGUIVisible(bool inGUIVisible, bool inIgnoreLook, bool inIgnoreMove, bool inIgnoreInteraction, bool inShowMouse);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldShowVirtualCursor(bool inShow);
    
    UFUNCTION(BlueprintCallable)
    bool OpenUnlockMethodMenu(FGameplayTagContainer inMethods);
    
    UFUNCTION(BlueprintCallable)
    void OpenTextChat();
    
    UFUNCTION(BlueprintCallable)
    void OpenSystemMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenPingMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenGameMenu();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OpenBotSelectionMenu();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnScreenOpen();
    
    UFUNCTION(BlueprintCallable)
    void OnScreenClosed();
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRadialMenuAnalogY(float inAxis);
    
    UFUNCTION(BlueprintCallable)
    void OnRadialMenuAnalogX(float inAxis);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnlockMenuOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTextChatOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPingMenuOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameMenuOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBotMenuOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyModalMenuOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyMenuOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldShowVirtualCursor();
    
    UFUNCTION(BlueprintCallable)
    void CloseUnlockMethodMenu();
    
    UFUNCTION(BlueprintCallable)
    void CloseTextChat();
    
    UFUNCTION(BlueprintCallable)
    void CloseSystemMenu();
    
    UFUNCTION(BlueprintCallable)
    void ClosePingMenu(bool bForceClose);
    
    UFUNCTION(BlueprintCallable)
    void CloseGameMenu();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseBotSelectionMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseAnyMenu();
    
};

