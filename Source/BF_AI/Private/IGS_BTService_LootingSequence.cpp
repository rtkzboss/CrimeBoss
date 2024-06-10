#include "IGS_BTService_LootingSequence.h"

UIGS_BTService_LootingSequence::UIGS_BTService_LootingSequence() {
    auto& gen373 = (*this).BestLootingCollection.AllowedTypes;
    gen373.Empty();
    gen373.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BestLootingCollection, 0)) = 255;
    (*this).NodeName = TEXT("Looting Sequence");
}


