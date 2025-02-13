#include "IGS_EnvQueryTest_HasLos.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "EnvironmentQuery/Contexts/EnvQueryContext_Querier.h"

UIGS_EnvQueryTest_HasLos::UIGS_EnvQueryTest_HasLos() {
    (*this).TraceData.ProjectDown = 1.024000000e+03f;
    (*this).TraceData.ProjectUp = 1.024000000e+03f;
    (*this).TraceData.ExtentX = 1.000000000e+01f;
    (*this).TraceData.ExtentY = 1.000000000e+01f;
    (*this).TraceData.ExtentZ = 1.000000000e+01f;
    (*this).TraceData.TraceMode = EEnvQueryTrace::Geometry;
    (*this).TraceData.bOnlyBlockingHits = true;
    (*this).TraceData.bCanTraceOnGeometry = true;
    (*this).Context = UEnvQueryContext_Querier::StaticClass();
    (*this).FilterType = EEnvTestFilterType::Match;
    (*this).ScoringEquation = EEnvTestScoreEquation::Constant;
}


