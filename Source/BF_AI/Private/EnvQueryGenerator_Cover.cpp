#include "EnvQueryGenerator_Cover.h"
#include "EnvQueryItemType_Cover.h"

UEnvQueryGenerator_Cover::UEnvQueryGenerator_Cover() {
    (*this).BoxHeight.DefaultValue = 2.000000000e+02f;
    (*this).ItemType = UEnvQueryItemType_Cover::StaticClass();
}


