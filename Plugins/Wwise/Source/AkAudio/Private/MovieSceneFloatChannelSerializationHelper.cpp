#include "MovieSceneFloatChannelSerializationHelper.h"

FMovieSceneFloatChannelSerializationHelper::FMovieSceneFloatChannelSerializationHelper() {
    (*this).PreInfinityExtrap = RCCE_Cycle;
    (*this).PostInfinityExtrap = RCCE_Cycle;
    auto& gen1206 = (*this).Times;
    gen1206.Empty();
    auto& gen1207 = (*this).Values;
    gen1207.Empty();
    (*this).DefaultValue = 0.000000000e+00f;
    (*this).bHasDefaultValue = false;
}

