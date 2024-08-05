#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EMETA_Gang.h"
#include "EMETA_Heat.h"
#include "META_DetectiveInfo.h"
#include "Templates/SubclassOf.h"
#include "IGS_HeatManagerBaseComponent.generated.h"

class UMETA_DetectiveID;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_HeatManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_HeatManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPoliceInvestigationValue(bool inSetProgressValueAsMax, float inProgressValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetPlayersHeatState(EMETA_Heat inNewHeat);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetHeatValue(float inNewValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetPoliceInvestigationValue(float& outProgressValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMETA_Heat GetPlayersHeatState();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GetHeatValue(float& outHeatValue);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EMETA_Gang GetCurrentSheriffTargetGang();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TMap<TSubclassOf<UMETA_DetectiveID>, FMETA_DetectiveInfo> GetActiveDetectives();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ChangeHeatValue(float inByValue);
    
};

