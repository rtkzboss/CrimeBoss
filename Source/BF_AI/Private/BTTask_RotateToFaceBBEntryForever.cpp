#include "BTTask_RotateToFaceBBEntryForever.h"

UBTTask_RotateToFaceBBEntryForever::UBTTask_RotateToFaceBBEntryForever() {
    auto& gen521 = (*this).BlackboardKey.AllowedTypes;
    gen521.Empty();
    gen521.AddDefaulted(3);
    (*this).NodeName = TEXT("Rotate to face BB entry forever");
}


