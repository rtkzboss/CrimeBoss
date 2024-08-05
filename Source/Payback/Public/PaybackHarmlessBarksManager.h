#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PaybackHarmlessBarksManager.generated.h"

class AActor;
class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class PAYBACK_API UPaybackHarmlessBarksManager : public UActorComponent {
    GENERATED_BODY()
public:
    UPaybackHarmlessBarksManager(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EscapingStart(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void EscapingEnd(const AIGS_GameCharacterFramework* inInstigator);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DetectionStart(const AIGS_GameCharacterFramework* inInstigator, const AActor* inDetectingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DetectionEnd(const AIGS_GameCharacterFramework* inInstigator, const AActor* inDetectingCharacter);
    
};

