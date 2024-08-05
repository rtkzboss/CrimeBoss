#include "PaybackSniperCharacter.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "EIGS_CharacterID.h"
#include "EIGS_TeamSideEnum.h"
#include "EIGS_UnitSpecialization.h"
#include "Net/UnrealNetwork.h"

APaybackSniperCharacter::APaybackSniperCharacter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).WeaponVisibilityType = EIGS_WeaponVisibilityType::VT_Laser;
}

void APaybackSniperCharacter::OnRep_WeaponVisibilityType() const {
}

void APaybackSniperCharacter::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(APaybackSniperCharacter, WeaponVisibilityType);
}


