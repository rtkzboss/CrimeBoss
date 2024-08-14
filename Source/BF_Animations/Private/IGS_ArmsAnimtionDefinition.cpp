#include "IGS_ArmsAnimtionDefinition.h"

FIGS_ArmsAnimtionDefinition::FIGS_ArmsAnimtionDefinition() {
    (*this).ShootingMontage = nullptr;
    (*this).IsMontageLooping = false;
    (*this).ShooterChangeMontage = nullptr;
    (*this).ReloadTacticalSilent = nullptr;
    (*this).ReloadNormalSilent = nullptr;
    (*this).CheckMagazineMontage = nullptr;
    (*this).ReloadTacticalFight = nullptr;
    (*this).ReloadNormalFight = nullptr;
    (*this).LadderShooting = nullptr;
    (*this).LadderShooterChange = nullptr;
}

