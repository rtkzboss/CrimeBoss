#include "IGS_AIDatabaseFPS.h"

UIGS_AIDatabaseFPS::UIGS_AIDatabaseFPS() {
    this->StoryDatabase = NULL;
    this->CanEdit = 0;
}

FIGS_AILoadout UIGS_AIDatabaseFPS::GetLoadout(const FIGS_AILoadoutHolder& inLoadoutHolder, const AIGS_AISpawnPoint* inSpawnPoint, bool inIsStory) const {
    return FIGS_AILoadout{};
}


