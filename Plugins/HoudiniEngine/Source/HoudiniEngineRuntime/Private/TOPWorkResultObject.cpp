#include "TOPWorkResultObject.h"

FTOPWorkResultObject::FTOPWorkResultObject() {
    (*this).Name = TEXT("");
    (*this).FilePath = TEXT("");
    (*this).State = EPDGWorkResultState::None;
    (*this).WorkItemResultInfoIndex = -1;
    (*this).ResultOutputs.Empty();
    (*this).bAutoBakedSinceLastLoad = false;
    (*TBaseStructure<FOutputActorOwner>::Get()->FindPropertyByName("OutputActor")->ContainerPtrToValuePtr<AActor*>(&(*this).OutputActorOwner, 0)) = nullptr;
}

