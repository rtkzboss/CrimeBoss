#pragma once
#include "CoreMinimal.h"
#include "EMETA_ObjectType.h"
#include "META_CharacterInfo.h"
#include "META_WeaponAmountInfo.h"
#include "META_TasksInfoSave.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "EMETA_BonusType.h"
#include "EMETA_GoalStatus.h"
#include "EMETA_GraphStatus.h"
#include "META_PlotlineGraphStartTime.h"
#include "Templates/SubclassOf.h"
#include "META_EventFunctionLibrary.generated.h"

class UIGS_BossLevelBaseComponent;
class UIGS_EquipmentInventoryObject;
class UMETA_BaseGoal;
class UMETA_BaseObject;
class UMETA_BaseStoryGraphManager;
class UMETA_Character;
class UMETA_Equipment;
class UMETA_PlotlineAsset;
class UMETA_Weapon;
class UMETA_WeaponInventoryObject;
class UObject;
class UStoryGraphManager;
class UTexture2D;
class UUserWidget;

UCLASS(Blueprintable)
class CRIMEBOSSMETA_API UMETA_EventFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMETA_EventFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static UTexture2D* WidgetToTexture(const UUserWidget* InWidget, const FVector2D& inDrawSize, TEnumAsByte<EPixelFormat> inFormat);
    
    UFUNCTION(BlueprintCallable)
    static void ToStartedGraphs(TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GraphStatus>& outStartedGraphs, const TMap<TSoftObjectPtr<UStoryGraphManager>, EMETA_GraphStatus>& StartedGraphs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ToSaveSavedParentGraphs(TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, TSoftObjectPtr<UMETA_BaseStoryGraphManager>>& outSavedParentGraphs, const TMap<TSoftObjectPtr<UStoryGraphManager>, TSoftObjectPtr<UStoryGraphManager>>& SavedParentGraphs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ToSavePreparedPlotlines(TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, int32>& outPreparedPlotlines, const TMap<TSoftObjectPtr<UStoryGraphManager>, int32>& PreparedPlotlines);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ToSaveFinishedGraphsResults(TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GoalStatus>& outFinishedGraphsResults, const TMap<TSoftObjectPtr<UStoryGraphManager>, EMETA_GoalStatus>& FinishedGraphsResults);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void ToSaveCrewEventsAndTheirGraphs(TMap<FGameplayTag, TSoftObjectPtr<UMETA_BaseStoryGraphManager>>& outCrewEventsAndTheirGraphs, const TMap<FGameplayTag, TSoftObjectPtr<UStoryGraphManager>>& CrewEventsAndTheirGraphs);
    
    UFUNCTION(BlueprintCallable)
    static void ToPlotlineGraphs(TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FMETA_PlotlineGraphStartTime>& outPlotlineGraphs, const TMap<TSoftObjectPtr<UStoryGraphManager>, FMETA_PlotlineGraphStartTime>& PlotlineGraphs);
    
    UFUNCTION(BlueprintCallable)
    static void ToGraphsTasks(TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FMETA_TasksInfoSave>& outGraphsTasks, const TMap<TSoftObjectPtr<UStoryGraphManager>, FMETA_TasksInfoSave>& GraphsTasks);
    
    UFUNCTION(BlueprintCallable)
    static void SortWeaponSubcategoryAndQuality(UPARAM(Ref) TArray<UMETA_Weapon*>& Weapons);
    
    UFUNCTION(BlueprintCallable)
    static void SortWeaponMapCategoryAndQuality(UPARAM(Ref) TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo>& Weapons);
    
    UFUNCTION(BlueprintCallable)
    static void SortWeaponCategoryAndQuality(UPARAM(Ref) TArray<UMETA_Weapon*>& Weapons);
    
    UFUNCTION(BlueprintCallable)
    static void SortHeistersByPrice(UPARAM(Ref) TArray<UMETA_Character*>& Heisters);
    
    UFUNCTION(BlueprintCallable)
    static void SortHeisterByQualityAndLevel(UPARAM(Ref) TArray<FMETA_CharacterInfo>& Heisters);
    
    UFUNCTION(BlueprintCallable)
    static void SortGoalsByType(UPARAM(Ref) TArray<UMETA_BaseGoal*>& Goals);
    
    UFUNCTION(BlueprintCallable)
    static void SortGoalsByPriority(UPARAM(Ref) TArray<UMETA_BaseGoal*>& inGoals, bool inAscSort);
    
    UFUNCTION(BlueprintCallable)
    static void SortEquipmentQuality(UPARAM(Ref) TArray<UMETA_Equipment*>& Equipment);
    
    UFUNCTION(BlueprintCallable)
    static void SortEquipmentByQuality(UObject* inWCO, UPARAM(Ref) TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>& Equipment);
    
    UFUNCTION(BlueprintCallable)
    static void SortBonusesByLevel(UPARAM(Ref) UIGS_BossLevelBaseComponent*& bossLevelManager, UPARAM(Ref) TMap<EMETA_BonusType, float>& Bonuses);
    
    UFUNCTION(BlueprintCallable)
    static void GetMetaObjectType(UMETA_BaseObject* inObject, EMETA_ObjectType& outObjectType, UMETA_Character*& outCharacter, UMETA_Weapon*& outWeapon, UMETA_PlotlineAsset*& outPlotlineAsset, UMETA_Equipment*& outEquipment);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UStoryGraphManager> FromStringToStoryGraphManager(const FString& inSoftPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UMETA_BaseStoryGraphManager> FromStoryToMeta(const TSoftObjectPtr<UStoryGraphManager> inMetaGraphManager);
    
    UFUNCTION(BlueprintCallable)
    static void FromStartedGraphs(const TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GraphStatus>& StartedGraphs, TMap<TSoftObjectPtr<UStoryGraphManager>, EMETA_GraphStatus>& outStartedGraphs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FromSaveSavedParentGraphs(const TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, TSoftObjectPtr<UMETA_BaseStoryGraphManager>>& SavedParentGraphs, TMap<TSoftObjectPtr<UStoryGraphManager>, TSoftObjectPtr<UStoryGraphManager>>& outSavedParentGraphs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FromSavePreparedPlotlines(const TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, int32>& PreparedPlotlines, TMap<TSoftObjectPtr<UStoryGraphManager>, int32>& outPreparedPlotlines);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FromSaveFinishedGraphsResults(const TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GoalStatus>& FinishedGraphsResults, TMap<TSoftObjectPtr<UStoryGraphManager>, EMETA_GoalStatus>& outFinishedGraphsResults);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static void FromSaveCrewEventsAndTheirGraphs(const TMap<FGameplayTag, TSoftObjectPtr<UMETA_BaseStoryGraphManager>>& CrewEventsAndTheirGraphs, TMap<FGameplayTag, TSoftObjectPtr<UStoryGraphManager>>& outCrewEventsAndTheirGraphs);
    
    UFUNCTION(BlueprintCallable)
    static void FromPlotlineGraphs(const TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FMETA_PlotlineGraphStartTime>& PlotlineGraphs, TMap<TSoftObjectPtr<UStoryGraphManager>, FMETA_PlotlineGraphStartTime>& outPlotlineGraphs);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TSoftObjectPtr<UStoryGraphManager> FromMetaToStory(const TSoftObjectPtr<UMETA_BaseStoryGraphManager> inMetaGraphManager);
    
    UFUNCTION(BlueprintCallable)
    static void FromGraphsTasks(const TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FMETA_TasksInfoSave>& GraphsTasks, TMap<TSoftObjectPtr<UStoryGraphManager>, FMETA_TasksInfoSave>& outGraphsTasks);
    
};

