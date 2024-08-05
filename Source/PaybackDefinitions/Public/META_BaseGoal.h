#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "EMETA_GoalPriority.h"
#include "EMETA_GoalPurpose.h"
#include "EMETA_GoalStatus.h"
#include "EMETA_GoalType.h"
#include "EMETA_Partner.h"
#include "Templates/SubclassOf.h"
#include "META_BaseGoal.generated.h"

class UMETA_BaseGoal;
class UMETA_MissionID;
class UTexture2D;

UCLASS(Abstract, Blueprintable)
class PAYBACKDEFINITIONS_API UMETA_BaseGoal : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_GoalType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMETA_GoalPriority Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EntitlementTag;
    
public:
    UMETA_BaseGoal();

    UFUNCTION(BlueprintCallable)
    void SetVisitedNodeIDs(TSet<int32> inNodeIDs);
    
    UFUNCTION(BlueprintCallable)
    void SetMissions(TArray<TSubclassOf<UMETA_MissionID>> inMissionIDs);
    
    UFUNCTION(BlueprintCallable)
    void SetGoalResult(EMETA_GoalStatus inResult);
    
    UFUNCTION(BlueprintCallable)
    void RemoveMission(TSubclassOf<UMETA_MissionID> inMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGoalRepeatable(int32& outDaysBeetwenAttempts) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSet<int32> GetVisitedNodeIDs() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_GoalType GetType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_GoalPurpose GetPurpose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_GoalPriority GetPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetPicture() const;
    
    UFUNCTION(BlueprintCallable)
    TArray<TSubclassOf<UMETA_MissionID>> GetMissions();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_Partner GetInstigatorPartner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<UMETA_BaseGoal> GetId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_GoalStatus GetGoalResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetEntitlementTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable)
    void AddVisitedNode(const int32 inNodeID);
    
    UFUNCTION(BlueprintCallable)
    void AddMission(TSubclassOf<UMETA_MissionID> inMissionID);
    
};

