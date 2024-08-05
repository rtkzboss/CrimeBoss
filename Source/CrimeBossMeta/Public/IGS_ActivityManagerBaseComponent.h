#pragma once
#include "CoreMinimal.h"
#include "EActivityTask.h"
#include "Components/ActorComponent.h"
#include "IGS_ActivityManagerBaseComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_ActivityManagerBaseComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_ActivityManagerBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartActivity(EActivityTask Task);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndActivity(EActivityTask Task, bool Success);
    
};

