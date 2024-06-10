#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "IGS_WarzoneHelpers.generated.h"

class AIGS_AIEnemyGroupSpawner;
class AIGS_GameCharacterFramework;
class UObject;

UCLASS(Blueprintable)
class BF_AI_API UIGS_WarzoneHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UIGS_WarzoneHelpers();

    UFUNCTION(BlueprintCallable)
    static void WarzoneInitialSpawn(UObject* inWCO, TArray<AIGS_AIEnemyGroupSpawner*> inFriendlySpawners, int32 inFriendliesCount, TArray<AIGS_AIEnemyGroupSpawner*> inEnemySpawners, int32 inEnemyCounts, float spawnRectLenghtAllies, float spawnRectWidthAllies, float playerLenghtRatio, float spawnRectLenghtEnemies, float spawnRectWidthEnemies, float rectDistancesMin, float rectDistancesMax);
    
    UFUNCTION(BlueprintCallable)
    static TArray<AIGS_GameCharacterFramework*> GetWarzoneAttackGroupAddon(AIGS_GameCharacterFramework* inLeader, TArray<AIGS_GameCharacterFramework*> inCurrGroup, float inDistance, int32 inCount);
    
    UFUNCTION(BlueprintCallable)
    static int32 CallWarzoneReinforcment(UObject* inWCO, int32 inCount, bool inAllies);
    
    UFUNCTION(BlueprintCallable)
    static int32 CallWarzoneCaptain(UObject* inWCO, int32 inCount);
    
};

