#include "BTService_StickyStillValid.h"

UBTService_StickyStillValid::UBTService_StickyStillValid() {
    auto& gen393 = (*this).StickToChar.AllowedTypes;
    gen393.Empty();
    gen393.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).StickToChar, 0)) = 255;
    (*this).InvalidTimeCommon.Min = 1.500000000e+01f;
    (*this).InvalidTimeCommon.Max = 2.000000000e+01f;
    (*this).InvalidTimeOutside.Min = 1.500000000e+01f;
    (*this).InvalidTimeOutside.Max = 2.000000000e+01f;
    (*this).NodeName = TEXT("Sticky Still Valid");
}


