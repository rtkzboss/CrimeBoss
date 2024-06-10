#include "IGS_ChainMission.h"

FIGS_ChainMission::FIGS_ChainMission() {
    (*this).ID = nullptr;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Type = EIGS_ChainType::UrbanLegend;
    (*this).Difficulty = EIGS_ChainDifficulty::Unknown;
    (*this).MenuImage = nullptr;
    (*this).Description = FText::FromString(TEXT(""));
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).UnlockCriteriaTag, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).EntitlementTag, 0)) = NAME_None;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).ContractSelectedVOType, 0)) = NAME_None;
    (*this).IntroCutscene = FText::FromString(TEXT(""));
    (*this).IntroMovie = nullptr;
    (*this).FailCutsceneOverride = FText::FromString(TEXT(""));
    (*this).FailMovieOverride = nullptr;
    (*this).OutroCutscene = FText::FromString(TEXT(""));
    (*this).OutroCutsceneChoiceForce = EIGS_MetaCutsceneNodeAction::MoveToNode;
    (*this).OutroMovie = nullptr;
    (*this).CrewID = nullptr;
    (*this).ChainStep.Empty();
    (*this).Star1Rewards.Empty();
    (*this).Star2Rewards.Empty();
    (*this).Star3Rewards.Empty();
}

