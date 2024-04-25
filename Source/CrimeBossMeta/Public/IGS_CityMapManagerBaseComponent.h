#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EMETA_Gang.h"
#include "EMETA_TurfMissionDifficulty.h"
#include "IGS_CityMapManagerBaseComponent.generated.h"

class UMETA_BaseMission;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_CityMapManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_CityMapManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SelectMission(UMETA_BaseMission* inMission);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsCurrentBossTeritoryUnderAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMETA_TurfMissionDifficulty GetTurfMissionDifficulty(int32 inAiSoldiersAmount);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetTileWithMission(const UMETA_BaseMission* inMission, FGameplayTag& outTileID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetTileStrength(FGameplayTag inTileID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetPlayersTurfCount();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetGangsTurfCount(EMETA_Gang inGang);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAiBossStrength(EMETA_Gang inBossGang);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetAiArmyStrengthOnTileForGang(FGameplayTag inTileID, EMETA_Gang inBossGang);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetAiArmySizeOnTileForGang(FGameplayTag inTileID, EMETA_Gang inBossGang, int32& outAiArmySize, int32& outAiSoldiersSpawnedAtOnce, int32& outPlayersSoldiersSpawnedAtOnce);
    
};

