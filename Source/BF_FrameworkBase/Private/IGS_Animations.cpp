#include "IGS_Animations.h"

UIGS_Animations::UIGS_Animations() {
}

void UIGS_Animations::StopAnimMontageOnMesh(const USkeletalMeshComponent* MeshComponent, UAnimMontage* AnimMontage) {
}

void UIGS_Animations::StopAnimMontage(const ACharacter* Character, UAnimMontage* AnimMontage) {
}

void UIGS_Animations::SetAnimMontageSectionOnMesh(const USkeletalMeshComponent* MeshComponent, FName SectionNameToChange, FName NextSection, UAnimMontage* AnimMontage) {
}

void UIGS_Animations::SetAnimMontageSection(const ACharacter* Character, FName SectionNameToChange, FName NextSection, UAnimMontage* AnimMontage) {
}

void UIGS_Animations::PlayAnimMontageOnMesh(const USkeletalMeshComponent* MeshComponent, UAnimMontage* AnimMontage, float& OutLength, float& OutDuration, float InPlayRate, FName StartSectionName, float inStartPosition) {
}

void UIGS_Animations::PlayAnimMontage(const ACharacter* Character, UAnimMontage* AnimMontage, float& OutLength, float& OutDuration, float InPlayRate, FName StartSectionName, float inStartPosition) {
}


