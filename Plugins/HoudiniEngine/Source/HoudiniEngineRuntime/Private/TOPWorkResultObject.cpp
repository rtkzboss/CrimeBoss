#include "TOPWorkResultObject.h"

FTOPWorkResultObject::FTOPWorkResultObject() {
    (*this).Name = TEXT("");
    (*this).FilePath = TEXT("");
    (*this).State = EPDGWorkResultState::None;
    (*this).WorkItemResultInfoIndex = -1;
    auto& gen1610 = (*this).ResultOutputs;
    gen1610.Empty();
    (*this).bAutoBakedSinceLastLoad = false;
    (*TBaseStructure<FOutputActorOwner>::Get()->FindPropertyByName("OutputActor")->ContainerPtrToValuePtr<AActor*>(&(*this).OutputActorOwner, 0)) = nullptr;
}

