#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "IGS_ScreenHandler.h"
#include "Templates/SubclassOf.h"
#include "IGS_GameScreenHandler.generated.h"

class UIGS_BaseMenuWidget;
class UIGS_GameUISettings;
class UIGS_Screen;
class UIGS_SystemMenuScreen;
class UObject;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_GameScreenHandler : public UIGS_ScreenHandler {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_GameScreenHandlerEvent);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GameScreenHandlerEvent OnSystemMenuOpen;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GameScreenHandlerEvent OnSystemMenuClosed;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GameScreenHandlerEvent OnDeinitialized;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_GameScreenHandlerEvent OnScreensStackChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool GoDirectlyToMainMenu;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BaseMenuWidget* m_BaseScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_SystemMenuScreen* m_SystemMenuScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_GameUISettings* m_Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime m_ScreenTime;
    
public:
    UIGS_GameScreenHandler();

    UFUNCTION(BlueprintCallable)
    void SwitchBackToMainScreen(bool directlyToMainMenu);
    
    UFUNCTION(BlueprintCallable)
    static void RequestSwitchToScreen(UObject* inWCO, FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    static void RequestOpenScreenByTag(UObject* inWCO, FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    static void RequestOpenScreen(UObject* inWCO, UIGS_Screen* inScreen, bool AddToViewport);
    
    UFUNCTION(BlueprintCallable)
    static void RequestCloseScreenByTag(UObject* inWCO, FGameplayTag inTag);
    
    UFUNCTION(BlueprintCallable)
    static void RequestCloseScreen(UObject* inWCO, UIGS_Screen* inScreen, bool destroyAfterClose);
    
    UFUNCTION(BlueprintCallable)
    void RefreshFocus();
    
    UFUNCTION(BlueprintCallable)
    void OpenSystemMenuScreen();
    
    UFUNCTION(BlueprintCallable)
    void InitializeMenuScreen(TSubclassOf<UIGS_SystemMenuScreen> inMenuScreenClass);
    
    UFUNCTION(BlueprintCallable)
    UIGS_BaseMenuWidget* InitializeBaseScreen(TSubclassOf<UIGS_BaseMenuWidget> inBaseScreenClass);
    
    UFUNCTION(BlueprintCallable)
    void GoBackOnTopScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScreensStackCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UIGS_BaseMenuWidget* GetBaseScreen() const;
    
    UFUNCTION(BlueprintCallable)
    void CloseSystemMenuScreen();
    
};

