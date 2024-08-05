#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "IGS_SuspicionInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_SuspicionInterface : public UInterface {
    GENERATED_BODY()
};

class BF_FRAMEWORKGAME_API IIGS_SuspicionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOffenceReported(AActor* inReporter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnOffenceNoticed(AActor* inNoticer);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    AActor* GetOwningActor();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTagContainer GetOffences();
    
};

