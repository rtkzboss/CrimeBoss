#pragma once
#include "CoreMinimal.h"
#include "Subsystems/LocalPlayerSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_TutorialsManager.generated.h"

class UIGS_PaybackSaveGameAccount;
class UIGS_SaveManager;
class UIGS_Screen;
class UIGS_ScreenHandler;
class UIGS_TutorialsManager;
class UObject;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UIGS_TutorialsManager : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_OnDisplayedTutorialsOpened);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FIGS_OnDisplayedTutorialsCompleted);
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnDisplayedTutorialsCompleted OnDisplayedTutorialsCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnDisplayedTutorialsOpened OnDisplayedTutorialsOpened;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_SaveManager* m_SaveManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_PaybackSaveGameAccount* m_SaveGameAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UIGS_Screen*> m_PendingTutorials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_Screen* m_CurrentlyDisplayedTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> m_ForbiddenScreensForTutorials;
    
public:
    UIGS_TutorialsManager();

    UFUNCTION(BlueprintCallable)
    bool TryToDisplayPendingTutorials();
    
    UFUNCTION(BlueprintCallable)
    void SetForbiddenScreensForTutorials(const TArray<FGameplayTag>& inForbiddenScreens);
    
    UFUNCTION(BlueprintCallable)
    void ResetAllTutorials();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialCompleted(const FGameplayTag inTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyTutorialPending() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAnyTutorialOpened() const;
    
    UFUNCTION(BlueprintCallable)
    static UIGS_TutorialsManager* GetTutorialsManager(const UObject* inWCO);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTutorialsEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<UIGS_Screen*> GetPendingTutorials() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanOpenTutorialScreen(const UIGS_ScreenHandler* inScreenHandler) const;
    
    UFUNCTION(BlueprintCallable)
    void AddPendingTutorialScreen(UIGS_Screen* inScreen);
    
};

