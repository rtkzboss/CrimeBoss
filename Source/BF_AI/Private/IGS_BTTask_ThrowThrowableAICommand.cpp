#include "IGS_BTTask_ThrowThrowableAICommand.h"

UIGS_BTTask_ThrowThrowableAICommand::UIGS_BTTask_ThrowThrowableAICommand() {
    auto& gen553 = (*this).BlackboardKey.AllowedTypes;
    gen553.Empty();
    gen553.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).BlackboardKey, 0)) = 255;
    (*this).NodeName = TEXT("Throw Throwable - AI Command");
}


