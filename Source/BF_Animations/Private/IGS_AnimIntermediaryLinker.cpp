#include "IGS_AnimIntermediaryLinker.h"

FIGS_AnimIntermediaryLinker::FIGS_AnimIntermediaryLinker() {
    auto& gen2007 = (*this).m_LinkedGraphs;
    gen2007.Empty();
    auto& gen2008 = (*this).m_LoadedClasses;
    gen2008.Empty();
}

