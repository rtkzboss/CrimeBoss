#include "BTTask_Knockback.h"

UBTTask_Knockback::UBTTask_Knockback() {
    auto& gen0 = (*this).Actor.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).Actor, 0)) = 255;
    auto& gen1 = (*this).Location.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).Location, 0)) = 255;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Forward, 0)) = TEXT("Anim.HitReaction.Heavy.Front");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Backward, 0)) = TEXT("Anim.HitReaction.Heavy.Back");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Left, 0)) = TEXT("Anim.HitReaction.Heavy.Left");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).Right, 0)) = TEXT("Anim.HitReaction.Heavy.Right");
    (*this).NodeName = TEXT("Knockback");
}


