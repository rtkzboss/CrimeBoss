#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "META_ManagersExplorer.generated.h"

class IMETA_UIEventsManager;
class UMETA_UIEventsManager;
class UIGS_BlackmarketManagerBaseComponent;
class UIGS_BossLevelBaseComponent;
class UIGS_CityMapManagerBaseComponent;
class UIGS_CrewManagerBaseComponent;
class UIGS_DailyManagerBaseComponent;
class UIGS_EventManagerBaseComponent;
class UIGS_FinanceManagerBaseComponent;
class UIGS_GoalManagerBaseComponent;
class UIGS_HeatManagerBaseComponent;
class UIGS_JobManagerBaseComponent;
class UIGS_MoneyMakingOportunitiesBaseComponent;
class UIGS_RandEventManagerBaseComponent;
class UIGS_StashManagerBaseComponent;
class UIGS_WarManagerBaseComponent;

UINTERFACE(Blueprintable, MinimalAPI)
class UMETA_ManagersExplorer : public UInterface {
    GENERATED_BODY()
};

class IMETA_ManagersExplorer : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_WarManagerBaseComponent* GetWarManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TScriptInterface<IMETA_UIEventsManager> GetUIEventsManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_StashManagerBaseComponent* GetStashManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_RandEventManagerBaseComponent* GetRandEventsManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_MoneyMakingOportunitiesBaseComponent* GetMoneyMakingOpportunities();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_JobManagerBaseComponent* GetJobsManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_HeatManagerBaseComponent* GetHeatManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_GoalManagerBaseComponent* GetGoalsManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_FinanceManagerBaseComponent* GetFinancialManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_EventManagerBaseComponent* GetEventsManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_DailyManagerBaseComponent* GetDailyManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_CrewManagerBaseComponent* GetCrewManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_CityMapManagerBaseComponent* GetCityMapManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_BossLevelBaseComponent* GetBossLevelManager();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UIGS_BlackmarketManagerBaseComponent* GetBlackmarketManager();
    
};

