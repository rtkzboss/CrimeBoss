#include "IGS_Common_DataDevSettings_SkinTextures.h"

UIGS_Common_DataDevSettings_SkinTextures::UIGS_Common_DataDevSettings_SkinTextures() {
    (*this).Albedo_Texture = FSoftObjectPath(TEXT("/Game/00_Main/Weapons/TileSkins/T_CamoBrush_4_Skin.T_CamoBrush_4_Skin"), TEXT(""));
    (*this).Emissive_MaskCustom = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/Utilities/T_Default_K.T_Default_K"), TEXT(""));
    (*this).NormalMap = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/Utilities/T_Default_N.T_Default_N"), TEXT(""));
    (*this).ORM = FSoftObjectPath(TEXT("/Game/00_Main/Weapons/TileSkins/T_CamoBrush_04_ORM.T_CamoBrush_04_ORM"), TEXT(""));
    (*this).Dust_BreakupMask = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/Utilities/T_Default_LC.T_Default_LC"), TEXT(""));
    (*this).Scratches_BreakupMask = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/Utilities/T_Default_LC.T_Default_LC"), TEXT(""));
}


