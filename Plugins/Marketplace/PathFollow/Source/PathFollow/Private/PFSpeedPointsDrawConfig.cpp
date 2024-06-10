#include "PFSpeedPointsDrawConfig.h"
#include "Engine/Texture2D.h"

FPFSpeedPointsDrawConfig::FPFSpeedPointsDrawConfig() {
    (*this).bHideSpeedPoints = false;
    (*this).bHideSpeedPointInfoText = false;
    (*this).SpeedPointsColor.B = 0;
    (*this).SpeedPointsColor.G = 255;
    (*this).SpeedPointsColor.R = 0;
    (*this).SpeedPointsColor.A = 255;
    (*this).SpeedPointHitProxySize = 2.000000000e+01f;
    static ConstructorHelpers::FObjectFinder<UTexture2D> gen1219(TEXT("/PathFollow/S_Speed.S_Speed"));
    (*this)._SpeedPointSpriteTexture = gen1219.Object;
    (*this).bVisualizeSpeed = false;
    (*this).LowSpeedColor.R = 0.000000000e+00f;
    (*this).LowSpeedColor.G = 1.000000000e+00f;
    (*this).LowSpeedColor.B = 0.000000000e+00f;
    (*this).LowSpeedColor.A = 1.000000000e+00f;
    (*this).HighSpeedColor.R = 1.000000000e+00f;
    (*this).HighSpeedColor.G = 0.000000000e+00f;
    (*this).HighSpeedColor.B = 0.000000000e+00f;
    (*this).HighSpeedColor.A = 1.000000000e+00f;
}

