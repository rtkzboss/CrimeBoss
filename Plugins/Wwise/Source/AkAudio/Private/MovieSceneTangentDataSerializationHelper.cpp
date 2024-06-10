#include "MovieSceneTangentDataSerializationHelper.h"

FMovieSceneTangentDataSerializationHelper::FMovieSceneTangentDataSerializationHelper() {
    (*this).ArriveTangent = 0.000000000e+00f;
    (*this).LeaveTangent = 0.000000000e+00f;
    (*this).TangentWeightMode = RCTWM_WeightedNone;
    (*this).ArriveTangentWeight = 0.000000000e+00f;
    (*this).LeaveTangentWeight = 0.000000000e+00f;
}

