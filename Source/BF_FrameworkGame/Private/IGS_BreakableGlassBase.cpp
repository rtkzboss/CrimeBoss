#include "IGS_BreakableGlassBase.h"
#include "Components/SceneComponent.h"

AIGS_BreakableGlassBase::AIGS_BreakableGlassBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bReplicates = true;
    const FProperty* p_RemoteRole = GetClass()->FindPropertyByName("RemoteRole");
    (*p_RemoteRole->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(this)) = ROLE_SimulatedProxy;
    this->NetDormancy = DORM_Initial;
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->Root = (USceneComponent*)RootComponent;
    this->GlassPanelPreset = EIGS_GlassRegularPreset::Panel_200X105;
    this->ScaleUniform = 1.00f;
    this->ScaleY = 1.00f;
    this->ScaleZ = 1.00f;
    this->GlassType = Rectangular;
    this->bCanEverAffectNavigation = false;
}


