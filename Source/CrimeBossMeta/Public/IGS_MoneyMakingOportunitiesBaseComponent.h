#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "IGS_MoneyMakingOportunitiesBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_MoneyMakingOportunitiesBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_MoneyMakingOportunitiesBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartActivity();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanActivityStart();
    
};

