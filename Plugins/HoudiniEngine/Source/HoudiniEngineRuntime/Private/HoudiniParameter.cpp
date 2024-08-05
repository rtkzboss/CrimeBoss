#include "HoudiniParameter.h"

UHoudiniParameter::UHoudiniParameter() {
    (*this).NodeId = -1;
    (*this).ParmId = -1;
    (*this).ParentParmId = -1;
    (*this).ChildIndex = -1;
    (*this).bIsVisible = true;
    (*this).bNeedsToTriggerUpdate = true;
    (*this).ValueIndex = -1;
    (*this).bAutoUpdate = true;
}


