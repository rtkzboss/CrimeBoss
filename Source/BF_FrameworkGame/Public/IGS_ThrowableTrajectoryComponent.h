#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"
#include "IGS_ThrowableTrajectoryComponent.generated.h"

class UIGS_ThrowableInventoryObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_ThrowableTrajectoryComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UIGS_ThrowableTrajectoryComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowPredictionChanged(bool inShow, TSubclassOf<UIGS_ThrowableInventoryObject> inPredictedClass);
    
};

