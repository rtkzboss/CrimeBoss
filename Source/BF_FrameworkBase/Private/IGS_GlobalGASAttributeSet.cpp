#include "IGS_GlobalGASAttributeSet.h"
#include "Net/UnrealNetwork.h"

UIGS_GlobalGASAttributeSet::UIGS_GlobalGASAttributeSet() {
}

void UIGS_GlobalGASAttributeSet::OnRep_EnemyAIReceiveDamage(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GlobalGASAttributeSet::OnRep_EnemyAIDamage(const FGameplayAttributeData& inOldValue) {
}

void UIGS_GlobalGASAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UIGS_GlobalGASAttributeSet, EnemyAIDamage);
    DOREPLIFETIME(UIGS_GlobalGASAttributeSet, EnemyAIReceiveDamage);
}


