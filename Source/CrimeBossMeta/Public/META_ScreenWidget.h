#pragma once
#include "CoreMinimal.h"
#include "IGS_Screen.h"
#include "META_ScreenWidget.generated.h"

class AMETA_BaseGameMode;
class UIGS_BlackmarketManagerBaseComponent;
class UIGS_CityMapManagerBaseComponent;
class UIGS_CrewManagerBaseComponent;
class UIGS_DailyManagerBaseComponent;
class UIGS_FinanceManagerBaseComponent;
class UIGS_GoalManagerBaseComponent;
class UIGS_JobManagerBaseComponent;
class UIGS_StashManagerBaseComponent;
class UIGS_WarManagerBaseComponent;
class UMETA_MediaManagerComponent;
class UMETA_UIEventsManagerComponent;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMETA_ScreenWidget : public UIGS_Screen {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_UIEventsManagerComponent* UIEventsManager;
    
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
    UIGS_WarManagerBaseComponent* WarManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UIGS_CityMapManagerBaseComponent* CityMapManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMETA_MediaManagerComponent* MediaManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AMETA_BaseGameMode* MetaGameMode;
    
    UMETA_ScreenWidget();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGamemodeReady();
    
};

