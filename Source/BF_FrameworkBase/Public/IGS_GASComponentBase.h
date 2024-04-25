#pragma once
#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffectTypes.h"
#include "GameplayAbilitySpec.h"
#include "GameplayAbilitySpec.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "IGS_GASComponentBase.generated.h"

class UGameplayAbility;
class UGameplayEffect;
class UIGS_GASDefaultAttributesDataAsset;
class UObject;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BF_FRAMEWORKBASE_API UIGS_GASComponentBase : public UAbilitySystemComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UIGS_GASDefaultAttributesDataAsset* DefaultAttributesDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> DefaultGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ReplicatedGameplayEventTags;
    
public:
    UIGS_GASComponentBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TryCancelAbilityByClass(TSubclassOf<UGameplayAbility> InAbilityToActivate);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable, WithValidation)
    void Multicast_ReplicatedGameplayEvent(FGameplayTag inEventTag, const FGameplayEventData inEventData);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasActivatableAbilityOfByClass(TSubclassOf<UGameplayAbility> inAbilityClass) const;
    
    UFUNCTION(BlueprintCallable)
    static FGameplayAbilitySpecHandle GiveAbilityStatic(UAbilitySystemComponent* inAbilitySystemComponent, const FGameplayAbilitySpec& inAbilitySpec);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UGameplayAbility>> GetActivatableAbilitiesByTagBlueprint(FGameplayTagContainer inAbilityTags) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UGameplayAbility>> GetActivatableAbilitiesByClassBlueprint(TSubclassOf<UGameplayAbility> inAbilityClass) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<TSubclassOf<UGameplayAbility>> GetActivatableAbilitiesBlueprint() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugPrintStartingEffects();
    
    UFUNCTION(BlueprintCallable)
    void DebugPrintAllEffects();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayAbilitySpec CreateAbilitySpecSimple(TSubclassOf<UGameplayAbility> inAbilityClass, UObject* inSourceObject);
    
    UFUNCTION(BlueprintCallable)
    void CancelAbilities(const FGameplayTagContainer inWithTags, const FGameplayTagContainer inWithoutTags);
    
    UFUNCTION(BlueprintCallable)
    static FActiveGameplayEffectHandle ApplyEffectWithValue(UObject* inOwner, UAbilitySystemComponent* inAbilitySystemComponent, TSubclassOf<UGameplayEffect> inEffectClass, FGameplayTag inRuntimeValueTag, float inRuntimeValue);
    
};

