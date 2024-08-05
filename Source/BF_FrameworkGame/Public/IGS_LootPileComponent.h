#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "IGS_LootPileComponent.generated.h"

class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_LootPileComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UIGS_LootPileComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddItem(AActor* inActor);
    
};

