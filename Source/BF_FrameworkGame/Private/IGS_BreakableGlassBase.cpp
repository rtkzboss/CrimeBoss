#include "IGS_BreakableGlassBase.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"

AIGS_BreakableGlassBase::AIGS_BreakableGlassBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    (*this).Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    (*this).GlassPanelPreset = EIGS_GlassRegularPreset::Panel_200X105;
    (*this).ScaleUniform = 1.000000000e+00f;
    (*this).ScaleY = 1.000000000e+00f;
    (*this).ScaleZ = 1.000000000e+00f;
    (*this).bReplicates = true;
    (*AActor::StaticClass()->FindPropertyByName("RemoteRole")->ContainerPtrToValuePtr<TEnumAsByte<ENetRole>>(&(*this), 0)) = ROLE_SimulatedProxy;
    (*this).NetDormancy = DORM_Initial;
    (*this).RootComponent = (USceneComponent*)Root;
}


