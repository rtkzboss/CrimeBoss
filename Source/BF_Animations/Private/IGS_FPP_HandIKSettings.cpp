#include "IGS_FPP_HandIKSettings.h"

FIGS_FPP_HandIKSettings::FIGS_FPP_HandIKSettings() {
    (*this).R_Weight = 0.000000000e+00f;
    (*this).L_Weight = 0.000000000e+00f;
    (*this).Grip_Weight = 0.000000000e+00f;
    (*this).Magazine_T_Offset.X = 0.000000000e+00f;
    (*this).Magazine_T_Offset.Y = 0.000000000e+00f;
    (*this).Magazine_T_Offset.Z = 0.000000000e+00f;
    (*this).Magazine_R_Offset.Pitch = 0.000000000e+00f;
    (*this).Magazine_R_Offset.Yaw = 0.000000000e+00f;
    (*this).Magazine_R_Offset.Roll = 0.000000000e+00f;
}

