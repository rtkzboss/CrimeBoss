#include "IGS_BTTask_ThrowThrowableAICommand.h"

UIGS_BTTask_ThrowThrowableAICommand::UIGS_BTTask_ThrowThrowableAICommand() {
    auto& gen0 = (*this).BlackboardKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BlackboardKey, 0)) = 255;
    (*this).NodeName = TEXT("Throw Throwable - AI Command");
}


