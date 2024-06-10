#include "MovieSceneFloatChannelSerializationHelper.h"

FMovieSceneFloatChannelSerializationHelper::FMovieSceneFloatChannelSerializationHelper() {
    (*this).PreInfinityExtrap = RCCE_Cycle;
    (*this).PostInfinityExtrap = RCCE_Cycle;
    (*this).Times.Empty();
    (*this).Values.Empty();
    (*this).DefaultValue = 0.000000000e+00f;
    (*this).bHasDefaultValue = false;
}

