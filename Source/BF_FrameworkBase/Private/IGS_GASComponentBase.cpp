#include "IGS_GASComponentBase.h"
#include "Templates/SubclassOf.h"

UIGS_GASComponentBase::UIGS_GASComponentBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

void UIGS_GASComponentBase::TryCancelAbilityByClass(TSubclassOf<UGameplayAbility> InAbilityToActivate) {
}

void UIGS_GASComponentBase::Multicast_ReplicatedGameplayEvent_Implementation(FGameplayTag inEventTag, const FGameplayEventData inEventData) {
}
bool UIGS_GASComponentBase::Multicast_ReplicatedGameplayEvent_Validate(FGameplayTag inEventTag, const FGameplayEventData inEventData) {
    return true;
}

bool UIGS_GASComponentBase::HasActivatableAbilityOfByClass(TSubclassOf<UGameplayAbility> inAbilityClass) const {
    return false;
}

FGameplayAbilitySpecHandle UIGS_GASComponentBase::GiveAbilityStatic(UAbilitySystemComponent* inAbilitySystemComponent, const FGameplayAbilitySpec& inAbilitySpec) {
    return FGameplayAbilitySpecHandle{};
}

TArray<TSubclassOf<UGameplayAbility>> UIGS_GASComponentBase::GetActivatableAbilitiesByTagBlueprint(FGameplayTagContainer inAbilityTags) const {
    return TArray<TSubclassOf<UGameplayAbility>>();
}

TArray<TSubclassOf<UGameplayAbility>> UIGS_GASComponentBase::GetActivatableAbilitiesByClassBlueprint(TSubclassOf<UGameplayAbility> inAbilityClass) const {
    return TArray<TSubclassOf<UGameplayAbility>>();
}

TArray<TSubclassOf<UGameplayAbility>> UIGS_GASComponentBase::GetActivatableAbilitiesBlueprint() const {
    return TArray<TSubclassOf<UGameplayAbility>>();
}

void UIGS_GASComponentBase::DebugPrintStartingEffects() {
}

void UIGS_GASComponentBase::DebugPrintAllEffects() {
}

FGameplayAbilitySpec UIGS_GASComponentBase::CreateAbilitySpecSimple(TSubclassOf<UGameplayAbility> inAbilityClass, UObject* inSourceObject) {
    return FGameplayAbilitySpec{};
}

void UIGS_GASComponentBase::CancelAbilities(const FGameplayTagContainer inWithTags, const FGameplayTagContainer inWithoutTags) {
}

FActiveGameplayEffectHandle UIGS_GASComponentBase::ApplyEffectWithValue(UObject* inOwner, UAbilitySystemComponent* inAbilitySystemComponent, TSubclassOf<UGameplayEffect> inEffectClass, FGameplayTag inRuntimeValueTag, float inRuntimeValue) {
    return FActiveGameplayEffectHandle{};
}


