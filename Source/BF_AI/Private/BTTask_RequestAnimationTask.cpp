#include "BTTask_RequestAnimationTask.h"

UBTTask_RequestAnimationTask::UBTTask_RequestAnimationTask() {
    auto& gen0 = (*this).MontageTypeBlackBoardKey.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).MontageTypeBlackBoardKey, 0)) = 255;
    auto& gen1 = (*this).AnimationCommandKey.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).AnimationCommandKey, 0)) = 255;
    (*this).bCanBeAborted = true;
    auto& gen2 = (*this).PlayTimeBlackBoardKey.AllowedTypes;
    gen2.Empty();
    gen2.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).PlayTimeBlackBoardKey, 0)) = 255;
    (*this).NodeName = TEXT("Request Animation Task");
}


