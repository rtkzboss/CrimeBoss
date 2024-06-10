#include "MovieSceneFloatValueSerializationHelper.h"

FMovieSceneFloatValueSerializationHelper::FMovieSceneFloatValueSerializationHelper() {
    (*this).Value = 0.000000000e+00f;
    (*this).InterpMode = RCIM_Linear;
    (*this).TangentMode = RCTM_Auto;
    (*this).Tangent.ArriveTangent = 0.000000000e+00f;
    (*this).Tangent.LeaveTangent = 0.000000000e+00f;
    (*this).Tangent.TangentWeightMode = RCTWM_WeightedNone;
    (*this).Tangent.ArriveTangentWeight = 0.000000000e+00f;
    (*this).Tangent.LeaveTangentWeight = 0.000000000e+00f;
}

