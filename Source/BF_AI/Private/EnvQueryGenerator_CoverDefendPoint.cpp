#include "EnvQueryGenerator_CoverDefendPoint.h"
#include "EnvQueryItemType_Cover.h"

UEnvQueryGenerator_CoverDefendPoint::UEnvQueryGenerator_CoverDefendPoint() {
    (*this).BoxHeight.DefaultValue = 2.000000000e+02f;
    (*this).ItemType = UEnvQueryItemType_Cover::StaticClass();
}


