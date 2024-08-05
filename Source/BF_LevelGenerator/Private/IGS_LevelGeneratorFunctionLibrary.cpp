#include "IGS_LevelGeneratorFunctionLibrary.h"

UIGS_LevelGeneratorFunctionLibrary::UIGS_LevelGeneratorFunctionLibrary() {
}

void UIGS_LevelGeneratorFunctionLibrary::RandomIntegerInRangeWithRandomStreamHolder(UIGS_RandomStreamHolder*& inRandomStream, int32 InRangeMin, int32 InRangeMax, int32& outInteger) {
}

bool UIGS_LevelGeneratorFunctionLibrary::LoadLevelAccordingToUObjectConfiguration(UObject* WorldContextObject, UIGS_GeneratorBuildConfiguration* UObjectConfiguration, const FIGS_ConnectionPointData& Connection, UIGS_RandomStreamHolder* RandomStreamHolder, FIGS_GeneratorVariantData GeneratorVariantData, TArray<FIGS_ConnectionPointData>& outFreeConnectionPoints) {
    return false;
}

bool UIGS_LevelGeneratorFunctionLibrary::LoadLevelAccordingToTileConfiguration(UObject* WorldContextObject, FIGS_BuildConfigurationTileable Configuration, const FIGS_ConnectionPointData& Connection, UIGS_RandomStreamHolder* RandomStreamHolder, FIGS_GeneratorVariantData GeneratorVariantData, TArray<FIGS_ConnectionPointData>& outFreeConnectionPoints) {
    return false;
}

bool UIGS_LevelGeneratorFunctionLibrary::LoadLevelAccordingToConfiguration(UObject* WorldContextObject, FIGS_BuildConfiguration Configuration, const FIGS_ConnectionPointData& Connection, UIGS_RandomStreamHolder* RandomStreamHolder, FIGS_GeneratorVariantData GeneratorVariantData, TArray<FIGS_ConnectionPointData>& outFreeConnectionPoints) {
    return false;
}

int32 UIGS_LevelGeneratorFunctionLibrary::GetRandomFromRandomStreamHolder(UIGS_RandomStreamHolder* RandomStreamHolder, int32 NumberOfResults, bool UniqueResult, bool LOOP, FIGS_UsedNumbersHolder& UsedNumbersHolder) {
    return 0;
}

bool UIGS_LevelGeneratorFunctionLibrary::GetIsClient(AActor* inWCA) {
    return false;
}

void UIGS_LevelGeneratorFunctionLibrary::GetGameplayTagParent(const FGameplayTag& inGameplayTag, FGameplayTag& outTagParent) {
}

FIGS_ConnectionPointData UIGS_LevelGeneratorFunctionLibrary::GetConnectionPointData(AIGS_ConnectionPointBase* ConnectionPoint) {
    return FIGS_ConnectionPointData{};
}

void UIGS_LevelGeneratorFunctionLibrary::FindShortestPathInGrid(int32 Start, int32 Target, int32 rowSize, TArray<int32> bLocked, TArray<int32>& Path) {
}

UIGS_GeneratorBuildConfiguration* UIGS_LevelGeneratorFunctionLibrary::CreateUObjectConfigurationFromTile(UObject* WorldContextObject, FIGS_BuildConfigurationTileable inTileConfiguration) {
    return NULL;
}

void UIGS_LevelGeneratorFunctionLibrary::CallVariantOnWorld(UObject* WorldContextObject, UIGS_RandomStreamHolder* RandomStreamHolder, FIGS_GeneratorVariantData inGeneratorVariantData, const FString& VariantName) {
}

bool UIGS_LevelGeneratorFunctionLibrary::AddLeafTag(FGameplayTagContainer& inContainer, const FGameplayTag& inTagToAdd) {
    return false;
}


