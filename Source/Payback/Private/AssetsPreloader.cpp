#include "AssetsPreloader.h"

AAssetsPreloader::AAssetsPreloader(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShouldPreload = true;
    this->VODatabase = NULL;
}


