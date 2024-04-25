#include "IGS_ChainMission.h"

FIGS_ChainMission::FIGS_ChainMission() {
    this->ID = NULL;
    this->Type = EIGS_ChainType::UrbanLegend;
    this->Difficulty = EIGS_ChainDifficulty::Unknown;
    this->IntroMovie = NULL;
    this->FailMovieOverride = NULL;
    this->OutroCutsceneChoiceForce = EIGS_MetaCutsceneNodeAction::MoveToNode;
    this->OutroMovie = NULL;
    this->CrewID = NULL;
}

