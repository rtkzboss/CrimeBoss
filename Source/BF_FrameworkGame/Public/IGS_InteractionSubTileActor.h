#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "IGS_InteractionSubTileActor.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_InteractionSubTileActor : public AActor {
    GENERATED_BODY()
public:
    AIGS_InteractionSubTileActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Success(AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShownEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnHiddenEvent();
    
    UFUNCTION(BlueprintCallable)
    void Activate(AIGS_GameCharacterFramework* inInstigator);
    
};

