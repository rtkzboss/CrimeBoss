#include "IGS_ScopeModData.h"

FIGS_ScopeModData::FIGS_ScopeModData() {
    this->IsDynamicScope = false;
    this->ScopeType = EIGS_ScopeType::Scope_Normal;
    this->WeaponTortillaAimFOV = 0.00f;
    this->ScopeInPercent = 0.00f;
}

