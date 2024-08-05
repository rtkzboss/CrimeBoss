#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "IGS_AnimTypeVariantHolder.h"
#include "IGS_SmartObjectInterface.generated.h"

class AIGS_GameCharacterFramework;

UINTERFACE(Blueprintable)
class BF_FRAMEWORKGAME_API UIGS_SmartObjectInterface : public UInterface {
    GENERATED_BODY()
};

class BF_FRAMEWORKGAME_API IIGS_SmartObjectInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool ShouldPlayAnimation(AIGS_GameCharacterFramework* inUsingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyUserDied(AIGS_GameCharacterFramework* inUsingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyStartedUsing(AIGS_GameCharacterFramework* inUsingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyRequestedUse(AIGS_GameCharacterFramework* inUsingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyOutAnimationStart(AIGS_GameCharacterFramework* inUsingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyFinishedUsing(AIGS_GameCharacterFramework* inUsingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void NotifyBreakAnimationStart(AIGS_GameCharacterFramework* inUsingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLocked(AIGS_GameCharacterFramework* inAskingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FGameplayTag GetPlayAnimationTag(AIGS_GameCharacterFramework* inUsingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FIGS_AnimTypeVariantHolder GetPlayAnimation(AIGS_GameCharacterFramework* inUsingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetMoveToPointAndRotation(AIGS_GameCharacterFramework* inUsingCharacter, FVector& OutPosition, FRotator& OutRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    float GetAnimationPlayTime(AIGS_GameCharacterFramework* inUsingCharacter);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanPlayerBumpInto();
    
};

