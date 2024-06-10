#include "BTTask_RotateToFaceBBEntryForever.h"

UBTTask_RotateToFaceBBEntryForever::UBTTask_RotateToFaceBBEntryForever() {
    auto& gen0 = (*this).BlackboardKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(3);
    (*this).NodeName = TEXT("Rotate to face BB entry forever");
}


