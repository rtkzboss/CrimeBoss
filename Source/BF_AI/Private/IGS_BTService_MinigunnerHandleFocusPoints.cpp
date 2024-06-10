#include "IGS_BTService_MinigunnerHandleFocusPoints.h"

UIGS_BTService_MinigunnerHandleFocusPoints::UIGS_BTService_MinigunnerHandleFocusPoints() {
    auto& gen374 = (*this).MoveToLookAtPosition.AllowedTypes;
    gen374.Empty();
    gen374.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MoveToLookAtPosition, 0)) = 255;
    (*this).NodeName = TEXT("Minigunner Handle Focus Points");
}


