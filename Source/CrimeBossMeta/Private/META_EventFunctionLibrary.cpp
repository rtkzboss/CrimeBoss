#include "META_EventFunctionLibrary.h"
#include "Templates/SubclassOf.h"

UMETA_EventFunctionLibrary::UMETA_EventFunctionLibrary() {
}

UTexture2D* UMETA_EventFunctionLibrary::WidgetToTexture(const UUserWidget* InWidget, const FVector2D& inDrawSize, TEnumAsByte<EPixelFormat> inFormat) {
    return NULL;
}

void UMETA_EventFunctionLibrary::ToStartedGraphs(TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GraphStatus>& outStartedGraphs, const TMap<TSoftObjectPtr<UStoryGraphManager>, EMETA_GraphStatus>& StartedGraphs) {
}

void UMETA_EventFunctionLibrary::ToSaveSavedParentGraphs(TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, TSoftObjectPtr<UMETA_BaseStoryGraphManager>>& outSavedParentGraphs, const TMap<TSoftObjectPtr<UStoryGraphManager>, TSoftObjectPtr<UStoryGraphManager>>& SavedParentGraphs) {
}

void UMETA_EventFunctionLibrary::ToSavePreparedPlotlines(TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, int32>& outPreparedPlotlines, const TMap<TSoftObjectPtr<UStoryGraphManager>, int32>& PreparedPlotlines) {
}

void UMETA_EventFunctionLibrary::ToSaveFinishedGraphsResults(TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GoalStatus>& outFinishedGraphsResults, const TMap<TSoftObjectPtr<UStoryGraphManager>, EMETA_GoalStatus>& FinishedGraphsResults) {
}

void UMETA_EventFunctionLibrary::ToSaveCrewEventsAndTheirGraphs(TMap<FGameplayTag, TSoftObjectPtr<UMETA_BaseStoryGraphManager>>& outCrewEventsAndTheirGraphs, const TMap<FGameplayTag, TSoftObjectPtr<UStoryGraphManager>>& CrewEventsAndTheirGraphs) {
}

void UMETA_EventFunctionLibrary::ToPlotlineGraphs(TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FMETA_PlotlineGraphStartTime>& outPlotlineGraphs, const TMap<TSoftObjectPtr<UStoryGraphManager>, FMETA_PlotlineGraphStartTime>& PlotlineGraphs) {
}

void UMETA_EventFunctionLibrary::ToGraphsTasks(TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FMETA_TasksInfoSave>& outGraphsTasks, const TMap<TSoftObjectPtr<UStoryGraphManager>, FMETA_TasksInfoSave>& GraphsTasks) {
}

void UMETA_EventFunctionLibrary::SortWeaponSubcategoryAndQuality(TArray<UMETA_Weapon*>& Weapons) {
}

void UMETA_EventFunctionLibrary::SortWeaponMapCategoryAndQuality(TMap<TSubclassOf<UMETA_WeaponInventoryObject>, FMETA_WeaponAmountInfo>& Weapons) {
}

void UMETA_EventFunctionLibrary::SortWeaponCategoryAndQuality(TArray<UMETA_Weapon*>& Weapons) {
}

void UMETA_EventFunctionLibrary::SortHeistersByPrice(TArray<UMETA_Character*>& Heisters) {
}

void UMETA_EventFunctionLibrary::SortHeisterByQualityAndLevel(TArray<FMETA_CharacterInfo>& Heisters) {
}

void UMETA_EventFunctionLibrary::SortGoalsByType(TArray<UMETA_BaseGoal*>& Goals) {
}

void UMETA_EventFunctionLibrary::SortGoalsByPriority(TArray<UMETA_BaseGoal*>& inGoals, bool inAscSort) {
}

void UMETA_EventFunctionLibrary::SortEquipmentQuality(TArray<UMETA_Equipment*>& Equipment) {
}

void UMETA_EventFunctionLibrary::SortEquipmentByQuality(UObject* inWCO, TArray<TSubclassOf<UIGS_EquipmentInventoryObject>>& Equipment) {
}

void UMETA_EventFunctionLibrary::SortBonusesByLevel(UIGS_BossLevelBaseComponent*& bossLevelManager, TMap<EMETA_BonusType, float>& Bonuses) {
}

void UMETA_EventFunctionLibrary::GetMetaObjectType(UMETA_BaseObject* inObject, EMETA_ObjectType& outObjectType, UMETA_Character*& outCharacter, UMETA_Weapon*& outWeapon, UMETA_PlotlineAsset*& outPlotlineAsset, UMETA_Equipment*& outEquipment) {
}

TSoftObjectPtr<UStoryGraphManager> UMETA_EventFunctionLibrary::FromStringToStoryGraphManager(const FString& inSoftPath) {
    return NULL;
}

TSoftObjectPtr<UMETA_BaseStoryGraphManager> UMETA_EventFunctionLibrary::FromStoryToMeta(const TSoftObjectPtr<UStoryGraphManager> inMetaGraphManager) {
    return NULL;
}

void UMETA_EventFunctionLibrary::FromStartedGraphs(const TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GraphStatus>& StartedGraphs, TMap<TSoftObjectPtr<UStoryGraphManager>, EMETA_GraphStatus>& outStartedGraphs) {
}

void UMETA_EventFunctionLibrary::FromSaveSavedParentGraphs(const TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, TSoftObjectPtr<UMETA_BaseStoryGraphManager>>& SavedParentGraphs, TMap<TSoftObjectPtr<UStoryGraphManager>, TSoftObjectPtr<UStoryGraphManager>>& outSavedParentGraphs) {
}

void UMETA_EventFunctionLibrary::FromSavePreparedPlotlines(const TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, int32>& PreparedPlotlines, TMap<TSoftObjectPtr<UStoryGraphManager>, int32>& outPreparedPlotlines) {
}

void UMETA_EventFunctionLibrary::FromSaveFinishedGraphsResults(const TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, EMETA_GoalStatus>& FinishedGraphsResults, TMap<TSoftObjectPtr<UStoryGraphManager>, EMETA_GoalStatus>& outFinishedGraphsResults) {
}

void UMETA_EventFunctionLibrary::FromSaveCrewEventsAndTheirGraphs(const TMap<FGameplayTag, TSoftObjectPtr<UMETA_BaseStoryGraphManager>>& CrewEventsAndTheirGraphs, TMap<FGameplayTag, TSoftObjectPtr<UStoryGraphManager>>& outCrewEventsAndTheirGraphs) {
}

void UMETA_EventFunctionLibrary::FromPlotlineGraphs(const TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FMETA_PlotlineGraphStartTime>& PlotlineGraphs, TMap<TSoftObjectPtr<UStoryGraphManager>, FMETA_PlotlineGraphStartTime>& outPlotlineGraphs) {
}

TSoftObjectPtr<UStoryGraphManager> UMETA_EventFunctionLibrary::FromMetaToStory(const TSoftObjectPtr<UMETA_BaseStoryGraphManager> inMetaGraphManager) {
    return NULL;
}

void UMETA_EventFunctionLibrary::FromGraphsTasks(const TMap<TSoftObjectPtr<UMETA_BaseStoryGraphManager>, FMETA_TasksInfoSave>& GraphsTasks, TMap<TSoftObjectPtr<UStoryGraphManager>, FMETA_TasksInfoSave>& outGraphsTasks) {
}


