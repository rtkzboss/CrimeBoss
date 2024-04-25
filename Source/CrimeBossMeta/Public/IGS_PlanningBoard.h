#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "META_PlanningBoardMission.h"
#include "META_PlanningBoardRow.h"
#include "IGS_PlanningBoard.generated.h"

class UMETA_BaseMission;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API AIGS_PlanningBoard : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMETA_PlanningBoardRow PlanningBoardData;
    
    AIGS_PlanningBoard(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlanningBoardData(FGameplayTag inPlanningBoardID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetPlanningBoardID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMETA_BaseMission* GetMissionFromMapByPriority(TArray<FMETA_PlanningBoardMission> planningBoardItemMissions, UPARAM(Ref) TArray<UMETA_BaseMission*>& missionsOnMap) const;
    
};

