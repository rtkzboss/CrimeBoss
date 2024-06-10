#include "IGS_GlobalGASComponent.h"
#include "ComponentInstanceDataCache.h"
#include "IGS_GASDefaultAttributesDataAsset.h"

UIGS_GlobalGASComponent::UIGS_GlobalGASComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    static ConstructorHelpers::FObjectFinder<UIGS_GASDefaultAttributesDataAsset> gen251(TEXT("/Game/00_Main/GameplayAbilitySystem/Attributes/DA_DefaultGlobalAttributes.DA_DefaultGlobalAttributes"));
    (*this).DefaultAttributesDataAsset = gen251.Object;
}


