#include "IGS_WeaponSkinMaterialParameters.h"

FIGS_WeaponSkinMaterialParameters::FIGS_WeaponSkinMaterialParameters() {
    (*this).Albedo_Tint.R = 1.000000000e+00f;
    (*this).Albedo_Tint.G = 1.000000000e+00f;
    (*this).Albedo_Tint.B = 1.000000000e+00f;
    (*this).Albedo_Tint.A = 1.000000000e+00f;
    (*this).Albedo_Brightness = 1.000000000e+00f;
    (*this).Albedo_Contrast = 1.000000000e+00f;
    (*this).Albedo_Desaturate = 0.000000000e+00f;
    (*this).Albedo_HueShift = 0.000000000e+00f;
    (*this).Albedo_Texture = FSoftObjectPath(TEXT("/Game/00_Main/Weapons/TileSkins/T_CamoBrush_4_Skin.T_CamoBrush_4_Skin"), TEXT(""));
    (*this).Emissive_Albedo_Desaturate = 0.000000000e+00f;
    (*this).Emissive_Albedo_Mult = 1.000000000e+00f;
    (*this).Emissive_GlobalIntensity = 0.000000000e+00f;
    (*this).Emissive_MaskCustom_Use = 1.000000000e+00f;
    (*this).Emissive_MaskCustom = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/Utilities/T_Default_K.T_Default_K"), TEXT(""));
    (*this).Emissive_Min_Offset = 1.000000000e+00f;
    (*this).Normal_Intensity = 1.000000000e+00f;
    (*this).NormalMap = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/Utilities/T_Default_N.T_Default_N"), TEXT(""));
    (*this).Metallic_Offset = 0.000000000e+00f;
    (*this).Occlusion_Intensity = 1.000000000e+00f;
    (*this).ORM = FSoftObjectPath(TEXT("/Game/00_Main/Weapons/TileSkins/T_CamoBrush_04_ORM.T_CamoBrush_04_ORM"), TEXT(""));
    (*this).Roughness_Contrast = 1.000000000e+00f;
    (*this).Roughness_Offset = 0.000000000e+00f;
    (*this).Dust_Albedo.R = 4.313699901e-02f;
    (*this).Dust_Albedo.G = 3.529400006e-02f;
    (*this).Dust_Albedo.B = 1.568599977e-02f;
    (*this).Dust_Albedo.A = 1.000000000e+00f;
    (*this).Dust_BreakupMask = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/Utilities/T_Default_LC.T_Default_LC"), TEXT(""));
    (*this).Dust_BreakupMask_Contrast = 0.000000000e+00f;
    (*this).Dust_BreakupMask_Intensity = 0.000000000e+00f;
    (*this).Dust_BreakupMask_Tiling = 1.000000000e+01f;
    (*this).Dust_Global_Intensity = 0.000000000e+00f;
    (*this).Dust_Metallic = 0.000000000e+00f;
    (*this).Dust_Roughness = 9.499999881e-01f;
    (*this).Dust_Specular = 5.000000000e-01f;
    (*this).Scratches_Albedo.R = 3.137300164e-02f;
    (*this).Scratches_Albedo.G = 3.529400006e-02f;
    (*this).Scratches_Albedo.B = 5.098000169e-02f;
    (*this).Scratches_Albedo.A = 1.000000000e+00f;
    (*this).Scratches_BreakupMask = FSoftObjectPath(TEXT("/Game/00_Main/MaterialLibrary/Utilities/T_Default_LC.T_Default_LC"), TEXT(""));
    (*this).Scratches_BreakupMask_Contrast = 0.000000000e+00f;
    (*this).Scratches_BreakupMask_Intensity = 0.000000000e+00f;
    (*this).Scratches_BreakupMask_Tiling = 1.000000000e+01f;
    (*this).Scratches_Global_Intensity = 0.000000000e+00f;
    (*this).Scratches_Metallic = 3.000000119e-01f;
    (*this).Scratches_Roughness = 5.000000000e-01f;
    (*this).Scratches_Specular = 5.000000000e-01f;
    (*this).UV_Tiling = 1.000000000e+00f;
    (*this).UV_Rotation = 0.000000000e+00f;
    (*this).Albedo_Opacity = 3.000000119e-01f;
    (*this).Mask_Contrast = 0.000000000e+00f;
    (*this).Mask_Offset = 0.000000000e+00f;
    (*this).Normal_BlendIntensity = 1.000000000e+00f;
    (*this).Roughness_Opacity = 1.000000000e+00f;
}

