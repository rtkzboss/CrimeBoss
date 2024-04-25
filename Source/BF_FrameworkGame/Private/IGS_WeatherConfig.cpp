#include "IGS_WeatherConfig.h"

FIGS_WeatherConfig::FIGS_WeatherConfig() {
    this->WeatherScenario = EIGS_WeatherScenarioType::Weather_ClearSky;
    this->WindScenario = EIGS_WindScenarioType::Wind_Still;
    this->WindGeneralDirection = EIGS_WindGeneralDirectionsType::Any;
    this->WeatherUpdateInterval = 0.00f;
    this->bDynamicWind = false;
}

