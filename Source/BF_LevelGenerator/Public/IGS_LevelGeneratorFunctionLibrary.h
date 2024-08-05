#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "IGS_BuildConfiguration.h"
#include "IGS_BuildConfigurationTileable.h"
#include "IGS_ConnectionPointData.h"
#include "IGS_GeneratorVariantData.h"
#include "IGS_UsedNumbersHolder.h"
#include "IGS_LevelGeneratorFunctionLibrary.generated.h"

class AActor;
class AIGS_ConnectionPointBase;
class UIGS_GeneratorBuildConfiguration;
class UIGS_RandomStreamHolder;
class UObject;

UCLASS(Blueprintable)
class BF_LEVELGENERATOR_API UIGS_LevelGeneratorFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_LevelGeneratorFunctionLibrary();

    UFUNCTION(BlueprintCallable)
    static void RandomIntegerInRangeWithRandomStreamHolder(UPARAM(Ref) UIGS_RandomStreamHolder*& inRandomStream, int32 InRangeMin, int32 InRangeMax, int32& outInteger);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static bool LoadLevelAccordingToUObjectConfiguration(UObject* WorldContextObject, UIGS_GeneratorBuildConfiguration* UObjectConfiguration, const FIGS_ConnectionPointData& Connection, UIGS_RandomStreamHolder* RandomStreamHolder, FIGS_GeneratorVariantData GeneratorVariantData, TArray<FIGS_ConnectionPointData>& outFreeConnectionPoints);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static bool LoadLevelAccordingToTileConfiguration(UObject* WorldContextObject, FIGS_BuildConfigurationTileable Configuration, const FIGS_ConnectionPointData& Connection, UIGS_RandomStreamHolder* RandomStreamHolder, FIGS_GeneratorVariantData GeneratorVariantData, TArray<FIGS_ConnectionPointData>& outFreeConnectionPoints);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static bool LoadLevelAccordingToConfiguration(UObject* WorldContextObject, FIGS_BuildConfiguration Configuration, const FIGS_ConnectionPointData& Connection, UIGS_RandomStreamHolder* RandomStreamHolder, FIGS_GeneratorVariantData GeneratorVariantData, TArray<FIGS_ConnectionPointData>& outFreeConnectionPoints);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetRandomFromRandomStreamHolder(UIGS_RandomStreamHolder* RandomStreamHolder, int32 NumberOfResults, bool UniqueResult, bool LOOP, UPARAM(Ref) FIGS_UsedNumbersHolder& UsedNumbersHolder);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIsClient(AActor* inWCA);
    
    UFUNCTION(BlueprintCallable)
    static void GetGameplayTagParent(const FGameplayTag& inGameplayTag, FGameplayTag& outTagParent);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FIGS_ConnectionPointData GetConnectionPointData(AIGS_ConnectionPointBase* ConnectionPoint);
    
    UFUNCTION(BlueprintCallable)
    static void FindShortestPathInGrid(int32 Start, int32 Target, int32 rowSize, TArray<int32> bLocked, TArray<int32>& Path);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static UIGS_GeneratorBuildConfiguration* CreateUObjectConfigurationFromTile(UObject* WorldContextObject, FIGS_BuildConfigurationTileable inTileConfiguration);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext=WorldContextObject))
    static void CallVariantOnWorld(UObject* WorldContextObject, UIGS_RandomStreamHolder* RandomStreamHolder, FIGS_GeneratorVariantData inGeneratorVariantData, const FString& VariantName);
    
    UFUNCTION(BlueprintCallable)
    static bool AddLeafTag(UPARAM(Ref) FGameplayTagContainer& inContainer, const FGameplayTag& inTagToAdd);
    
};

