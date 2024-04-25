#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMETA_Gang.h"
#include "EMETA_GangAttitudeList.h"
#include "IGS_WarManagerBaseComponent.generated.h"

class UMapTile;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_WarManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_WarManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool TurfAttackAvailable();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<UMapTile*> GetTilesAvailableForAttack(EMETA_Gang inAttackerGang, const TArray<EMETA_Gang>& inPreferredGangs, bool inDoubledFriendCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<EMETA_Gang, int32> GetGangsWhichContainPlayerInAttitudeList(EMETA_GangAttitudeList inAttitudeList);
    
};

