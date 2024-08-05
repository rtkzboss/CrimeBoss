#include "IGS_AvoidanceAnimationTable.h"

FIGS_AvoidanceAnimationTable::FIGS_AvoidanceAnimationTable() {
    (*this).ID = nullptr;
    (*this).Stand_Flinch.Empty();
    (*this).Stand_StepAvoidance_L_Short.Empty();
    (*this).Stand_StepAvoidance_R_Short.Empty();
    (*this).Stand_StepAim_L_Short.Empty();
    (*this).Stand_StepAim_R_Short.Empty();
    (*this).Stand_StepAvoidance_L_Medium.Empty();
    (*this).Stand_StepAvoidance_R_Medium.Empty();
    (*this).Stand_StepAvoidance_L_Long.Empty();
    (*this).Stand_StepAvoidance_R_Long.Empty();
    (*this).Crouch_Flinch.Empty();
    (*this).Crouch_StepAvoidance_L_Short.Empty();
    (*this).Crouch_StepAvoidance_R_Short.Empty();
    (*this).Crouch_StepAim_L_Short.Empty();
    (*this).Crouch_StepAim_R_Short.Empty();
    (*this).Crouch_StepAvoidance_L_Medium.Empty();
    (*this).Crouch_StepAvoidance_R_Medium.Empty();
    (*this).Crouch_StepAvoidance_L_Long.Empty();
    (*this).Crouch_StepAvoidance_R_Long.Empty();
    (*this).RollToStandShort.Empty();
    (*this).RollToCrouchShort.Empty();
    (*this).RollToStandMedium.Empty();
    (*this).RollToCrouchMedium.Empty();
    (*this).RollToStandLong.Empty();
    (*this).RollToCrouchLong.Empty();
}

