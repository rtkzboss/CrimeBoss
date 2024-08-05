#pragma once
#include "CoreMinimal.h"
#include "IGS_HUDSubwidgetBase.h"
#include "MetaHUDSubwidget.generated.h"

class UIGS_BlackmarketManagerBaseComponent;
class UIGS_CrewManagerBaseComponent;
class UIGS_DailyManagerBaseComponent;
class UIGS_FinanceManagerBaseComponent;
class UIGS_GoalManagerBaseComponent;
class UIGS_JobManagerBaseComponent;
class UIGS_StashManagerBaseComponent;

UCLASS(Blueprintable, EditInlineNew)
class CRIMEBOSSMETA_API UMetaHUDSubwidget : public UIGS_HUDSubwidgetBase {
    GENERATED_BODY()
public:
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
    
    UMetaHUDSubwidget();

};

