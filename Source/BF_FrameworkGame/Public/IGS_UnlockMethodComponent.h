#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "BF_OnUnlockMethodChosenDelegate.h"
#include "IGS_InteractiveComponent.h"
#include "IGS_UnlockMethodComponent.generated.h"

class AIGS_GameCharacterFramework;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKGAME_API UIGS_UnlockMethodComponent : public UIGS_InteractiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBF_OnUnlockMethodChosen OnServerUnlockMethodChosenEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBF_OnUnlockMethodChosen OnClientUnlockMethodChosenEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowUnusableMethods;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AIGS_GameCharacterFramework* CurrentInstigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer UnlockMethods;
    
    UIGS_UnlockMethodComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InitUnlockMethodComponent(FGameplayTagContainer inMethods);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetUnlockMethods();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUnlockMethodCount();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool GetCanBeUsed(FGameplayTag inMethod);
    
};

