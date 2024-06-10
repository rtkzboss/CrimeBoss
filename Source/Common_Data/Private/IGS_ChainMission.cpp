#include "IGS_ChainMission.h"

FIGS_ChainMission::FIGS_ChainMission() {
    (*this).ID = nullptr;
    (*this).Name = FText::FromString(TEXT(""));
    (*this).Type = EIGS_ChainType::UrbanLegend;
    (*this).Difficulty = EIGS_ChainDifficulty::Unknown;
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
    auto& gen1860 = (*this).ChainStep;
    gen1860.Empty();
    auto& gen1861 = (*this).Star1Rewards;
    gen1861.Empty();
    auto& gen1862 = (*this).Star2Rewards;
    gen1862.Empty();
    auto& gen1863 = (*this).Star3Rewards;
    gen1863.Empty();
}

