#include "IGS_SkinHandlerBase.h"

UIGS_SkinHandlerBase::UIGS_SkinHandlerBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->LoadedSkin = NULL;
    this->LoadedDefaultSkin = NULL;
    this->SkinnableMesh = NULL;
    this->bOverrideTortillaSetting = false;
    this->bForcedTortilla = false;
}


