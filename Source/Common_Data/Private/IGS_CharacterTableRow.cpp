#include "IGS_CharacterTableRow.h"

FIGS_CharacterTableRow::FIGS_CharacterTableRow() {
    this->ID = EIGS_CharacterID::Char_Gen_Start;
    this->bIsGeneric = false;
    this->bUseInRandomPool = false;
    this->Class = NULL;
    this->CharacterWieldable3PVModelScaleMultiplier = 0.00f;
    this->CharacterWieldableFPVModelScaleMultiplier = 0.00f;
    this->Quality = EMETA_ItemQuality::None;
}

