#include "BTTask_RequestAnimationTask.h"

UBTTask_RequestAnimationTask::UBTTask_RequestAnimationTask() {
    auto& gen510 = (*this).MontageTypeBlackBoardKey.AllowedTypes;
    gen510.Empty();
    gen510.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MontageTypeBlackBoardKey, 0)) = 255;
    auto& gen511 = (*this).AnimationCommandKey.AllowedTypes;
    gen511.Empty();
    gen511.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).AnimationCommandKey, 0)) = 255;
    (*this).bCanBeAborted = true;
    auto& gen512 = (*this).PlayTimeBlackBoardKey.AllowedTypes;
    gen512.Empty();
    gen512.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).PlayTimeBlackBoardKey, 0)) = 255;
    (*this).NodeName = TEXT("Request Animation Task");
}


