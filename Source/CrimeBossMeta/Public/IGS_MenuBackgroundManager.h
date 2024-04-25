#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "IGS_MenuBackgroundManager.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIMEBOSSMETA_API UIGS_MenuBackgroundManager : public UActorComponent {
    GENERATED_BODY()
public:
    UIGS_MenuBackgroundManager(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    FGameplayTag GetMenuBackgroundTagToShow();
    
};

