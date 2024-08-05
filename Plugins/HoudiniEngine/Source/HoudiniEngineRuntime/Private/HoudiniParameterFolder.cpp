#include "HoudiniParameterFolder.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterFolder::UHoudiniParameterFolder() {
    (*this).bExpanded = true;
    (*this).ParmType = EHoudiniParameterType::Folder;
}


