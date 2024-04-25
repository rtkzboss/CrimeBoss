#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "EIGS_CharacterID.h"
#include "IGS_PlayerSwapActor.generated.h"

class AController;

UCLASS(Blueprintable)
class BF_FRAMEWORKGAME_API AIGS_PlayerSwapActor : public AActor {
    GENERATED_BODY()
public:
    AIGS_PlayerSwapActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Setup(AController* InController, EIGS_CharacterID inCharacterID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetup(AController* InController, EIGS_CharacterID inCharacterID);
    
};

