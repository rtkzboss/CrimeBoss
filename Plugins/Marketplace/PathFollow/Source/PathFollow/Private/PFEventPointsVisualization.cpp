#include "PFEventPointsVisualization.h"
#include "Engine/Texture2D.h"

FPFEventPointsVisualization::FPFEventPointsVisualization() {
    (*this).bHideEventPoints = false;
    (*this).bHideEventPointInfoText = false;
    (*this).EventPointsColor.B = 255;
    (*this).EventPointsColor.G = 0;
    (*this).EventPointsColor.R = 0;
    (*this).EventPointsColor.A = 255;
    (*this).EventPointHitProxySize = 2.000000000e+01f;
    static ConstructorHelpers::FObjectFinder<UTexture2D> gen0(TEXT("/PathFollow/event_sprite.event_sprite"));
    (*this)._EventPointSpriteTexture = gen0.Object;
}

