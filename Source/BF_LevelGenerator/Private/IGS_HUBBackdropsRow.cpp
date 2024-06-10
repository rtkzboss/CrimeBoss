#include "IGS_HUBBackdropsRow.h"

FIGS_HUBBackdropsRow::FIGS_HUBBackdropsRow() {
    (*this).bIsActive = true;
    (*this).RotationType = EIGS_HubRotation::RotateAll;
    (*this).BackdropType = EIGS_HubBackdropTypes::AllRandom;
    (*this).DistrictType = EIGS_HubDistrict::Downtown;
    (*this).DA_Art.BuildConfigurationDataAsset = nullptr;
    (*this).DA_Art.VariantIndex = 0;
    auto& gen1986 = (*this).Scenarios;
    gen1986.Empty();
}

