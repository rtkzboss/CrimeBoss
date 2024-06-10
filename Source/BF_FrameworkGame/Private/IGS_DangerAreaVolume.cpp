#include "IGS_DangerAreaVolume.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "NavModifierComponent.h"
#include "EIGS_BoxSphereShape.h"

AIGS_DangerAreaVolume::AIGS_DangerAreaVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*TBaseStructure<FGameplayTag>::Get()->FindPropertyByName("TagName")->ContainerPtrToValuePtr<FName>(&(*this).DangerType, 0)) = TEXT("RestrictedAITags.GeneralReaction.Danger.Area");
    (*this).NavModifier = CreateDefaultSubobject<UNavModifierComponent>(TEXT("NavModifierComponent"));
    (*this).Color.B = 0;
    (*this).Color.G = 128;
    (*this).Color.R = 255;
    (*this).bGenerateOverlapEvents = false;
}

void AIGS_DangerAreaVolume::SetEnabled(bool inEnabled) {
}


