#include "PFPathBase.h"
#include "PFPathComponent.h"

APFPathBase::APFPathBase(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<UPFPathComponent>(TEXT("PathToFollow"));
    this->PathToFollow = (UPFPathComponent*)RootComponent;
}


