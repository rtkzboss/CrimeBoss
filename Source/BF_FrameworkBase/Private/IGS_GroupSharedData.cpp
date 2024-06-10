#include "IGS_GroupSharedData.h"
#include "IGS_LocationsAroundTarget.h"
#include "IGS_TokenPool.h"

UIGS_GroupSharedData::UIGS_GroupSharedData() {
    static ConstructorHelpers::FObjectFinder<UIGS_TokenPool> gen252(TEXT("/Script/BF_FrameworkBase.Default__IGS_GroupSharedData:IGS_TokenPool_2147482640"));
    (*this).TokenPool = gen252.Object;
    static ConstructorHelpers::FObjectFinder<UIGS_LocationsAroundTarget> gen253(TEXT("/Script/BF_FrameworkBase.Default__IGS_GroupSharedData:IGS_LocationsAroundTarget_2147482639"));
    (*this).LocationsAroundTarget = gen253.Object;
}

UIGS_TokenPool* UIGS_GroupSharedData::GetTokenPool() const {
    return NULL;
}


