#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EMETA_PlanningBoardItemStatus.h"
#include "META_ChangeStatusPlanningBoardEvent.h"
#include "META_PlanningBoardItemRow.h"
#include "META_PlanningBoardManagerComponent.generated.h"

class UIGS_PaybackSaveGameCareer;
class UMETA_PlanningBoardItemObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UMETA_PlanningBoardManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlanningBoardItemStatusChanged, FGameplayTag, itemTag, EMETA_PlanningBoardItemStatus, itemStatus);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlanningBoardFeatureStateChanged, bool, IsUnlocked);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlanningBoardDataChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlanningBoardItemStatusChanged OnPlanningBoardItemStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlanningBoardDataChanged OnPlanningBoardChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlanningBoardDataChanged OnPlanningBoardEventsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlanningBoardFeatureStateChanged OnPlanningBoardFeatureStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_ActivePlanningBoardTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, UMETA_PlanningBoardItemObject*> m_PlanningBoardItemsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMETA_ChangeStatusPlanningBoardEvent> m_ChangeStatusEvents;
    
public:
    UMETA_PlanningBoardManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetPlanningBoardItemStatus(FGameplayTag itemTag, EMETA_PlanningBoardItemStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void SetActivePlanningBoard(FGameplayTag planningBoardTag, bool callEvent);
    
    UFUNCTION(BlueprintCallable)
    void SaveData(UIGS_PaybackSaveGameCareer* saveObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGraphVariableValueChanged(FGameplayTag variableTag, int32 Value);
    
public:
    UFUNCTION(BlueprintCallable)
    void LoadData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsThereAnyChangeStatusEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlanningBoardUnlocked() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleChangeStatusEvent(UPARAM(Ref) FMETA_ChangeStatusPlanningBoardEvent& Event);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, EMETA_PlanningBoardItemStatus> GetPlanningBoardStatuses() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMETA_PlanningBoardItemStatus GetPlanningBoardItemStatus(FGameplayTag itemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TMap<FGameplayTag, UMETA_PlanningBoardItemObject*> GetPlanningBoardItemsMap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_PlanningBoardItemRow GetPlanningBoardItemData(FGameplayTag itemTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMETA_ChangeStatusPlanningBoardEvent GetNextChangeStatusEvent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetActivePlanningBoardTag() const;
    
    UFUNCTION(BlueprintCallable)
    void AddChangeStatusEvent(FGameplayTag itemTag, FGameplayTag voiceoverTag, EMETA_PlanningBoardItemStatus fromStatus, EMETA_PlanningBoardItemStatus toStatus);
    
};

