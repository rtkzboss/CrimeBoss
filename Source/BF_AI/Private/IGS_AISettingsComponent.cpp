#include "IGS_AISettingsComponent.h"

UIGS_AISettingsComponent::UIGS_AISettingsComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MeleeActivationDistance = 200.00f;
    this->PrimaryBashActivationDistance = 200.00f;
    this->SecondaryBashActivationDistance = 200.00f;
    this->m_PrimaryWeaponData = NULL;
    this->m_SecondaryWeaponData = NULL;
    this->m_MeleeWeaponData = NULL;
    this->m_ActiveSettingsID = NULL;
}


