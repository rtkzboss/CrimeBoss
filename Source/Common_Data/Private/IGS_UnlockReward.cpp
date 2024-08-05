#include "IGS_UnlockReward.h"
#include "EIGS_CharacterID.h"

FIGS_UnlockReward::FIGS_UnlockReward() {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ID, 0)) = NAME_None;
    (*this).Type = EIGS_RewardType::UNKNOWN;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Description = FText::FromString(TEXT(""));
    (*this).Image = nullptr;
    (*this).UnlockTip = FText::FromString(TEXT(""));
    (*this).CharacterData.CharacterID = EIGS_CharacterID::Char_Unknown;
    (*this).CharacterData.bMaxLevel = false;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).MissionContractData.MissionID, 0)) = NAME_None;
}

