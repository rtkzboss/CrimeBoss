#include "IGS_WeatherConfig.h"

FIGS_WeatherConfig::FIGS_WeatherConfig() {
    (*this).WeatherScenario = EIGS_WeatherScenarioType::Weather_ClearSky;
    (*this).WindScenario = EIGS_WindScenarioType::Wind_LightAir;
    (*this).WindGeneralDirection = EIGS_WindGeneralDirectionsType::Any;
    (*this).WeatherUpdateInterval = 1.000000000e+01f;
    (*this).bDynamicWind = false;
}

