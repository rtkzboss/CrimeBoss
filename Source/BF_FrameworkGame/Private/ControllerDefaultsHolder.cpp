#include "ControllerDefaultsHolder.h"

FControllerDefaultsHolder::FControllerDefaultsHolder() {
    (*this).GangsterDefaultController = nullptr;
    (*this).GangsterSniperController = nullptr;
    (*this).GangsterShieldController = nullptr;
    (*this).GangsterHeavyController = nullptr;
    (*this).GangsterDetectiveController = nullptr;
    (*this).GangsterHeavyMeleeController = nullptr;
    (*this).BackupDefaultController = nullptr;
    (*this).BackupHeavyController = nullptr;
    (*this).SwatDefaultController = nullptr;
    (*this).SwatSniperController = nullptr;
    (*this).SwatShieldController = nullptr;
    (*this).SwatHeavyController = nullptr;
    (*this).SwatHeavyScoutController = nullptr;
    (*this).CopDefaultController = nullptr;
    (*this).GuardDefaultController = nullptr;
    (*this).EmployeeDefaultController = nullptr;
    (*this).CivilianDefaultController = nullptr;
}

