#include "BTDecorator_GR_CanRollToBB.h"

UBTDecorator_GR_CanRollToBB::UBTDecorator_GR_CanRollToBB() {
    auto& gen0 = (*this).TargetLocation.AllowedTypes;
    gen0.Empty();
    gen0.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).TargetLocation, 0)) = 255;
    auto& gen1 = (*this).OutAnimTag.AllowedTypes;
    gen1.Empty();
    gen1.AddDefaulted(1);
    (*TBaseStructure<FBlackboardKeySelector>::Get()->FindPropertyByName("SelectedKeyID")->ContainerPtrToValuePtr<uint8>(&(*this).OutAnimTag, 0)) = 255;
    (*this).DotProductTolerance = 5.000000075e-02f;
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).RollShortForward, 0)) = TEXT("Anim.Roll.ToStand.Short");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).RollMediumForward, 0)) = TEXT("Anim.Roll.ToStand.Medium");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).RollLongForward, 0)) = TEXT("Anim.Roll.ToStand.Long");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).DodgeShortLeft, 0)) = TEXT("Anim.Dodge.Step.Short.Left");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).DodgeMediumLeft, 0)) = TEXT("Anim.Dodge.Step.Medium.Left");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).DodgeShortRight, 0)) = TEXT("Anim.Dodge.Step.Short.Right");
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).DodgeMediumRight, 0)) = TEXT("Anim.Dodge.Step.Medium.Right");
    (*this).NodeName = TEXT("Can Roll to BB");
}


