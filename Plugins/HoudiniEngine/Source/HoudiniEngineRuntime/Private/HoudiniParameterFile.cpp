#include "HoudiniParameterFile.h"
#include "EHoudiniParameterType.h"

UHoudiniParameterFile::UHoudiniParameterFile() {
    (*this).ParmType = EHoudiniParameterType::File;
}


