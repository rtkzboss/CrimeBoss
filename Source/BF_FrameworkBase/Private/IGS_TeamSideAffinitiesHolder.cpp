#include "IGS_TeamSideAffinitiesHolder.h"

FIGS_TeamSideAffinitiesHolder::FIGS_TeamSideAffinitiesHolder() {
    auto& gen2092 = (*this).EnemySides;
    gen2092.Empty();
    auto& gen2093 = (*this).FriendlySides;
    gen2093.Empty();
}

