#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "EMETA_Partner.h"
#include "Templates/SubclassOf.h"
#include "IGS_RandEventManagerBaseComponent.generated.h"

class UMETA_MissionID;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_RandEventManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_RandEventManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetEventAsActive(FGameplayTag inEventTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetReadyEventOfPartner(EMETA_Partner inPartner);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetEventRelatedToMission(TSubclassOf<UMETA_MissionID> inMissionID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    int32 GetEventPrice(FGameplayTag inEventTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetActiveEventOfPartner(EMETA_Partner inPartner);
    
};

