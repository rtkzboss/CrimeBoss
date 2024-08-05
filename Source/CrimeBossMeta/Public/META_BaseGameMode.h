#pragma once
#include "CoreMinimal.h"
#include "META_ActiveCampaignConfiguration.h"
#include "GameplayTagContainer.h"
#include "EIGS_UserDifficulty.h"
#include "EMETA_CareerCompletionReason.h"
#include "EMETA_Gang.h"
#include "EMETA_ManagersStartUpMode.h"
#include "META_CampaignUserDifficultyConfiguration.h"
#include "EIGS_MetaAdditionalButtonType.h"
#include "EMETA_MenuState.h"
#include "IGS_GameModeMenuBase.h"
#include "IGS_OnComponentsInitializedEventDelegate.h"
#include "IGS_OnMetaMenuStateChangedDelegate.h"
#include "META_BaseGameMode.generated.h"

class UIGS_ActivityManagerBaseComponent;
class UMETA_BossLevelComponent;
class UMETA_CrewManagerComponent;
class UMETA_EventManagerComponent;
class UMETA_GoalManagerComponent;
class UMETA_MainWidget;
class UMETA_MediaManagerComponent;
class UMETA_NotificationManagerComponent;
class UMETA_PlanningBoardManagerComponent;
class UMETA_PlotlineSelection;
class UMETA_PlotlineSelectionMapping;
class UMETA_PopupManagerComponent;
class UMETA_RandEventManagerComponent;
class UMETA_StashManagerComponent;
class UMETA_UIEventsManagerComponent;

UCLASS(Abstract, Blueprintable, NonTransient)
class CRIMEBOSSMETA_API AMETA_BaseGameMode : public AIGS_GameModeMenuBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_MenuState MenuState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_MainWidget* MainWidget;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnMetaMenuStateChanged OnMetaMenuStateChangedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIGS_OnComponentsInitializedEvent OnComponentsInitializedEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGamemodeComponentsInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_PlanningBoardManagerComponent* PlanningBoardManagerComponent;
    
    AMETA_BaseGameMode(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldLoadMetaDebugSave();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMetaMenuState(EMETA_MenuState inState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetComponentsInitialized(EMETA_ManagersStartUpMode inStartUpMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAdditionalButtonType(EIGS_MetaAdditionalButtonType inType);
    
protected:
    UFUNCTION(BlueprintCallable)
    void MenuStateChangeHandled(EMETA_MenuState inState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMetaInDebugMode();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsGameOverPending();
    
protected:
    UFUNCTION(BlueprintCallable)
    void IncreaseCompletedCampaignCount(EIGS_UserDifficulty inDifficulty);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HandleMenuStateChange(EMETA_MenuState inState);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_UIEventsManagerComponent* GetUIEventsManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_StashManagerComponent* GetStashManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_RandEventManagerComponent* GetRandManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_PopupManagerComponent* GetPopupManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UMETA_PlanningBoardManagerComponent* GetPlanningBoardManagerComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_NotificationManagerComponent* GetNotificationManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_MediaManagerComponent* GetMediaManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_GoalManagerComponent* GetGoalManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_EventManagerComponent* GetEventManagerComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UMETA_PlotlineSelection* GetCurrentCampaignMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UMETA_CrewManagerComponent* GetCrewManagerComponent();
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UMETA_PlotlineSelection> GetCampaignModeOnLoad(const UMETA_PlotlineSelectionMapping* inCampaignMapping, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable)
    TSoftObjectPtr<UMETA_PlotlineSelection> GetCampaignModeOnInitByTag(const UMETA_PlotlineSelectionMapping* inCampaignMapping, FGameplayTag inModeTag, bool& outSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetCampaignDifficulty(EIGS_UserDifficulty& outUserDifficulty, FMETA_CampaignUserDifficultyConfiguration& outConfiguration) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    UMETA_BossLevelComponent* GetBossLevelComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_ActivityManagerBaseComponent* GetActivityManagerComponent();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_ActiveCampaignConfiguration GetActiveCampaignConfiguration() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CompleteCareerBase(EMETA_CareerCompletionReason CompletionReason, EMETA_Gang OptionalGang);
    
};

