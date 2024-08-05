#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EIGS_WheelMenuType.h"
#include "IGS_GUIVisibilityChangedDelegate.h"
#include "IGS_TextChatInputStateChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "IGS_GUIController.generated.h"

class AIGS_PlayerControllerRoot;
class UIGS_GameScreenHandler;
class UIGS_SystemMenuScreen;
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
    TMap<EIGS_WheelMenuType, TSubclassOf<UIGS_WidgetRadialMenuBase>> WheelMenuClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WidgetRadialMenuBase> WidgetUnlockRadialMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WidgetRadialMenuBase> WidgetBotSelectionClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WidgetRadialMenuBase> WidgetPingClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UIGS_WidgetTextChatMenu> WidgetTextChatClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_WidgetRadialMenuBase* ActiveWheelMenuScreen;
    
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
    
protected:
    UFUNCTION(BlueprintCallable)
    void SwitchToWheelMenuType(EIGS_WheelMenuType inType);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetupGUIVisible(bool inGUIVisible, bool inIgnoreLook, bool inIgnoreMove, bool inIgnoreInteraction, bool inShowMouse);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldShowVirtualCursor(bool inShow);
    
protected:
    UFUNCTION(BlueprintCallable)
    bool OpenWheelMenuInternal(EIGS_WheelMenuType inType);
    
    UFUNCTION(BlueprintCallable)
    bool OpenWheelMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void OpenTextChat();
    
    UFUNCTION(BlueprintCallable)
    void OpenSystemMenu();
    
    UFUNCTION(BlueprintCallable)
    void OpenGameMenu();
    
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
    bool IsTextChatOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGameMenuOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyWheelMenuOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyModalMenuOpen() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyMenuOpen() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    EIGS_WheelMenuType GetWheelMenuType() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetShouldShowVirtualCursor();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseWheelMenu();
    
public:
    UFUNCTION(BlueprintCallable)
    void CloseTextChat();
    
    UFUNCTION(BlueprintCallable)
    void CloseSystemMenu();
    
    UFUNCTION(BlueprintCallable)
    void CloseGameMenu();
    
    UFUNCTION(BlueprintCallable)
    void CloseAnyMenu();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanWheelMenuBeOpen(EIGS_WheelMenuType inType) const;
    
};

