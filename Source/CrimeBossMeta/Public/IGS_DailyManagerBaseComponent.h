#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_DailyManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_DailyManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_DailyManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateDay();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartNewDay();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
    int32 GetCurrentDay() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndDay();
    
};

