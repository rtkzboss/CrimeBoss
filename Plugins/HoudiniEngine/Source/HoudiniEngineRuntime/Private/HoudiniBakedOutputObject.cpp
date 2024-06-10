#include "HoudiniBakedOutputObject.h"

FHoudiniBakedOutputObject::FHoudiniBakedOutputObject() {
    (*this).Actor = TEXT("");
    (*this).Blueprint = TEXT("");
    (*this).ActorBakeName = NAME_None;
    (*this).BakedObject = TEXT("");
    (*this).BakedComponent = TEXT("");
    auto& gen1601 = (*this).InstancedActors;
    gen1601.Empty();
    auto& gen1602 = (*this).InstancedComponents;
    gen1602.Empty();
}

