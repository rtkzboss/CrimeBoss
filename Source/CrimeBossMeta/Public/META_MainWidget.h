#pragma once
#include "CoreMinimal.h"
#include "IGS_BaseMenuWidget.h"
#include "EIGS_MetaAdditionalButtonType.h"
#include "EMETA_MenuState.h"
#include "META_MainWidget.generated.h"

class AMETA_BaseGameMode;
class AMETA_GameStateBase;
class IMETA_UIEventsManager;
class UMETA_UIEventsManager;
class UIGS_BlackmarketManagerBaseComponent;
class UIGS_CrewManagerBaseComponent;
class UIGS_DailyManagerBaseComponent;
class UIGS_FinanceManagerBaseComponent;
class UIGS_GoalManagerBaseComponent;
class UIGS_JobManagerBaseComponent;
class UIGS_StashManagerBaseComponent;
class UMETA_LevelActorsManagerComponent;
class UMETA_UIEventsManagerComponent;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_MainWidget : public UIGS_BaseMenuWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IMETA_UIEventsManager> UIEventsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_UIEventsManagerComponent* UIEventsManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CrewManagerBaseComponent* CrewManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_BlackmarketManagerBaseComponent* BlackmarketManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_FinanceManagerBaseComponent* FinanceManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_GoalManagerBaseComponent* GoalsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_JobManagerBaseComponent* JobsManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_StashManagerBaseComponent* StashManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_DailyManagerBaseComponent* DailyManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_LevelActorsManagerComponent* LevelActorsManagerComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMETA_BaseGameMode* MetaGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMETA_GameStateBase* MetaGameState;
    
    UMETA_MainWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisibilityMenuState(EMETA_MenuState inState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConfirmButtonVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetConfirmButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBackButtonVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalButtonVisibility(bool inVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalButtonType(EIGS_MetaAdditionalButtonType inType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnGamemodeReady();
    
};

