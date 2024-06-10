#include "IGS_SharedMetaTransfer_Data.h"

FIGS_SharedMetaTransfer_Data::FIGS_SharedMetaTransfer_Data() {
    (*this).MissionID.A = 0;
    (*this).MissionID.B = 0;
    (*this).MissionID.C = 0;
    (*this).MissionID.D = 0;
    auto& gen934 = (*this).Heisters;
    gen934.Empty();
    auto& gen935 = (*this).Detectives;
    gen935.Empty();
    auto& gen936 = (*this).PlayedPresets.PlayedPresets;
    gen936.Empty();
    (*this).UserDifficulty = EIGS_UserDifficulty::UD_Easy;
    (*this).LobbyVisibility = EMETA_LobbyVisibilityType::Private;
    (*this).MPLobbyType = EIGS_MPLobbyType::Normal;
}

