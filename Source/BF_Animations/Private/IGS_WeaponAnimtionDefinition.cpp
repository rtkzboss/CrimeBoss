#include "IGS_WeaponAnimtionDefinition.h"

FIGS_WeaponAnimtionDefinition::FIGS_WeaponAnimtionDefinition() {
    (*this).ShootingMontage = nullptr;
    (*this).IsMontageLooping = false;
    (*this).ShooterChangeMontage = nullptr;
    (*this).LadderShooting = nullptr;
    (*this).LadderShooterChange = nullptr;
}

