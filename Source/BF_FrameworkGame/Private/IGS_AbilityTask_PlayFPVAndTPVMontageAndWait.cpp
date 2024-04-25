#include "IGS_AbilityTask_PlayFPVAndTPVMontageAndWait.h"

UIGS_AbilityTask_PlayFPVAndTPVMontageAndWait::UIGS_AbilityTask_PlayFPVAndTPVMontageAndWait() {
    this->FPVMontageToPlay = NULL;
    this->TPVMontageToPlay = NULL;
    this->Rate = 1.00f;
    this->StartTimeSeconds = 0.00f;
    this->bStopWhenAbilityEnds = true;
}

void UIGS_AbilityTask_PlayFPVAndTPVMontageAndWait::OnMontageInterrupted() {
}

void UIGS_AbilityTask_PlayFPVAndTPVMontageAndWait::OnMontageEnded(UAnimMontage* Montage, bool bInterrupted) {
}

void UIGS_AbilityTask_PlayFPVAndTPVMontageAndWait::OnMontageBlendingOut(UAnimMontage* Montage, bool bInterrupted) {
}

UIGS_AbilityTask_PlayFPVAndTPVMontageAndWait* UIGS_AbilityTask_PlayFPVAndTPVMontageAndWait::CreatePlayFPVAndTPVMontageAndWaitProxy(UGameplayAbility* OwningAbility, FName TaskInstanceName, UAnimMontage* NewFPVMontageToPlay, UAnimMontage* NewTPVMontageToPlay, float NewRate, FName NewStartSection, bool NewBStopWhenAbilityEnds, float NewStartTimeSeconds) {
    return NULL;
}


