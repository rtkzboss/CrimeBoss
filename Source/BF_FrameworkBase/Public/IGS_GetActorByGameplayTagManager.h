#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "GameplayTagContainer.h"
#include "IGS_GetActorByGameplayTagManager.generated.h"

class AActor;
class UIGS_RandomStreamHolder;

UCLASS(Blueprintable)
class BF_FRAMEWORKBASE_API UIGS_GetActorByGameplayTagManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UIGS_GetActorByGameplayTagManager();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetRandomActorWithGameplayTagAndRandomStream(const FGameplayTag& inGameplayTag, UIGS_RandomStreamHolder* inRandomStreamHolder) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetRandomActorWithGameplayTag(const FGameplayTag& inGameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetFirstActorWithGameplayTag(const FGameplayTag& inGameplayTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetAllActorsWithGameplayTag(const FGameplayTag& inGameplayTag) const;
    
};

