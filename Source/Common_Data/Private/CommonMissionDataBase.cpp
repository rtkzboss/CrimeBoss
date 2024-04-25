#include "CommonMissionDataBase.h"

FCommonMissionDataBase::FCommonMissionDataBase() {
    this->ID = NULL;
    this->MenuCategory = EIGS_MenuCategory::BigHeists;
    this->IsHubGeneratorMission = false;
    this->DistrictVariant = 0;
    this->ForceCharacter = EIGS_CharacterID::Char_Gen_Start;
}

