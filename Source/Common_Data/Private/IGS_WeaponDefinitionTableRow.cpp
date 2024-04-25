#include "IGS_WeaponDefinitionTableRow.h"

FIGS_WeaponDefinitionTableRow::FIGS_WeaponDefinitionTableRow() {
    this->ID = NULL;
    this->FPSWeaponID = NULL;
    this->SignatureCharacter = EIGS_CharacterID::Char_Gen_Start;
    this->Quality = EMETA_ItemQuality::None;
    this->bAllowedForGeneration = false;
}

