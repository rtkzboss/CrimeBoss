#include "IGS_AbilityTask_PlayFPVAndTPVMontageAndWait.h"
#include "GameplayTask.h"

UIGS_AbilityTask_PlayFPVAndTPVMontageAndWait::UIGS_AbilityTask_PlayFPVAndTPVMontageAndWait() {
    (*this).Rate = 1.000000000e+00f;
    (*this).bStopWhenAbilityEnds = true;
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


