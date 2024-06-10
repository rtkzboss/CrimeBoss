#include "CommonMissionDataBase.h"

FCommonMissionDataBase::FCommonMissionDataBase() {
    (*this).ID = nullptr;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MissionTagID, 0)) = NAME_None;
    (*this).Map = NAME_None;
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("GameplayTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0)).Empty();
    (*TBaseStructure<FGameplayTagContainer>::Get()->FindPropertyByName("ParentTags")->ContainerPtrToValuePtr<TArray<FGameplayTag>>(&(*this).Scenarios, 0)).Empty();
    (*this).MenuCategory = EIGS_MenuCategory::UNKNOWN;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).IsHubGeneratorMission = false;
    (*this).DistrictVariant = 0;
    (*this).ForceCharacter = EIGS_CharacterID::Char_Gen_Start;
}

