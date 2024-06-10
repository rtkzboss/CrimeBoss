#include "DelayedCommand.h"

FDelayedCommand::FDelayedCommand() {
    (*TBaseStructure<FTimerHandle>::Get()->FindPropertyByName("Handle")->ContainerPtrToValuePtr<uint64>(&(*this).Timer, 0)) = 0;
    (*this).AICommand = nullptr;
}

